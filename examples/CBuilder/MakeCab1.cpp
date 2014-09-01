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

#include "MakeCab1.h"
//---------------------------------------------------------------------------
#pragma link "AbMeter"
#pragma link "AbCabMak"
#pragma link "AbCBrows"
#pragma link "AbArcTyp"
#pragma link "AbBase"
#pragma link "AbBrowse"
#pragma resource "*.dfm"
TForm1 *Form1;
char MainCaption[] = "Make Cabinet archive";

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CreateBtnClick(TObject *Sender)
{
  OpenDialog1->FileName = "*.cab";
  OpenDialog1->Title = "Name of 1st cabinet";
  if (OpenDialog1->Execute()) {
    Panel1->Caption = "Creating " + OpenDialog1->FileName;
    AbMakeCab1->OpenArchive(OpenDialog1->FileName);
    Caption = AbMakeCab1->FileName;
    Panel1->Caption = "Idle";
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddBtnClick(TObject *Sender)
{
  OpenDialog1->FileName = "*.*";
  OpenDialog1->Title = "Add files to cabinet";
  if (OpenDialog1->Execute()) {
    if (OpenDialog1->Files->Count > 0) {
      TCursor SC = Cursor;
      Cursor = crHourGlass;
      for (int i=0; i<OpenDialog1->Files->Count; i++)
        AbMakeCab1->AddFiles(OpenDialog1->Files->Strings[i], 0);
      Cursor = SC;
      Panel1->Caption = "Idle";
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CloseBtnClick(TObject *Sender)
{
  Panel1->Caption = "Closing " + AbMakeCab1->FileName;
  AbMakeCab1->CloseArchive();
  Caption = MainCaption;
  Panel1->Caption = "Idle";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NewFolderBtnClick(TObject *Sender)
{
  AbMakeCab1->StartNewFolder();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NewCabBtnClick(TObject *Sender)
{
  AbMakeCab1->StartNewCabinet();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbMakeCab1ArchiveItemProgress(TObject *Sender,
      TAbArchiveItem *Item, BYTE Progress, bool &Abort)
{
  Panel1->Caption = "Adding " + ExtractFileName(Item->FileName);
  Abort = False;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbMakeCab1ConfirmProcessItem(TObject *Sender,
      TAbArchiveItem *Item, TAbProcessType ProcessType, bool &Confirm)
{
  String s = ExtractFileExt(Item->FileName);
  Confirm = True;
}
//---------------------------------------------------------------------------
