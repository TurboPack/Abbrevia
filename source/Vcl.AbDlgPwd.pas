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
 * Roman Kassebaum
 *
 * ***** END LICENSE BLOCK ***** *)

{*********************************************************}
{* ABBREVIA: Vcl.AbDlgPwd.pas                            *}
{*********************************************************}
{* ABBREVIA: Dialog - Password                           *}
{*********************************************************}

unit Vcl.AbDlgPwd;

{$R *.dfm}

{$I AbDefine.inc}

interface

uses
  SysUtils, Windows, Graphics, Forms, Controls, StdCtrls, Buttons, ExtCtrls,
  Classes;

type
  TPassWordDlg = class(TForm)
    OKBtn: TButton;
    CancelBtn: TButton;
    Bevel1: TBevel;
    Edit1: TEdit;
    Edit2: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    procedure Edit1Change(Sender: TObject);
    procedure Edit2Change(Sender: TObject);
    procedure FormActivate(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  end;

implementation

uses
  AbResString;

procedure TPassWordDlg.Edit1Change(Sender: TObject);
begin
  Edit2.Text := '';
  OKBtn.Enabled := ( CompareStr( Edit1.Text, Edit2.Text ) = 0);
end;

procedure TPassWordDlg.Edit2Change(Sender: TObject);
begin
  OKBtn.Enabled := ( CompareStr( Edit1.Text, Edit2.Text ) = 0);
end;

procedure TPassWordDlg.FormActivate(Sender: TObject);
begin
  OKBtn.Enabled := ( CompareStr( Edit1.Text, Edit2.Text ) = 0);
end;

procedure TPassWordDlg.FormCreate(Sender: TObject);
begin
  Caption := AbEnterPasswordS;
  OKBtn.Caption := AbOKS;
  CancelBtn.Caption := AbCancelS;
  Label1.Caption := AbPasswordS;
  Label2.Caption := AbVerifyS;
end;

end.
