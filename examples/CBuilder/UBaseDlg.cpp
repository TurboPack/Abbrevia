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
/*********************************************************/
/*                      UBaseDlg.cpp                     */
/*********************************************************/
//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "UBaseDlg.h"
#include "UDemoDlg.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TBaseDirDlg *BaseDirDlg;
//---------------------------------------------------------------------------
__fastcall TBaseDirDlg::TBaseDirDlg(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBaseDirDlg::Button3Click(TObject *Sender)
{
  TDemoDlg* dlg = new TDemoDlg(this);
  try {
    dlg->Caption = "Create Subdirectory";
    dlg->Edit1->Text = "";
    dlg->ShowModal();
    if (dlg->ModalResult == mrOk && dlg->Edit1->Text != "" )
      AbCreateDirectory(DLB->Directory + "\\" + dlg->Edit1->Text);
    DLB->Update();
  }
  catch (...) {
    delete dlg;
    return;
  }
  delete dlg;
}
//---------------------------------------------------------------------------
