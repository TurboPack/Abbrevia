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

#include "CabExt1.h"
//---------------------------------------------------------------------------
#pragma link "AbCabExt"
#pragma link "AbCBrows"
#pragma link "AbArcTyp"
#pragma link "AbBase"
#pragma link "AbBrowse"
#pragma link "AbMeter"
#pragma resource "*.dfm"
TForm1 *Form1;

char MainCaption[] = "Cabinet Extractor";
bool AbortFlag;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  if (OpenDialog1->Execute()) {
    AbCabExtractor1->FileName = OpenDialog1->FileName;
    AbCabExtractor1->BaseDirectory = ExtractFilePath(AbCabExtractor1->FileName);
    Cursor = crHourGlass;
    AbCabExtractor1->ExtractFiles("*.*");
    Cursor = crDefault;
  }
  Caption = MainCaption;
  AbortFlag = False;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbCabExtractor1ConfirmProcessItem(TObject *Sender,
	TAbArchiveItem *Item, TAbProcessType ProcessType, bool &Confirm)
{
  Caption = "Extracting " + Item->FileName;
  Confirm = !AbortFlag;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  AbortFlag = True;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  AbCabExtractor1->FileName = "";	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbCabExtractor1RequestImage(TObject *Sender,
      Integer ImageNumber, AnsiString &ImageName, bool &Abort)
{
  Abort = InputQuery("Cab Extractor", "Next Cab name", ImageName);
}
//---------------------------------------------------------------------------
