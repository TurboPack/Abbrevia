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
 * The Initial Developer of the Original Code is
 * TurboPower Software
 *
 * Portions created by the Initial Developer are Copyright (C) 1997-2002
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 * Craig Peterson <capeterson@users.sourceforge.net>
 *
 * ***** END LICENSE BLOCK ***** *)

{*********************************************************}
{* ABBREVIA: AbCrtl.pas                                  *}
{*********************************************************}
{* ABBREVIA: C++Builder C runtime functions              *}
{*********************************************************}

unit AbCrtl;

{$I AbDefine.inc}

interface

{$IFDEF MSWINDOWS}

uses
  Winapi.Windows;

type
  size_t = NativeInt;

const
  __turboFloat: Integer = 0;
  _fltused: Integer = 0;

procedure abs; cdecl;
  external 'msvcrt.dll';
procedure _llshl; cdecl;
  external 'msvcrt.dll';
procedure _llushr; cdecl;
  external 'msvcrt.dll';
function _ftol(const AValue: Double): Integer; cdecl;
procedure pow; cdecl;
  external 'msvcrt.dll';


{ ctype.h declarations ===================================================== }
function isdigit(ch: Integer): Integer; cdecl;

{ string.h declarations ==================================================== }
function memcpy(Dest, Src: Pointer; Count: size_t): Pointer; cdecl;
function memmove(Dest, Src: Pointer; Count: size_t): Pointer; cdecl;
function memset(Dest: Pointer; Value: Byte; Count: size_t): Pointer; cdecl;
function _strdup(Str: PAnsiChar): PAnsiChar; cdecl;
function strlen(P: PAnsiChar): size_t; cdecl;
function strcpy(Des, Src: PAnsiChar): PAnsiChar; cdecl;
function strncpy(Des, Src: PAnsiChar; MaxLen: size_t): PAnsiChar; cdecl;

function memcmp(s1,s2: Pointer; numBytes: size_t): integer; cdecl;
  external 'msvcrt.dll';
function wcscpy(strDestination, strSource: PWideChar): PWideChar; cdecl;
  external 'msvcrt.dll';

{ stdlib.h declarations ==================================================== }
function calloc(num, size: size_t): Pointer; cdecl;
function malloc(Size: size_t): Pointer; cdecl;
procedure free(Ptr: Pointer); cdecl;
function realloc(Ptr: Pointer; Size: size_t): Pointer; cdecl;

{ intrin.h declarations ==================================================== }
procedure ___cpuid(CPUInfo: PInteger; InfoType: Integer); cdecl;
  external 'msvcrt.dll';

function sprintf(S: PChar; const Format: PChar): Integer; cdecl;

{ process.h declarations =================================================== }
function _beginthreadex(security: Pointer; stack_size: Cardinal;
  start_address: Pointer; arglist: Pointer; initflag: Cardinal;
  var thrdaddr: Cardinal): THandle; cdecl;

{ MSVC/Win64 declarations ================================================== }
{$IF Defined(BCB) and Defined(WIN64)}
procedure __C_specific_handler; cdecl;
{$ELSE}
procedure __C_specific_handler; cdecl; external 'msvcrt.dll';
{$ENDIF}
{$ENDIF}

implementation

{$IFDEF MSWINDOWS}

uses
  System.Win.Crtl, AbUtils;

{ ctype.h declarations ===================================================== }
function isdigit(ch: Integer): Integer; cdecl;
begin
  if AnsiChar(ch) in ['0'..'9'] then
    Result := 1
  else
    Result := 0;
end;

{ string.h declarations ==================================================== }
function memcpy(Dest, Src: Pointer; Count: size_t): Pointer; cdecl;
begin
  System.Move(Src^, Dest^, Count);
  Result := Dest;
end;
{ -------------------------------------------------------------------------- }
function memmove(Dest, Src: Pointer; Count: size_t): Pointer; cdecl;
begin
  System.Move(Src^, Dest^, Count);
  Result := Dest;
end;
{ -------------------------------------------------------------------------- }
function memset(Dest: Pointer; Value: Byte; Count: size_t): Pointer; cdecl;
begin
  FillChar(Dest^, Count, Value);
  Result := Dest;
end;
{ -------------------------------------------------------------------------- }
function _strdup(Str: PAnsiChar): PAnsiChar; cdecl;
var
  Len: size_t;
begin
  Len := strlen(Str) + 1;
  Result := malloc(Len);
  if Result <> nil then
    Move(Str^, Result^, Len);
end;
{ -------------------------------------------------------------------------- }
function strlen(P: PAnsiChar): size_t; cdecl;
{$IF (RTLVersion >= 20) AND DEFINED(CPU386)}
asm
  jmp System.@PCharLen
end;
{$ELSE}
begin
  Result := 0;
  while P^ <> #0 do
    Inc(P);
end;
{$IFEND}
{ -------------------------------------------------------------------------- }
function strcpy(Des, Src: PAnsiChar): PAnsiChar; cdecl;
begin
  Result := Des;
  Move(Src^, Des^, strlen(Src) + 1);
end;
{ -------------------------------------------------------------------------- }
function strncpy(Des, Src: PAnsiChar; MaxLen: size_t): PAnsiChar; cdecl;
var
  Len: size_t;
begin
  Len := strlen(Src);
  if Len > MaxLen then
    Len := MaxLen;
  Move(Src^, Des^, Len);
  if Len < MaxLen then
    FillChar(Des[Len], MaxLen - Len, 0);
  Result := Des;
end;

{ stdlib.h declarations ==================================================== }
function calloc(num, size: size_t): Pointer; cdecl;
begin
  Result := malloc(num * size);
  if Result <> nil then
    FillMemory(Result, num * size, 0);
end;
{ -------------------------------------------------------------------------- }
function malloc(Size: size_t): Pointer; cdecl;
begin
  try
    GetMem(Result, Size);
  except
    Result := nil;
  end;
end;
{ -------------------------------------------------------------------------- }
procedure free(Ptr: Pointer); cdecl;
begin
  FreeMem(Ptr)
end;
{ -------------------------------------------------------------------------- }
function realloc(Ptr: Pointer; Size: size_t): Pointer; cdecl;
begin
  try
    Result := ReallocMemory(Ptr, Size);
  except
    Result := nil;
  end;
end;

{ process.h declarations =================================================== }
function _beginthreadex(security: Pointer; stack_size: Cardinal;
  start_address: Pointer; arglist: Pointer; initflag: Cardinal;
  var thrdaddr: Cardinal): THandle; cdecl;
begin
  Result := CreateThread(security, stack_size, start_address, arglist,
    initflag, thrdaddr);
end;
{ -------------------------------------------------------------------------- }

function _ftol(const AValue: Double): Integer; cdecl;
begin
  Result := AbToInt32(Round(AValue));
end;

function sprintf(S: PChar; const Format: PChar): Integer;
begin
  Result := System.Win.Crtl.sprintf(PAnsiChar(AnsiString(S)), PAnsiChar(AnsiString(Format)));
end;

{$IF Defined(BCB) and Defined(WIN64)}
procedure __C_specific_handler;
begin
end;

{$ENDIF}

{$ENDIF}

end.
