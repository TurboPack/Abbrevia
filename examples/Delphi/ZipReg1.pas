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
{* ABBREVIA: ZIPREG1.PAS                                 *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit ZipReg1;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls,
  Forms, Dialogs, StdCtrls, ExtCtrls, Buttons;

type
  TExZipAssociation = class(TForm)
    CheckZipReg: TButton;
    RegZipExt: TButton;
    Replace: TCheckBox;
    ExitBtn: TButton;
    GroupBox1: TGroupBox;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Icon1: TImage;
    ID1: TEdit;
    FileType1: TEdit;
    App1: TEdit;
    Browse1: TSpeedButton;
    OpenDialog1: TOpenDialog;
    procedure CheckZipRegClick(Sender: TObject);
    procedure RegZipExtClick(Sender: TObject);
    procedure ExitBtnClick(Sender: TObject);
    procedure Browse1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  ExZipAssociation: TExZipAssociation;

implementation

{$R *.DFM}

uses
  AbZipExt, ShellApi;

var
  App, ID, FileType : string;
  FN  : array[0..255] of char;
  IconIndex : Word;


procedure TExZipAssociation.CheckZipRegClick(Sender: TObject);
begin
  App := '';
  ID := '';
  FileType := '';
  if AbGetZipAssociation(App, ID, FileType) then begin
    GroupBox1.Caption := ' ''zip'' is currently registered ';
    StrPCopy(FN, App);
    {$IFNDEF Win32}
    Icon1.Picture.Icon.Handle := ExtractIcon(HInstance, FN, 0);
    {$ELSE}
    Icon1.Picture.Icon.Handle := ExtractAssociatedIcon(HInstance, FN, IconIndex);
    {$ENDIF}
  end else begin
    GroupBox1.Caption := ' ''zip'' is not registered ';
    Icon1.Picture.Icon.Handle := 0;
  end;
  ID1.Text := ID;
  FileType1.Text := FileType;
  App1.Text := App;
end;

procedure TExZipAssociation.RegZipExtClick(Sender: TObject);
begin
  if (AbExistingZipAssociation and not Replace.Checked) then
    CheckZipRegClick(nil)
  else begin
    App := App1.Text;
    FileType := FileType1.Text;
    ID := ID1.Text;
    if AbRegisterZipExtension(App, ID, FileType, Replace.Checked) then
      CheckZipRegClick(nil)
    else begin
      GroupBox1.Caption := ' Error occurred during registration ';
      Icon1.Picture.Icon.Handle := 0;
    end;
  end;
end;

procedure TExZipAssociation.ExitBtnClick(Sender: TObject);
begin
  Close;
end;

procedure TExZipAssociation.Browse1Click(Sender: TObject);
begin
  OpenDialog1.Title := 'Select application to associate with ''zip'' files';
  OpenDialog1.Filename := '*.exe';
  if OpenDialog1.Execute then begin
    App := OpenDialog1.Filename;
    App1.Text := App;
  end;
end;

end.
