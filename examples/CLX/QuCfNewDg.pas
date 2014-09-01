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

unit QuCfNewDg;

interface

uses
  SysUtils, Classes, QGraphics, QForms, QStdCtrls, QControls, QDialogs;

type
  TfrmCfNewDlg = class(TForm)
    Label1: TLabel;
    edtVolLbl: TEdit;
    Label2: TLabel;
    lbAllocSize: TListBox;
    btnCancel: TButton;
    btnOK: TButton;
    procedure FormShow(Sender: TObject);
    procedure btnOKClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmCfNewDlg: TfrmCfNewDlg;

implementation

{$R *.xfm}

procedure TfrmCfNewDlg.FormShow(Sender: TObject);
begin
  lbAllocSize.ItemIndex := 2;
  edtVolLbl.SetFocus;  
end;

procedure TfrmCfNewDlg.btnOKClick(Sender: TObject);
begin
  if edtVolLbl.Text = '' then begin
    ShowMessage('Volume label required');
    edtVolLbl.SetFocus;
  end else
    ModalResult := mrOK;
end;

end.
