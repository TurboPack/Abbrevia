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

#include "UMakeSfx.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AbBase"
#pragma link "AbSelfEx"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 if (AbMakeSelfExe1->Execute())
   ShowMessage(AbMakeSelfExe1->SelfExe + " has been created");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AbMakeSelfExe1GetStubExe(TObject *Sender,
      AnsiString &aFilename, bool &Abort)
{
  OpenDialog1->Title = "Select executable stub";
  OpenDialog1->FileName = "";
  OpenDialog1->Filter = "Exe files|*.exe";
  Abort = !OpenDialog1->Execute();
  if (!Abort)
    aFilename = OpenDialog1->FileName;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbMakeSelfExe1GetZipFile(TObject *Sender,
      AnsiString &aFilename, bool &Abort)
{
  OpenDialog1->Title = "Select executable stub";
  OpenDialog1->FileName = "";
  OpenDialog1->Filter = "Exe files|*.exe";
  Abort = !OpenDialog1->Execute();
  if (!Abort)
    aFilename = OpenDialog1->FileName;
}
//---------------------------------------------------------------------------
