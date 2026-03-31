(* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is TurboPower Abbrevia
 *
 * The Initial Developer of the Original Code is Craig Peterson
 *
 * Portions created by the Initial Developer are Copyright (C) 2011
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 * Craig Peterson <capeterson@users.sourceforge.net>
 *
 * ***** END LICENSE BLOCK ***** *)

{*********************************************************}
{* ABBREVIA: AbPPMd.pas                                  *}
{*********************************************************}
{* ABBREVIA: PPMd decompression                          *}
{*********************************************************}

unit AbPPMd;

{$I AbDefine.inc}

interface

{$IFDEF MSWINDOWS}

uses
  Classes;

procedure DecompressPPMd(aSrc, aDes: TStream);

{$ENDIF}

implementation

{$IFDEF MSWINDOWS}

uses
  Windows,
  SysUtils, Types,
  AbCrtl, AbExcept;


{ Linker derectives ======================================================== }

// Don't re-order these;  it will cause linker errors
{$IF DEFINED(CPU386)}
  {$L Win32\Ppmd8Enc.obj}
  {$L Win32\Ppmd8.obj}
  {$L Win32\Ppmd8Dec.obj}
{$ELSEIF DEFINED(CPUX64)}
  {$L Win64\Ppmd8Enc.o}
  {$L Win64\Ppmd8.o}
  {$L Win64\Ppmd8Dec.o}
{$ELSEIF DEFINED(CPUARM64)}
  {$DEFINE USE_LIBPPMD}
  const libppmd = 'WinARM64EC\ppmd.a';
{$ELSE}
  {$FATAL 'Unsupported CPU/platform'}
{$IFEND}


{ 7zTypes.h ================================================================== }

type
  BoolInt = LongBool;

type
  IByteInPtr = ^IByteIn;
  IByteIn = record
    Read: function(p: IByteInPtr): Byte; cdecl; (* reads one byte, returns 0 in case of EOF or error *)
  end;

  IByteOutPtr = ^IByteOut;
  IByteOut = record
    Write: procedure(p: IByteOutPtr; b: Byte); cdecl;
  end;

  ISzAllocPtr = ^ISzAlloc;
  ISzAlloc = record
    Alloc: function(p: ISzAllocPtr; size: size_t): Pointer; cdecl;
    Free: procedure(p: ISzAllocPtr; address: Pointer); cdecl; (* address can be 0 *)
  end;


{ Ppmd.h ================================================================== }

const
  PPMD_N1 = 4;
  PPMD_N2 = 4;
  PPMD_N3 = 4;
  PPMD_N4 = ((128 + 3 - 1 * PPMD_N1 - 2 * PPMD_N2 - 3 * PPMD_N3) div 4);
  PPMD_NUM_INDEXES = (PPMD_N1 + PPMD_N2 + PPMD_N3 + PPMD_N4);

(* SEE-contexts for PPM-contexts with masked symbols *)
type
  CPpmd_See = record
    Summ: UInt16; (* Freq *)
    Shift: Byte;  (* Speed of Freq change; low Shift is for fast change *)
    Count: Byte;  (* Count to next change of Shift *)
  end;

type
  CPpmd_Void_Ref = Pointer;


{ Ppmd8.h ================================================================== }

type
  CPpmd_State = record
    Symbol: Byte;
    Freq: Byte;
    Successor_0: UInt16;
    Successor_1: UInt16;
  end;
  PPpmd_State = ^CPpmd_State;

  PPpmd8_Context = Pointer;

  CPpmd8 = record
    MinContext, MaxContext: PPpmd8_Context;
    FoundState: PPpmd_State;
    OrderFall, InitEsc, PrevSuccess, MaxOrder, RestoreMethod: Cardinal;
    RunLength, InitRL: Int32; (* must be 32-bit at least *)

    Size: UInt32;
    GlueCount: UInt32;
    AlignOffset: UInt32;
    Base, LoUnit, HiUnit, Text, UnitsStart: PByte;

    Range: UInt32;
    Code: UInt32;
    Low: UInt32;
    Stream: record
      case Integer of
        0: (In_: IByteInPtr);
        1: (Out_: IByteOutPtr);
    end;

    Indx2Units: array[0..PPMD_NUM_INDEXES + 1] of Byte; // +2 for alignment
    Units2Indx: array[0..127] of Byte;
    FreeList: array[0..PPMD_NUM_INDEXES-1] of CPpmd_Void_Ref;
    Stamps: array[0..PPMD_NUM_INDEXES-1] of UInt32;
    NS2BSIndx: array[0..255] of Byte;
    NS2Indx: array[0..259] of Byte;
    ExpEscape: array[0..15] of Byte;
    DummySee: CPpmd_See;
    See: array[0..23, 0..31] of CPpmd_See;
    BinSumm: array[0..24, 0..63] of UInt16;
  end;
  PPpmd8 = ^CPpmd8;

procedure Ppmd8_Construct(p: PPpmd8); cdecl; external
  {$IFDEF USE_LIBPPMD}libppmd{$ENDIF} name 'Ppmd8_Construct';
function Ppmd8_Alloc(p: PPpmd8; size: UInt32; alloc: ISzAllocPtr): BoolInt; cdecl;
  external {$IFDEF USE_LIBPPMD}libppmd{$ENDIF} name 'Ppmd8_Alloc';
procedure Ppmd8_Free(p: PPpmd8; alloc: ISzAllocPtr); cdecl; external
  {$IFDEF USE_LIBPPMD}libppmd{$ENDIF} name 'Ppmd8_Free';
procedure Ppmd8_Init(p: PPpmd8; maxOrder, restoreMethod: Cardinal); cdecl; external
  {$IFDEF USE_LIBPPMD}libppmd{$ENDIF} name 'Ppmd8_Init';
function Ppmd8_Init_RangeDec(p: PPpmd8): BoolInt; cdecl; external
  {$IFDEF USE_LIBPPMD}libppmd{$ENDIF} name 'Ppmd8_Init_RangeDec';
function Ppmd8_DecodeSymbol(p: PPpmd8): Integer; cdecl; external
  {$IFDEF USE_LIBPPMD}libppmd{$ENDIF} name 'Ppmd8_DecodeSymbol';

function Ppmd8_RangeDec_IsFinishedOK(p: PPpmd8): Boolean;
begin
  Result := (p^.Code = 0)
end;


{ Memory management ======================================================== }

function SzAlloc(p: ISzAllocPtr; size: size_t): Pointer; cdecl;
begin
  Result := AbCrtl.malloc(size);
end;
{ -------------------------------------------------------------------------- }
procedure SzFree(p: ISzAllocPtr; address: Pointer); cdecl;
begin
  AbCrtl.free(address);
end;

var
  DelphiMMInterface: ISzAlloc = (Alloc: SzAlloc; Free: SzFree);


{ Ppmd.c::CharReader ======================================================= }

type
  PPPMdCharReader = ^TPPMdCharReader;
  TPPMdCharReader = record
    streamIn: IByteIn; // Must be first so @IByteIn = Self
    // Private data
    stream: TStream;
    InPos: Integer;
    InCount: Integer;
    InBuf: array[0..4097] of Byte;
  end;
{ -------------------------------------------------------------------------- }
function TPPMdCharReader_IByteIn_Read(p: IByteInPtr): Byte; cdecl;
var
  Self: PPPMdCharReader absolute p;
begin
  if Self.InPos = Self.InCount then begin
    Self.InCount := Self.stream.Read(Self.InBuf, SizeOf(Self.InBuf));
    if Self.InCount = 0 then
      raise EAbReadError.Create;
    Self.InPos := 0;
  end;
  Result := Self.InBuf[Self.InPos];
  Inc(Self.InPos);
end;
{ -------------------------------------------------------------------------- }
function TPPMdCharReader_Create(aStream: TStream): PPPMdCharReader;
begin
  GetMem(Result, SizeOf(TPPMdCharReader));
  Result.streamIn.Read := TPPMdCharReader_IByteIn_Read;
  Result.stream := aStream;
  Result.InPos := 0;
  Result.InCount := 0;
end;


{ Decompression routines =================================================== }

procedure DecompressPPMd(aSrc, aDes: TStream);
// Based on 7-zip's ppmd.c::ppmd_decompress()
const
  OutBufSize = 4096;
var
  nextByte: Integer;
  ppmd: CPpmd8;
  Src: PPPMdCharReader;
  b0, b1, wPPMd, modelOrder, memMb, restoreMethod: Cardinal;
  finishedOK: Boolean;
  OutBuf: PByteArray;
  OutPos: Integer;
begin
  Src := TPPMdCharReader_Create(aSrc);
  try
    GetMem(OutBuf, OutBufSize);
    try
      OutPos := 0;

      b0 := Src.streamIn.Read(@Src.streamIn);
      b1 := Src.streamIn.Read(@Src.streamIn);
      wPPMd := b0 or (b1 shl 8);
      modelOrder := (wPPMd and $F) + 1;
      memMb := ((wPPMd shr 4) and $FF) + 1;
      restoreMethod := wPPMd shr 12;

      if (modelOrder < 2) or (restoreMethod > 1) then
        Exit;
      ppmd.Stream.In_ := @Src.streamIn;

      Ppmd8_Construct(@ppmd);
      if not Ppmd8_Alloc(@ppmd, memMb shl 20, @DelphiMMInterface) then
        Exit;
      try
        if not Ppmd8_Init_RangeDec(@ppmd) then
        begin
          Ppmd8_Free(@ppmd, @DelphiMMInterface);
          Exit;
        end;
        Ppmd8_Init(@ppmd, modelOrder, restoreMethod);

        while True do begin
          nextByte := Ppmd8_DecodeSymbol(@ppmd);
          if nextByte < 0 then
            Break;
          OutBuf[OutPos] := Byte(nextByte);
          Inc(OutPos);
          if OutPos = OutBufSize then begin
            aDes.WriteBuffer(OutBuf^, OutBufSize);
            OutPos := 0;
          end;
        end;
        if OutPos > 0 then
          aDes.WriteBuffer(OutBuf^, OutPos);

        finishedOK := Ppmd8_RangeDec_IsFinishedOK(@ppmd) and
          (Src.InPos = Src.InCount) and
          (Src.stream.Position = Src.stream.Size);
        if not finishedOK then
          raise EAbException.Create('Decompression failed');
      finally
        Ppmd8_Free(@ppmd, @DelphiMMInterface);
      end;
    finally
      FreeMem(OutBuf);
    end;
  finally
    FreeMem(Src);
  end;
end;

{$ENDIF}

end.
