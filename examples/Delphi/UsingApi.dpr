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
 *
 * ***** END LICENSE BLOCK ***** *)

{*********************************************************}
{* ABBREVIA: USINGAPI.DPR                                *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

{$APPTYPE CONSOLE}

program UsingAPI;

{Build this app using the Define "BuildingStub", to keep it smaller!}

uses
  AbArcTyp, AbZipTyp, AbZipPrc, AbUnzPrc, Classes, SysUtils, AbUtils;

type
  THelper = class
  public
    procedure UnzipProc( Sender : TObject; Item : TAbArchiveItem;
                         const NewName : string );
    procedure ZipProc( Sender : TObject; Item : TAbArchiveItem;
                       OutStream : TStream );
    procedure ArchiveItemProgress( Sender: TObject;
                                   Item: TAbArchiveItem;
                                   Progress: Byte;
                                   var Abort: Boolean);
  end;

procedure THelper.ArchiveItemProgress( Sender: TObject;
  Item: TAbArchiveItem; Progress: Byte; var Abort: Boolean);
type
  TMethodStrings = array [ cmStored..cmDCLImploded ] of string;
const
  MethodStrings : TMethodStrings = ('UnStoring', 'UnShrinking', 'UnReducing',
                                    'UnReducing', 'UnReducing', 'UnReducing',
                                    'Exploding', 'DeTokenizing', 'Inflating',
                                    'Enhanced Inflating', 'DCL Exploding');
var
  ActionString : string;
  CompMethod: TAbZipCompressionMethod;
begin
  case Item.Action of

    aaAdd : ActionString := 'Adding  ';
    aaFreshen : ActionString := 'Freshening  ';
    else begin
      CompMethod := (Item as TAbZipItem).CompressionMethod;
      if CompMethod in [cmStored..cmDCLImploded] then
        ActionString := MethodStrings[(Item as TAbZipItem).CompressionMethod] +
          '  '
      else
        ActionString := 'Decompressing  ';
    end;
  end;
  WriteLn( ActionString + Item.FileName );
end;

procedure THelper.UnzipProc( Sender : TObject; Item : TAbArchiveItem;
                             const NewName : string );
begin
  AbUnzip( Sender, TAbZipItem(Item), NewName );
end;

procedure THelper.ZipProc( Sender : TObject; Item : TAbArchiveItem;
                           OutStream : TStream );
begin
  AbZip( TAbZipArchive(Sender), TAbZipItem(Item), OutStream );
end;


var
  ZipFileName : string;
  OutDirectory : string;
  InDirectory : string;
  Mask : string;
  Archive : TAbZipArchive;
  Helper : THelper;
begin
  WriteLn;
  {usage: UsingAPI ZipFileName InDirectory Mask OutDirectory}
  if (ParamCount < 4) or
     ((ParamCount > 0) and (Pos('?', ParamStr(1))>0)) then begin
    WriteLn;
    WriteLn( '  Syntax: UsingAPI ZipFileName InDirectory Mask OutDirectory');
    Halt;
  end;

  ZipFileName := ParamStr(1);
  InDirectory := ParamStr(2);
  Mask := ParamStr(3);
  OutDirectory := ParamStr(4);
  {open the file}
  if FileExists( ZipFileName ) then begin
    Archive := TAbZipArchive.Create( ZipFileName,
                                     fmOpenReadWrite or fmShareDenyWrite );
    Archive.Load;
  end
  else
    Archive := TAbZipArchive.Create( ZipFileName,
                                     fmCreate or fmShareDenyNone );
  try
    Helper := THelper.Create;
    try
      {set the event handlers}
      Archive.InsertHelper := Helper.ZipProc;
      Archive.ExtractHelper := Helper.UnzipProc;
      Archive.OnArchiveItemProgress := Helper.ArchiveItemProgress;
      {set the BaseDirectory for input files}
      Archive.BaseDirectory := InDirectory;
      {add all the files in the BaseDirectory to the archive}
      Archive.AddFiles( Mask, 0 );
      {save the files to the zipfile}
      Archive.Save;
      {now, change the base directory to the output}
      Archive.BaseDirectory := OutDirectory;
      Archive.ExtractFiles( Mask );
    finally
      Helper.Free;
    end;
  finally
    Archive.Free;
  end;
end.
