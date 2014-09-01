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

#include "UContent.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AbBase"
#pragma link "AbBrowse"
#pragma link "AbZBrows"
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
  ListBox1->Clear();
  if (OpenDialog1->Execute())
  {
    try
    {
      AbZipBrowser1->FileName = OpenDialog1->FileName;
      if (AbZipBrowser1->Count > 0)
        for (int i= 0; i<AbZipBrowser1->Count; i++)
            ListBox1->Items->Add(AbZipBrowser1->Items[i]->FileName);
    }
    catch (...)
    {
      ListBox1->Items->Add(OpenDialog1->FileName + " is not a valid archive.");
    }
  }
}
//---------------------------------------------------------------------------
 