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

#include "ZipView1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AbBase"
#pragma link "AbBrowse"
#pragma link "AbMeter"
#pragma link "AbView"
#pragma link "AbZBrows"
#pragma link "AbZipKit"
#pragma link "AbZipper"
#pragma link "AbZView"
#pragma resource "*.dfm"
TForm1 *Form1;

char MainCaption[] = "TAbZipView example";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AttributeClick(TObject *Sender)
{
  TMenuItem* Item = (TMenuItem*) Sender;
  Item->Checked = !Item->Checked;
  TAbViewAttributes Attrs = AbZipView1->Attributes;
  if (Item->Checked)
    AbZipView1->Attributes = Attrs << (TAbViewAttribute)Item->Tag;
  else
    AbZipView1->Attributes = Attrs >> (TAbViewAttribute)Item->Tag;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DisplayClick(TObject *Sender)
{
  TMenuItem* Item = (TMenuItem*) Sender;
  Item->Checked = !Item->Checked;
  TAbDisplayOptions Options = AbZipView1->DisplayOptions;
  if (Item->Checked)
    AbZipView1->DisplayOptions = Options << (TAbDisplayOption)Item->Tag;
  else
    AbZipView1->DisplayOptions = Options >> (TAbDisplayOption)Item->Tag;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MethodClick(TObject *Sender)
{
  TMenuItem* Item = (TMenuItem*) Sender;
  Item->Checked = true;
  AbZipKit1->CompressionMethodToUse = (TAbZipSupportedMethod)Item->Tag;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeflationClick(TObject *Sender)
{
  TMenuItem* Item = (TMenuItem*) Sender;
  Item->Checked = true;
  AbZipKit1->DeflationOption = (TAbZipDeflationOption)Item->Tag;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExtractOptionClick(TObject *Sender)
{
  TMenuItem* Item = (TMenuItem*) Sender;
  Item->Checked = !Item->Checked;
  TAbExtractOptions Options = AbZipKit1->ExtractOptions;
  if (Item->Checked)
    AbZipKit1->ExtractOptions = Options << (TAbExtractOption)Item->Tag;
  else
    AbZipKit1->ExtractOptions = Options >> (TAbExtractOption)Item->Tag;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StoreOptionClick(TObject *Sender)
{
  TMenuItem* Item = (TMenuItem*) Sender;
  Item->Checked = !Item->Checked;
  TAbStoreOptions Options = AbZipKit1->StoreOptions;
  if (Item->Checked)
    AbZipKit1->StoreOptions = Options << (TAbStoreOption)Item->Tag;
  else
    AbZipKit1->StoreOptions = Options >> (TAbStoreOption)Item->Tag;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SortAttributeClick(TObject *Sender)
{
  TMenuItem* Item = (TMenuItem*) Sender;
  Item->Checked = !Item->Checked;
  TAbSortAttributes Attrs = AbZipView1->SortAttributes;
  if (Item->Checked)
    AbZipView1->SortAttributes = Attrs << (TAbSortAttribute)Item->Tag;
  else
    AbZipView1->SortAttributes = Attrs >> (TAbSortAttribute)Item->Tag;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AbZipView1Click(TObject *Sender)
{
  Panel1->Caption = AbZipView1->Items[AbZipView1->ActiveRow]->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Open1Click(TObject *Sender)
{
  OpenDialog1->FileName = "*.zip";
  if (OpenDialog1->Execute())
  {
    AbZipView1->BeginUpdate();
    AbZipKit1->FileName = OpenDialog1->FileName;
    Caption = AbZipKit1->FileName +
      "   " + IntToStr(AbZipView1->Count) + " items";
    Action1->Enabled = True;
    AbZipView1->EndUpdate();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Close1Click(TObject *Sender)
{
  AbZipKit1->CloseArchive();
  Caption = MainCaption;
  Panel1->Caption = "";
  Action1->Enabled = False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SelectAll1Click(TObject *Sender)
{
  AbZipView1->SelectAll();
  AbZipView1Click(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClearSelections1Click(TObject *Sender)
{
  AbZipView1->ClearSelections();
  AbZipView1Click(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Font1Click(TObject *Sender)
{
  FontDialog1->Font = AbZipView1->Font;
  if (FontDialog1->Execute())
    AbZipView1->Font = FontDialog1->Font;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Exit1Click(TObject *Sender)
{
  Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeletedColor1Click(TObject *Sender)
{
  if (ColorDialog1->Execute())
    AbZipView1->Colors->Deleted = ColorDialog1->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeletedTextColor1Click(TObject *Sender)
{
  if (ColorDialog1->Execute())
    AbZipView1->Colors->DeletedText = ColorDialog1->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SelectedcolorClick(TObject *Sender)
{
  if (ColorDialog1->Execute())
    AbZipView1->Colors->Selected = ColorDialog1->Color;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SelectedtextcolorClick(TObject *Sender)
{
  if (ColorDialog1->Execute())
    AbZipView1->Colors->SelectedText = ColorDialog1->Color;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rowheight1Click(TObject *Sender)
{
  String s = IntToStr(AbZipView1->DefaultRowHeight);
  if (InputQuery(MainCaption, "Row Height", s))
    AbZipView1->DefaultRowHeight = StrToIntDef(s, 18);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Headerheight1Click(TObject *Sender)
{
  String s = IntToStr(AbZipView1->HeaderRowHeight);
  if (InputQuery(MainCaption, "Header Height", s))
    AbZipView1->HeaderRowHeight = StrToIntDef(s, 18);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Add1Click(TObject *Sender)
{
  OpenDialog1->FileName = "*.*";
  OpenDialog1->Options << ofAllowMultiSelect;
  AbZipView1->BeginUpdate();
  if (OpenDialog1->Execute())
  {
    for (int i=0; i<OpenDialog1->Files->Count; i++)
      AbZipKit1->AddFiles(OpenDialog1->Files->Strings[i], 0);
    AbZipKit1->Save();
    AbZipView1->EndUpdate();
    Panel1->Caption = "";
    OpenDialog1->Options >> ofAllowMultiSelect;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Delete1Click(TObject *Sender)
{
  Panel1->Caption = "";
  for (int i=0; i<AbZipView1->Count; i++)
    AbZipView1->Items[i]->Tagged = AbZipView1->Selected[i];
  AbZipKit1->DeleteTaggedItems();
  Panel1->Caption = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Extract1Click(TObject *Sender)
{
  TAbDirDlg* Dlg = new TAbDirDlg(this);
  Dlg->Caption = "Directory";
  Dlg->AdditionalText = "Select folder to extract into";
  Dlg->SelectedFolder = AbZipKit1->BaseDirectory;
  bool Continue = Dlg->Execute();
  if (Continue)
    AbZipKit1->BaseDirectory = Dlg->SelectedFolder;
  delete Dlg;
  if (!Continue)
    return;
  Panel1->Caption = "";
  for (int i=0; i<AbZipView1->Count; i++)
    AbZipView1->Items[i]->Tagged = AbZipView1->Selected[i];
  AbZipKit1->ExtractTaggedItems();
  AbZipView1->ClearSelections();
  Panel1->Caption = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Freshen1Click(TObject *Sender)
{
  Panel1->Caption = "";
  for (int i=0; i<AbZipView1->Count; i++)
    AbZipView1->Items[i]->Tagged = AbZipView1->Selected[i];
  AbZipKit1->FreshenTaggedItems();
  AbZipKit1->Save();
  AbZipView1->ClearSelections();
  Panel1->Caption = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Testselecteditems1Click(TObject *Sender)
{
  Panel1->Caption = "";
  for (int i=0; i<AbZipView1->Count; i++)
    AbZipView1->Items[i]->Tagged = AbZipView1->Selected[i];
  AbZipKit1->TestTaggedItems();
  AbZipView1->ClearSelections();
  Panel1->Caption = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AbZipKit1ConfirmProcessItem(TObject *Sender,
      TAbArchiveItem *Item, TAbProcessType ProcessType, bool &Confirm)
{
  String s = "??? ";
  switch (ProcessType) {
    case ptAdd : s = "Adding "; break;
    case ptDelete : s = "Deleting "; break;
    case ptExtract : s = "Extracting "; break;
    case ptFreshen : s = "Freshening "; break;
  }
  Panel1->Caption = s + Item->FileName;
  Confirm = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AbZipView1Change(TObject *Sender)
{
  Caption = AbZipKit1->FileName +
      "   " + IntToStr(AbZipView1->Count) + " items";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AlternateColor1Click(TObject *Sender)
{
  if (ColorDialog1->Execute())
    AbZipView1->Colors->Alternate = ColorDialog1->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AlternateTextColor1Click(TObject *Sender)
{
  if (ColorDialog1->Execute())
    AbZipView1->Colors->AlternateText = ColorDialog1->Color;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Moveselecteditem1Click(TObject *Sender)
{
  if (AbZipView1->SelCount > 0)
  {
    for (int i=0; i<AbZipView1->Count; i++)
    {
      AbZipView1->Items[i]->Tagged = AbZipView1->Selected[i];
      if (AbZipView1->Selected[i])
      {
        String s = AbZipView1->Items[i]->FileName;
        if (InputQuery(MainCaption, "Rename file", s))
          AbZipKit1->Move(AbZipView1->Items[i], s);
      }
    }
    AbZipKit1->Save();
    AbZipView1->ClearSelections();
    Panel1->Caption = "";
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AbZipKit1Save(TObject *Sender)
{
  Panel1->Caption = "Saving " + AbZipKit1->FileName;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Save1Click(TObject *Sender)
{
  if (AbZipKit1->FileName != "")
    AbZipKit1->Save();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Logging1Click(TObject *Sender)
{
  Logging1->Checked = !Logging1->Checked;
  if (Logging1->Checked)
  {
    OpenDialog1->Title = "Select log file";
    if (AbZipKit1->LogFile == "")
      OpenDialog1->FileName = "*.txt";
    else
      OpenDialog1->FileName = AbZipKit1->LogFile;
    Logging1->Checked = OpenDialog1->Execute();
    if (Logging1->Checked)
      AbZipKit1->LogFile = OpenDialog1->FileName;
  }
  AbZipKit1->Logging = Logging1->Checked;
}
//---------------------------------------------------------------------------


