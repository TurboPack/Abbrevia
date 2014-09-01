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
{* ABBREVIA: UMAKESFX.PAS                                *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit umakesfx;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs, StdCtrls,

  AbArcTyp, AbSelfEx, AbBase;

type
  TForm1 = class(TForm)
    Memo1: TMemo;
    Button1: TButton;
    AbMakeSelfExe1: TAbMakeSelfExe;
    OpenDialog1: TOpenDialog;
    procedure Button1Click(Sender: TObject);
    procedure AbMakeSelfExe1GetStubExe(Sender: TObject;
      var aFilename: string; var Abort: Boolean);
    procedure AbMakeSelfExe1GetZipFile(Sender: TObject;
      var aFilename: string; var Abort: Boolean);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.DFM}
uses
  AbZipTyp;

procedure TForm1.Button1Click(Sender: TObject);
begin
 if AbMakeSelfExe1.Execute then
   ShowMessage(AbMakeSelfExe1.SelfExe + ' has been created');
end;

procedure TForm1.AbMakeSelfExe1GetStubExe(Sender: TObject;
  var aFilename: string; var Abort: Boolean);
begin
  OpenDialog1.Title := 'Select executable stub';
  OpenDialog1.Filename := '';
  OpenDialog1.Filter := 'Exe files|*.exe';
  Abort := not OpenDialog1.Execute;
  if not Abort then
    aFileName := OpenDialog1.Filename;
end;

procedure TForm1.AbMakeSelfExe1GetZipFile(Sender: TObject;
  var aFilename: string; var Abort: Boolean);
begin
  OpenDialog1.Title := 'Select Zip File';
  OpenDialog1.Filename := '';
  OpenDialog1.Filter := 'Zip files|*.zip';
  Abort := not OpenDialog1.Execute;
  if not Abort then
    aFileName := OpenDialog1.Filename;
end;

end.
