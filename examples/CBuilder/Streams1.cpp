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

#include "Streams1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AbArcTyp"
#pragma link "AbView"
#pragma link "AbZBrows"
#pragma link "AbZipKit"
#pragma link "AbZipper"
#pragma link "AbZView"
#pragma link "AbBase"
#pragma link "AbBrowse"
#pragma resource "*.dfm"
TForm1 *Form1;

char MainCaption[] = " Extract to (or Add from) stream";

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Open1Click(TObject *Sender)
{
  OpenDialog1->FileName = "*.zip";
  if (OpenDialog1->Execute())
    AbZipKit1->FileName = OpenDialog1->FileName;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Extract1Click(TObject *Sender)
{
  TMemoryStream* ToStream;
  Memo1->Clear();
  ToStream = new TMemoryStream;
  TAbArchiveItem* Item = AbZipView1->Items[AbZipView1->ActiveRow];
  Caption = Item->FileName;
  AbZipKit1->ExtractToStream(Item->FileName, ToStream);
  ToStream->Position = 0;
  Memo1->Lines->LoadFromStream(ToStream);
  delete(ToStream);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Close1Click(TObject *Sender)
{
  AbZipKit1->FileName = "";
  Caption = MainCaption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Exit1Click(TObject *Sender)
{
  Close1Click(0);
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipView1DblClick(TObject *Sender)
{
  Extract1Click(0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Clearmemo1Click(TObject *Sender)
{
  Memo1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Add1Click(TObject *Sender)
{
  TMemoryStream* FromStream;
  AnsiString FN;
  FromStream = new TMemoryStream;
  Memo1->Lines->SaveToStream(FromStream);
  if (InputQuery("Streams", "Give it a filename", FN)) {
    Caption = FN;
    AbZipKit1->AddFromStream(FN, FromStream);
  }
  delete(FromStream);
}
//---------------------------------------------------------------------------
