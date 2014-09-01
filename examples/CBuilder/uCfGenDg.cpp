// ***** BEGIN LICENSE BLOCK *****
// * Version: MPL 1.1
// *
// * The contents of this file are subject to the Mozilla Public License Version
// * 1.1 (the "License"); you may not use this file except in compliance with
// * the License. You may obtain a copy of the License at
// * http://www.mozilla.org/MPL/
// *
// * Software distributed under the License is distributed on an "AS IS" basis,
// * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
// * for the specific language governing rights and limitations under the
// * License.
// *
// * The Original Code is TurboPower Abbrevia
// *
// * The Initial Developer of the Original Code is
// * TurboPower Software
// *
// * Portions created by the Initial Developer are Copyright (C) 1997-2002
// * the Initial Developer. All Rights Reserved.
// *
// * Contributor(s):
// *
// * ***** END LICENSE BLOCK *****
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "uCfGenDg.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmCfGenDlg *frmCfGenDlg;
//---------------------------------------------------------------------------
__fastcall TfrmCfGenDlg::TfrmCfGenDlg(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmCfGenDlg::FormShow(TObject *Sender)
{
  Edit1->Text = "";
  Edit1->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TfrmCfGenDlg::btnOKClick(TObject *Sender)
{
  if (Edit1->Text != "") {
    ModalResult = mrOk;
  }
}
//---------------------------------------------------------------------------
