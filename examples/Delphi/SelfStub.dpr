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
{* ABBREVIA: SELFSTUB.DPR                                *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

(* This program creates a ZIP stub called SELFEX.EXE. This
stub can then be used to create self-extracting ZIP files.
For more information on self-extracting ZIPs and ZIP stubs see
page 112 in the Abbrevia manual. *)

program Selfstub;

{$APPTYPE CONSOLE}

uses
  AbArcTyp,
  AbUnzPrc,
  AbUtils,
  AbZipTyp,
  SysUtils;

type
  THelper = class
  public
    procedure UnzipProc(Sender : TObject;
                        Item : TAbArchiveItem;
                        const NewName : string);
  end;

procedure THelper.UnzipProc(Sender : TObject;
                            Item : TAbArchiveItem;
                            const NewName : string);
begin
  AbUnzip(Sender, TAbZipItem(Item), NewName);
end;

{Build this app using the Define "BuildingStub", to keep it smaller!}

var
  ZipArchive : TAbZipArchive;
  Helper : THelper;
begin
  WriteLn( 'Abbrevia Self Extracting Archive' );
  ZipArchive := TAbZipArchive.Create(ParamStr(0),
                                     fmOpenRead or fmShareDenyNone);
  ChDir( ExtractFilePath(ParamStr(0)));
  Helper := THelper.Create;
  try
    ZipArchive.Load;
    ZipArchive.ExtractHelper := Helper.UnzipProc;
    ZipArchive.ExtractFiles('*.*');
  finally
    Helper.Free;
    ZipArchive.Free;
  end;
end.
