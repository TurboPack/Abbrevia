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
#pragma hdrstop

#include "ExCBrow1.h"
//---------------------------------------------------------------------------
#pragma link "AbMeter"
#pragma link "AbCBrows"
#pragma link "AbArcTyp"
#pragma link "AbBase"
#pragma link "AbBrowse"
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
  if (OpenDialog1->Execute())
    AbCabBrowser1->FileName = OpenDialog1->FileName;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  AbCabBrowser1->FileName = "";
  Memo1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbCabBrowser1Load(TObject *Sender)
{
  Memo1->Clear();
  Memo1->Lines->Add(AbCabBrowser1->FileName);
  Memo1->Lines->Add("----------------------------------------------");
  String s = "  Size: \t \t ";
  Memo1->Lines->Add(s + IntToStr(AbCabBrowser1->CabSize));
  s = "  Folders: \t \t ";
  Memo1->Lines->Add(s + IntToStr(AbCabBrowser1->FolderCount));
  s = "  Files: \t \t ";
  Memo1->Lines->Add(s + IntToStr(AbCabBrowser1->Count));
  s = "  SetID: \t \t ";
  Memo1->Lines->Add(s + IntToStr(AbCabBrowser1->SetID));
  s = "  Cab #: \t \t ";
  Memo1->Lines->Add(s + IntToStr(AbCabBrowser1->CurrentCab));
  s = "  hasPrev: \t ";
  if (AbCabBrowser1->HasPrev)
    s = s + "Yes";
  else
    s = s + "No";
  Memo1->Lines->Add(s);
  s = "  hasNext: \t ";
  if (AbCabBrowser1->HasNext)
    s = s + "Yes";
  else
    s = s + "No";
  Memo1->Lines->Add(s);
  Memo1->Lines->Add("  ");

  if (AbCabBrowser1->Count > 0) {
    s = "Files: \t \t Size \t Timestamp \t Attributes \t Partial File";
    Memo1->Lines->Add(s);
    s = "------------------------------------------------------------------";
    Memo1->Lines->Add(s);
    for (int i=0; i<AbCabBrowser1->Count; i++) {
      Longint LI = AbCabBrowser1->Items[i]->LastModFileDate;
      LI = LI << 16;
      LI = LI + AbCabBrowser1->Items[i]->LastModFileTime;
      TDateTime DT = FileDateToDateTime(LI);
      s = AbCabBrowser1->Items[i]->FileName + "\t" +
        IntToStr(AbCabBrowser1->Items[i]->UncompressedSize) + "\t" +
        DateTimeToStr(DT) + "\t" +
        IntToStr(AbCabBrowser1->Items[i]->ExternalFileAttributes) + "\t";
      if (AbCabBrowser1->Items[i]->PartialFile)
        s = s + "Yes";
      else
        s = s + "No";
      Memo1->Lines->Add(s);
    }
  }
}
//---------------------------------------------------------------------------