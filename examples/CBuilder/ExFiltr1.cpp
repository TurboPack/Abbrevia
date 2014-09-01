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

#include "ExFiltr1.h"
//---------------------------------------------------------------------------#pragma link "AbMeter"
#pragma link "AbZView"
#pragma link "AbView"
#pragma link "Grids"
#pragma link "AbZipKit"
#pragma link "AbZipper"
#pragma link "AbZBrows"
#pragma link "AbArcTyp"

#pragma link "AbBase"
#pragma link "AbBrowse"
#pragma resource "*.dfm"
TForm1 *Form1;

char MainCaption[] = " ExFilter : Exception list example";
char AddCaption[] = " Add files to zip archive ";
char DeleteCaption[] = " Delete files from zip archive ";
char ExtractCaption[] = " Extract files from zip archive ";

bool AbortFlag;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OpenBtnClick(TObject *Sender)
{
  AbZipKit1->FileName = "";
  AddBtn->Enabled = False;
  DeleteBtn->Enabled = False;
  OpenDialog1->FileName = "*.zip";
  if (OpenDialog1->Execute()) {
    AbZipKit1->FileName = OpenDialog1->FileName;
    OpenBtn->Enabled = False;
    CloseBtn->Enabled = True;
    AddBtn->Enabled = True;
    DeleteBtn->Enabled = True;
    ExtractBtn->Enabled = True;
    AbZipView1->Enabled = True;
    Caption = " " + AbZipKit1->FileName;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CloseBtnClick(TObject *Sender)
{
  Screen->Cursor = crHourGlass;
  Caption = "Saving " + AbZipKit1->FileName;
  AbZipKit1->CloseArchive();
  Screen->Cursor = crDefault;
  OpenBtn->Enabled = True;
  CloseBtn->Enabled = False;
  AddBtn->Enabled = False;
  DeleteBtn->Enabled = False;
  ExtractBtn->Enabled = False;
  AbZipView1->Enabled = False;
  Caption = MainCaption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddBtnClick(TObject *Sender)
{
  AbortFlag = False;
  AbZipKit1->BaseDirectory = DirectoryListBox1->Directory;
  TColor SavedColor = AddGroup->Font->Color;
  AddGroup->Font->Color = clRed;
  AbZipKit1->AddFilesEx(FileMask1->Text, FilterMask1->Text, 0);
  AbZipKit1->Save();
  AddGroup->Font->Color = SavedColor;
  AddGroup->Caption = AddCaption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DeleteBtnClick(TObject *Sender)
{
  AbortFlag = False;
  TColor SavedColor = DeleteGroup->Font->Color;
  DeleteGroup->Font->Color = clRed;
  AbZipKit1->DeleteFilesEx(FileMask2->Text, FilterMask2->Text);
  AbZipKit1->Save();
  DeleteGroup->Font->Color = SavedColor;
  DeleteGroup->Caption = DeleteCaption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExtractBtnClick(TObject *Sender)
{
  AbortFlag = False;
  AbZipKit1->BaseDirectory = DirectoryListBox2->Directory;
  TColor SavedColor = ExtractGroup->Font->Color;
  ExtractGroup->Font->Color = clRed;
  AbZipKit1->ExtractFilesEx(FileMask3->Text, FilterMask3->Text);
  ExtractGroup->Font->Color = SavedColor;
  ExtractGroup->Caption = ExtractCaption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbortBtnClick(TObject *Sender)
{
  AbortFlag = True;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExitBtnClick(TObject *Sender)
{
  AbZipKit1->CloseArchive();
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  Caption = MainCaption;
  AddGroup->Caption = AddCaption;
  DeleteGroup->Caption = DeleteCaption;
  ExtractGroup->Caption = ExtractCaption;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipKit1ConfirmProcessItem(TObject *Sender,
	TAbArchiveItem *Item, TAbProcessType ProcessType, bool &Confirm)
{
  switch (ProcessType) {
    case ptAdd  : AddGroup->Caption = " Adding " + Item->FileName + " ";
      break;
    case ptDelete : DeleteGroup->Caption = " Deleting " + Item->FileName + " ";
      break;
    case ptExtract : ExtractGroup->Caption = " Extracting " + Item->FileName + " ";
      break;
  }
  Confirm = !AbortFlag;
}
//---------------------------------------------------------------------------