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
#include <vcl\vcl.h>
#include <vcl\shellapi.hpp>
#pragma hdrstop

#include "ZipReg1.h"
#include "AbZipExt.hpp"

#pragma link "AbZipExt.obj"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TForm1 *Form1;

String App, ID, Desc;
char  FN[256];
unsigned short IconIndex;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckZipRegClick(TObject *Sender)
{
  App = "";
  ID = "";
  Desc = "";
  if (AbGetZipAssociation(App, ID, Desc)) {
    GroupBox1->Caption = " ""zip"" is currently registered ";
    StrPCopy(FN, App);
    Icon1->Picture->Icon->Handle = ExtractAssociatedIcon(HInstance, FN, &IconIndex);
  }
  else {
    GroupBox1->Caption = " ""zip"" is not registered ";
    Icon1->Picture->Icon->Handle = 0;
  }
  ID1->Text = ID;
  Desc1->Text = Desc;
  App1->Text = App;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RegZipExtClick(TObject *Sender)
{
  if (AbExistingZipAssociation && !Replace->Checked)
    CheckZipRegClick(0);
  else {
    App = App1->Text;
    Desc = Desc1->Text;
    ID = ID1->Text;
    if (AbRegisterZipExtension(App, ID, Desc, Replace->Checked)) 
      CheckZipRegClick(0);
    else {
      GroupBox1->Caption = " Error occurred during registration ";
      Icon1->Picture->Icon->Handle = 0;
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExitBtnClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Browse1Click(TObject *Sender)
{
  OpenDialog1->Title = "Select application to associate with ""zip"" files";
  OpenDialog1->FileName = "*.exe";
  if (OpenDialog1->Execute()) {
    App = OpenDialog1->FileName;
    App1->Text = App;
  }
}
//--------------------------------------------------------------------------- 