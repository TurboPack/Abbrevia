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
{* ABBREVIA: UBASEDLG.PAS                                *}
{* Copyright (c) TurboPower Software Co 1997             *}
{* All rights reserved.                                  *}
{*********************************************************}
{* ABBREVIA Example program file                         *}
{*********************************************************}

unit ubasedlg;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, FileCtrl;

type
  TBaseDirDlg = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Edit1: TEdit;
    DriveComboBox1: TDriveComboBox;
    DLB: TDirectoryListBox;
    DirLabel: TLabel;
    ActionLabel: TLabel;
    CheckBox2: TCheckBox;
    CheckBox1: TCheckBox;
    Button3: TButton;
    procedure Button3Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  BaseDirDlg: TBaseDirDlg;

implementation

{$R *.DFM}

uses
  AbUtils,
  uDemoDlg;

procedure TBaseDirDlg.Button3Click(Sender: TObject);
begin
  DemoDlg := TDemoDlg.Create( Self );
  try
    DemoDlg.Caption := 'Create Subdirectory';
    DemoDlg.Edit1.Text := '';
    DemoDlg.ShowModal;
    if ( DemoDlg.ModalResult = mrOK ) and ( DemoDlg.Edit1.Text <> '' ) then
      AbCreateDirectory( DLB.Directory + '\' + DemoDlg.Edit1.Text );
    DLB.Update;
  finally
    DemoDlg.Free;
  end;
end;

end.
