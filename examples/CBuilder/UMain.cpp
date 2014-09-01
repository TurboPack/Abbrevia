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
/*                      UMain.cpp                        */
/*********************************************************/
//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include <stdio.h>

#include "UMain.h"
#include "DgAbout.h"
#include "UBaseDlg.h"
#include "UDemoDlg.h"
//---------------------------------------------------------------------------
#pragma link "AbZipOut"
#pragma link "AbArcTyp"
#pragma link "AbDlgPwd"
#pragma link "AbZBrows"
#pragma link "AbBase"
#pragma link "AbMeter"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TForm1::ReadIniSettings()
{
  // This example is derived from the corresponding Delphi example.
  // To be compatible with Delphi 1 the Delphi example uses INI files
  // rather than using the registry to store configuration data.
  // This program uses INI files as well since it has been converted
  // from the Delphi example. Normally you would use the registry
  // to store configuration data in a 32-bit program.
  //
  int Value;
  bool Exists;
  TIniFile* ini = new TIniFile(ChangeFileExt(Application->ExeName, ".INI"));
  try {
    // view menu
    Exists = ini->ReadBool("General", "Exists", false);
    if (Exists) {
      AbZipOutline1->Attributes.Clear();
      if (ini->ReadBool("View", "CSize", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaCompressedSize;
      if (ini->ReadBool("View", "CMethod", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaCompressionMethod;
      if (ini->ReadBool("View", "CRatio", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaCompressionRatio;
      if (ini->ReadBool("View", "CRC", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaCRC;
      if (ini->ReadBool("View", "EFA", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaExternalFileAttributes;
      if (ini->ReadBool("View", "IFA", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaInternalFileAttributes;
      if (ini->ReadBool("View", "Encryption", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaEncryption;
      if (ini->ReadBool("View", "TimeStamp", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaTimeStamp;
      if (ini->ReadBool("View", "USize", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaUncompressedSize;
      if (ini->ReadBool("View", "MadeBy", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaVersionMade;
      if (ini->ReadBool("View", "Needed", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaVersionNeeded;
      if (ini->ReadBool("View", "Comment", false))
        AbZipOutline1->Attributes =
          AbZipOutline1->Attributes << zaComment;

      AbZipOutline1->Hierarchy =
        ini->ReadBool("View", "Hierarchy", true);

      Value = ini->ReadInteger("View", "OutlineStyle", -1);
//      if (Value != -1)
//        AbZipOutline1->OutlineStyle = TOutlineStyle(Value);
      // preferences menu
      AbZipOutline1->BaseDirectory = ini->ReadString(
        "Preferences", "BaseDirectory", ExtractFilePath(Application->ExeName));
      if (!AbDirectoryExists(AbZipOutline1->BaseDirectory))
        AbZipOutline1->BaseDirectory = ExtractFilePath(Application->ExeName);
      Confirmations1->Checked =
        ini->ReadBool("Preferences", "Confirmations", false);
      SpeedButton7->Down = Confirmations1->Checked;
      Value = ini->ReadInteger(
        "Preferences", "CompressionMethodToUse", (int)smBestMethod);
      AbZipOutline1->CompressionMethodToUse = TAbZipSupportedMethod(Value);
      Value = ini->ReadInteger("Preferences", "DeflationOption", doNormal);
      AbZipOutline1->DeflationOption = TAbZipDeflationOption(Value);
      AbZipOutline1->ExtractOptions.Clear();
      if (ini->ReadBool("Preferences", "CreateDirs", false))
        AbZipOutline1->ExtractOptions =
          AbZipOutline1->ExtractOptions << eoCreateDirs;
      if (ini->ReadBool("Preferences", "RestorePath", false))
        AbZipOutline1->ExtractOptions =
          AbZipOutline1->ExtractOptions << eoRestorePath;
      AbZipOutline1->StoreOptions.Clear();
      if (ini->ReadBool("Preferences", "StripPath", false))
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions << soStripPath;
      if (ini->ReadBool("Preferences", "RemoveDots", false))
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions << soRemoveDots;
      if (ini->ReadBool("Preferences", "Recurse", false))
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions << soRecurse;
      StubName = ini->ReadString("Self Extracting", "StubName", "selfex.exe");
      FilterComboBox1->Filter =
        ini->ReadString("Navigator", "Filter",
          "All files (*.*)|*.*|Zip Files (*.ZIP)|*.ZIP|"
          "Executable Files (*.EXE)|*.EXE|Text files (*.TXT)|*.TXT|");
    }
  } // try
  catch (...) {
    delete ini;
    return;
  }
  delete ini;
}

void TForm1::SaveIniSettings()
{
  TIniFile* ini = new TIniFile(ChangeFileExt(Application->ExeName, ".INI"));
  try {
    // view menu
    ini->WriteBool("General", "Exists", true);
    ini->WriteBool("View", "CSize", AbZipOutline1->Attributes.Contains(zaCompressedSize));
    ini->WriteBool("View", "CMethod", AbZipOutline1->Attributes.Contains(zaCompressionMethod));
    ini->WriteBool("View", "CRatio", AbZipOutline1->Attributes.Contains(zaCompressionRatio));
    ini->WriteBool("View", "CRC", AbZipOutline1->Attributes.Contains(zaCRC));
    ini->WriteBool("View", "EFA", AbZipOutline1->Attributes.Contains(zaExternalFileAttributes));
    ini->WriteBool("View", "IFA", AbZipOutline1->Attributes.Contains(zaInternalFileAttributes));
    ini->WriteBool("View", "Encryption", AbZipOutline1->Attributes.Contains(zaEncryption));
    ini->WriteBool("View", "TimeStamp", AbZipOutline1->Attributes.Contains(zaTimeStamp));
    ini->WriteBool("View", "USize", AbZipOutline1->Attributes.Contains(zaUncompressedSize));
    ini->WriteBool("View", "MadeBy", AbZipOutline1->Attributes.Contains(zaVersionMade));
    ini->WriteBool("View", "Needed", AbZipOutline1->Attributes.Contains(zaVersionNeeded));
    ini->WriteBool("View", "Comment", AbZipOutline1->Attributes.Contains(zaComment));

    ini->WriteBool("View", "Hierarchy", AbZipOutline1->Hierarchy);
//    ini->WriteInteger("View", "OutlineStyle", AbZipOutline1->OutlineStyle);
    // preferences menu
    ini->WriteString("Preferences",
      "BaseDirectory", AbZipOutline1->BaseDirectory);
    ini->WriteBool("Preferences", "Confirmations", Confirmations1->Checked);
    ini->WriteInteger("Preferences",
      "CompressionMethodToUse", AbZipOutline1->CompressionMethodToUse);
    ini->WriteInteger("Preferences",
      "DeflationOption", AbZipOutline1->DeflationOption);
    ini->WriteBool("Preferences",
      "CreateDirs", AbZipOutline1->ExtractOptions.Contains(eoCreateDirs));
    ini->WriteBool("Preferences",
      "RestorePath", AbZipOutline1->ExtractOptions.Contains(eoRestorePath));
    ini->WriteBool("Preferences",
      "StripPath", AbZipOutline1->StoreOptions.Contains(soStripPath));
    ini->WriteBool("Preferences",
      "RemoveDots", AbZipOutline1->StoreOptions.Contains(soRemoveDots));
    ini->WriteBool("Preferences",
      "Recurse", AbZipOutline1->StoreOptions.Contains(soRecurse));
  }
  catch (...) {
    delete ini;
    return;
  }
  delete ini;
}

void TForm1::SetCaption()
{
  Caption = "TPZip " + AbZipOutline1->Version + " - " +
             AbZipOutline1->FileName;
}

void TForm1::UpdateMenu()
{
  TAbZipAttribute i = zaCompressedSize;
  while (i != zaComment) {
    Attributes1->Items[i]->Checked = AbZipOutline1->Attributes.Contains(i);
    i = (TAbZipAttribute)(i + 1);
  }
  Hierarchy1->Checked = AbZipOutline1->Hierarchy;
//  OS1->Checked = AbZipOutline1->OutlineStyle == 0;
//  OS2->Checked = AbZipOutline1->OutlineStyle == 1;
//  OS3->Checked = AbZipOutline1->OutlineStyle == 2;
//  OS4->Checked = AbZipOutline1->OutlineStyle == 3;
//  OS5->Checked = AbZipOutline1->OutlineStyle == 4;
//  OS6->Checked = AbZipOutline1->OutlineStyle == 5;

  Best1->Checked = AbZipOutline1->CompressionMethodToUse == smBestMethod;
  Deflate1->Checked = AbZipOutline1->CompressionMethodToUse == smDeflated;
  Store1->Checked = AbZipOutline1->CompressionMethodToUse == smStored;
  // deflation options
  Normal1->Checked = AbZipOutline1->DeflationOption == doNormal;
  Maximum1->Checked = AbZipOutline1->DeflationOption == doMaximum;
  Fast1->Checked = AbZipOutline1->DeflationOption == doFast;
  SuperFast1->Checked = AbZipOutline1->DeflationOption == doSuperFast;
  // extractOptions
  CreateDirs1->Checked = AbZipOutline1->ExtractOptions.Contains(eoCreateDirs);
  RestorePath1->Checked = AbZipOutline1->ExtractOptions.Contains(eoRestorePath);
  // StoreOptions
  RecurseTree1->Checked = AbZipOutline1->StoreOptions.Contains(soRecurse);
  StripPath1->Checked = AbZipOutline1->StoreOptions.Contains(soStripPath);
  RemoveDots1->Checked = AbZipOutline1->StoreOptions.Contains(soRemoveDots);
}

void __fastcall TForm1::DoConfirm(TObject* Sender, TAbArchiveItem* Item,
                       bool& Confirm, String Caption)
{
  char buff[256];
  sprintf(buff, "%s %s?", Caption.c_str(), Item->FileName.c_str());

  if (Confirmations1->Checked)
    Confirm = MessageBox(0, buff, "Confirmation",
                            MB_ICONQUESTION || MB_OKCANCEL) == IDOK;
}

void __fastcall TForm1::GetMinMaxInfo(TWMGetMinMaxInfo& Msg)
{
  Msg.MinMaxInfo->ptMinTrackSize = Point(700, 400);
  Msg.MinMaxInfo->ptMaxTrackSize = Point(1600, 1200);
}

void __fastcall TForm1::All1Click(TObject *Sender)
{
  for (int i=0;i < zaComment + 1;i++)
    Attributes1->Items[i]->Checked = true;
  AbZipOutline1->Attributes <<
    zaCompressedSize << zaCompressionMethod <<
    zaCompressionRatio << zaCRC << zaExternalFileAttributes <<
    zaInternalFileAttributes << zaEncryption << zaTimeStamp <<
    zaUncompressedSize << zaVersionMade << zaVersionNeeded << zaComment;
  AbZipOutline1->Update();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Exit1Click(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  ReadIniSettings();
  SetCaption();
  UpdateMenu();
  if (ParamCount > 0)
    try {
      AbZipOutline1->FileName = ParamStr(1);
    }
    catch (...) {}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Hierarchy1Click(TObject *Sender)
{
  Hierarchy1->Checked = !Hierarchy1->Checked;
  AbZipOutline1->Hierarchy = Hierarchy1->Checked;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::None1Click(TObject *Sender)
{
  for (int i=0;i<Attributes1->Count;i++)
    Attributes1->Items[i]->Checked = false;
  AbZipOutline1->Attributes.Clear();
  AbZipOutline1->Update();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Save1Click(TObject *Sender)
{
  AbZipOutline1->Save();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::za10Click(TObject *Sender)
{
  TMenuItem* Item = dynamic_cast<TMenuItem*>(Sender);
  Item->Checked = !Item->Checked;
  if (Item->Checked)
    AbZipOutline1->Attributes =
      AbZipOutline1->Attributes << (TAbZipAttribute)Item->Tag;
  else
    AbZipOutline1->Attributes =
      AbZipOutline1->Attributes >> (TAbZipAttribute)Item->Tag;
  AbZipOutline1->Update();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Font1Click(TObject *Sender)
{
  if (FontDialog1->Execute()) {
    AbZipOutline1->Font = FontDialog1->Font;
    DirectoryListBox1->Font = FontDialog1->Font;
    FileListBox1->Font = FontDialog1->Font;
    DriveComboBox1->Font = FontDialog1->Font;
    FilterComboBox1->Font = FontDialog1->Font;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Open1Click(TObject *Sender)
{
  if (OpenDialog1->Execute()) {
    AbZipOutline1->FileName = OpenDialog1->FileName;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1DragOver(TObject *Sender, TObject *Source,
  int X, int Y, TDragState State, bool &Accept)
{
  Accept = (bool)dynamic_cast<TFileListBox*>(Source);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1DragDrop(TObject *Sender, TObject *Source,
  int X, int Y)
{
  TAbZipBrowser* ZB;
  bool IsZip;
  String ZipName;
  int i;

  TFileListBox* lb = dynamic_cast<TFileListBox*>(Source);
  if (lb) {
    if (lb->SelCount == 1) {
      for (i=0;i<lb->Items->Count;i++)
        if (lb->Selected[i]) {
          IsZip = false;
          ZB = new TAbZipBrowser(this);
          try {
            ZB->FileName = lb->Directory + "\\" + lb->Items->Strings[i];
            IsZip = true;
          }
          catch (...) {
            delete ZB;
            ZB = 0;
          }
          delete ZB;
        if (IsZip)
          // only one file, and it is a zip file
          AbZipOutline1->FileName = lb->Directory + "\\" + lb->Items->Strings[i];
        else if (AbZipOutline1->FileName != "")
          // only one file, and it's not a zip file
          AbZipOutline1->AddFiles(lb->Directory + "\\" + lb->Items->Strings[i], 0);
        else {
          if (OpenDialog1->Execute()) {
            AbZipOutline1->FileName = OpenDialog1->FileName;
            AbZipOutline1->AddFiles(lb->Directory + "\\" + lb->Items->Strings[i], 0);
          }
        }
        break;
      }
    }
    else {
      // multiple files dropped...
      IsZip = false;
      ZB = new TAbZipBrowser(this);
      try {
        for (i=0;i<lb->Items->Count;i++)
          if (lb->Selected[i]) {
            try {
              ZB->FileName = lb->Directory + "\\" + lb->Items->Strings[i];
              IsZip = true;
              ZipName = ZB->FileName;
              break;
            }
            catch (...) {}
          }
      }
      catch (...) {
        delete ZB;
        ZB = 0;
      }
      delete ZB;
      if (IsZip && (Application->MessageBox(
                     "One of the dropped files is a Zip Archive. Open it?",
                     "Open or Add Files?",
                     MB_YESNO) == IDYES))
            AbZipOutline1->FileName = ZipName;
      else {
        if (AbZipOutline1->FileName != "") {
          for (int i=0;i<lb->Items->Count;i++)
            if (FileListBox1->Selected[i])
              AbZipOutline1->AddFiles(lb->Directory + "\\" + lb->Items->Strings[i], 0);
        }
        else {
          if (OpenDialog1->Execute()) {
            AbZipOutline1->FileName = OpenDialog1->FileName;
            for (int j=0;j<lb->Items->Count;j++)
              if (FileListBox1->Selected[j])
                AbZipOutline1->AddFiles(lb->Directory + "\\" + lb->Items->Strings[j], 0);
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1DblClick(TObject *Sender)
{
  bool Restoring;
  String TempDir, SaveDir;
  char TempPath[256];
  String TempName;

  GetTempPath(sizeof(TempPath), TempPath);
  SaveDir = TempPath;
  if (SaveDir[SaveDir.Length()] == '\\')
    SaveDir.Delete(SaveDir.Length(), 1);

  if (AbZipOutline1->SelectedZipItem) {
    TempDir = AbZipOutline1->BaseDirectory;
    Restoring = AbZipOutline1->ExtractOptions.Contains(eoRestorePath);
    AbZipOutline1->ExtractOptions =
      AbZipOutline1->ExtractOptions >> eoRestorePath;
    AbZipOutline1->BaseDirectory = SaveDir;
    try {
      AbZipOutline1->ExtractFiles(AbZipOutline1->SelectedZipItem->FileName);
      TempName = AbZipOutline1->SelectedZipItem->FileName;
      AbUnfixName(TempName);
      ShellExecute(Application->MainForm->Handle, NULL,
                    ExtractFileName(TempName).c_str(),
                    "", SaveDir.c_str(), SW_SHOWNORMAL);
    }
    catch (...) {
      AbZipOutline1->BaseDirectory = TempDir;
    }
    AbZipOutline1->BaseDirectory = TempDir;
    if (Restoring)
      AbZipOutline1->ExtractOptions = AbZipOutline1->ExtractOptions << eoRestorePath;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1MouseDown(TObject *Sender,
  TMouseButton Button, TShiftState Shift, int X, int Y)
{
  if (Button == mbLeft) {
    OutlineX = X;
    OutlineY = Y;
  }
  else if (Button == mbRight) {
    // enable appropriate popup menu items
    // prepare popup menu
    if (AbZipOutline1->Count > 0) {
      // there are items in the outline - select the item under the mouse
//      int i = AbZipOutline1->GetOutlineItem(X, Y);
//      if (i != -1)
//        AbZipOutline1->SelectedItem = i;
    }
    if (AbZipOutline1->SelectedZipItem) {
      // pointing at a file - allow file operations
      Delete1->Enabled = true;
      Extract1->Enabled = true;
      Freshen1->Enabled = true;
      Move1->Enabled = true;
      Run1->Enabled = true;
    }
    else {
      // pointing at a directory - don't allow file operations
      Delete1->Enabled = false;
      Extract1->Enabled = false;
      Freshen1->Enabled = false;
      Move1->Enabled = false;
      Run1->Enabled = false;
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FileListBox1DragOver(TObject *Sender, TObject *Source,
  int X, int Y, TDragState State, bool &Accept)
{
  Accept = (bool)dynamic_cast<TAbZipOutline*>(Source);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FileListBox1DragDrop(TObject *Sender, TObject *Source,
  int X, int Y)
{
  String TempDir;
  TAbZipOutline* zo = dynamic_cast<TAbZipOutline*>(Source);

  if (zo)
    TempDir = zo->BaseDirectory;
    zo->BaseDirectory = FileListBox1->Directory;
    try {
      zo->ExtractFiles(zo->SelectedZipItem->FileName);
      FileListBox1->Update();
    }
    catch (...) {
      zo->BaseDirectory = TempDir;
      return;
    }
    zo->BaseDirectory = TempDir;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1WindowsDrop(TObject *Sender,
  AnsiString FileName)
{
  TAbZipBrowser* ZB;
  bool IsZip = false;
  ZB = new TAbZipBrowser(this);
  try {
    ZB->FileName = FileName;
    IsZip = true;
  }
  catch (...) {
    delete ZB;
    ZB = 0;
  }
  delete ZB;

  if (IsZip && AbZipOutline1->FileName == "")
    AbZipOutline1->FileName = FileName;
  else if (AbZipOutline1->FileName == "") {
    if (OpenDialog1->Execute()) {
      AbZipOutline1->FileName = OpenDialog1->FileName;
      AbZipOutline1->AddFiles(FileName, 0);
    }
  }
  else {
    // This is a Zip file, but there's already an open archive
    if (Application->MessageBox("Open this file as an archive?",
                   "Open or Add File", MB_YESNO) == IDYES)
      AbZipOutline1->FileName = FileName;
    else
      AbZipOutline1->AddFiles(FileName, 0);
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Best1Click(TObject *Sender)
{
  TMenuItem* Item = dynamic_cast<TMenuItem*>(Sender);
  Store1->Checked = false;
  Deflate1->Checked = false;
  Best1->Checked = false;
  Item->Checked = true;
  AbZipOutline1->CompressionMethodToUse = (TAbZipSupportedMethod)Item->Tag;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SuperFast1Click(TObject *Sender)
{
  TMenuItem* Item = dynamic_cast<TMenuItem*>(Sender);
  Normal1->Checked = false;
  Maximum1->Checked = false;
  Fast1->Checked = false;
  SuperFast1->Checked = false;
  Item->Checked = true;
  AbZipOutline1->DeflationOption = (TAbZipDeflationOption)Item->Tag;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CreateDirs1Click(TObject *Sender)
{
  TMenuItem* Item = dynamic_cast<TMenuItem*>(Sender);
  Item->Checked = !Item->Checked;
  if (Item->Checked)
    AbZipOutline1->ExtractOptions =
      AbZipOutline1->ExtractOptions << eoCreateDirs;
  else
    AbZipOutline1->ExtractOptions =
      AbZipOutline1->ExtractOptions >> eoCreateDirs;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RestorePath1Click(TObject *Sender)
{
  TMenuItem* Item = dynamic_cast<TMenuItem*>(Sender);
  Item->Checked = !Item->Checked;
  if (Item->Checked)
    AbZipOutline1->ExtractOptions =
      AbZipOutline1->ExtractOptions << eoRestorePath;
  else
    AbZipOutline1->ExtractOptions =
      AbZipOutline1->ExtractOptions >> eoRestorePath;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StripPath1Click(TObject *Sender)
{
  TMenuItem* Item = dynamic_cast<TMenuItem*>(Sender);
  Item->Checked = !Item->Checked;
  if (Item->Checked)
    AbZipOutline1->StoreOptions =
      AbZipOutline1->StoreOptions << (TAbStoreOption)Item->Tag;
  else
    AbZipOutline1->StoreOptions =
      AbZipOutline1->StoreOptions >> (TAbStoreOption)Item->Tag;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1Change(TObject *Sender)
{
  char buff[300];
  if (AbZipOutline1->FileName != "") {
    sprintf(buff, "Archive %s contains %d items.",
      AbZipOutline1->FileName.c_str(), AbZipOutline1->Count);
    ArchiveLabel->Caption = buff;
  }
  else
    ArchiveLabel->Caption = "No Archive Open";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Confirmations1Click(TObject *Sender)
{
  Confirmations1->Checked = !Confirmations1->Checked;
  SpeedButton7->Down = Confirmations1->Checked;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1ConfirmSave(TObject *Sender, bool &Confirm)
{
  if (Confirmations1->Checked) {
    char buff[300];
    TAbZipOutline* zo = dynamic_cast<TAbZipOutline*>(Sender);
    sprintf(buff, "Save %s?", zo->FileName.c_str());
    Confirm =  MessageBox(0, buff,
      "Confirmation", MB_ICONQUESTION | MB_OKCANCEL) == IDOK;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Delete1Click(TObject *Sender)
{
  if (AbZipOutline1->SelectedZipItem)
    AbZipOutline1->ClearTags();
    AbZipOutline1->SelectedZipItem->Tagged = true;
    try {
      AbZipOutline1->DeleteTaggedItems();
    }
    catch (...) {
      AbZipOutline1->ClearTags();
      return;
    }
    AbZipOutline1->ClearTags();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Extract1Click(TObject *Sender)
{
  if (AbZipOutline1->SelectedZipItem) {
    TBaseDirDlg* BaseDirDlg = new TBaseDirDlg(Application);
    try {
      BaseDirDlg->Caption = "Extract Selected File";
      BaseDirDlg->Edit1->Text = AbZipOutline1->SelectedZipItem->FileName;
      BaseDirDlg->Edit1->Enabled = false;
      BaseDirDlg->ActionLabel->Caption = "Target Directory:";
      if (AbZipOutline1->BaseDirectory != "")
        BaseDirDlg->DLB->Directory = AbZipOutline1->BaseDirectory;
      BaseDirDlg->CheckBox1->Caption = "Restore Path";
      BaseDirDlg->CheckBox1->Checked =
        AbZipOutline1->ExtractOptions.Contains(eoRestorePath);
      BaseDirDlg->CheckBox2->Caption = "Create Directories";
      BaseDirDlg->CheckBox2->Checked =
        AbZipOutline1->ExtractOptions.Contains(eoCreateDirs);
      BaseDirDlg->ShowModal();
      if (BaseDirDlg->ModalResult == mrOk) {
        AbZipOutline1->BaseDirectory = BaseDirDlg->DirLabel->Caption;
        if (BaseDirDlg->CheckBox1->Checked)
          AbZipOutline1->ExtractOptions =
            AbZipOutline1->ExtractOptions << eoRestorePath;
        else
          AbZipOutline1->ExtractOptions =
            AbZipOutline1->ExtractOptions >> eoRestorePath;
        if (BaseDirDlg->CheckBox2->Checked)
          AbZipOutline1->ExtractOptions =
            AbZipOutline1->ExtractOptions << eoCreateDirs;
        else
          AbZipOutline1->ExtractOptions =
            AbZipOutline1->ExtractOptions >> eoCreateDirs;
        AbZipOutline1->ClearTags();
        AbZipOutline1->SelectedZipItem->Tagged = true;
        try {
          AbZipOutline1->ExtractTaggedItems();
        }
        catch (...) {
          AbZipOutline1->ClearTags();
        }
        AbZipOutline1->ClearTags();
        FileListBox1->Update();
      }
    }
    catch (...) {
      delete BaseDirDlg;
      return;
    }
    delete BaseDirDlg;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Freshen1Click(TObject *Sender)
{
  if (AbZipOutline1->SelectedZipItem) {
    BaseDirDlg = new TBaseDirDlg(Application);
    try {
        BaseDirDlg->Caption = "Freshen Selected File";
        BaseDirDlg->Edit1->Text = AbZipOutline1->SelectedZipItem->FileName;
        BaseDirDlg->Edit1->Enabled = false;
        BaseDirDlg->ActionLabel->Caption = "Source Directory:";
        if (AbZipOutline1->BaseDirectory != "")
          BaseDirDlg->DLB->Directory = AbZipOutline1->BaseDirectory;
        BaseDirDlg->CheckBox1->Caption = "Recurse";
        BaseDirDlg->CheckBox1->Checked =
          AbZipOutline1->StoreOptions.Contains(soRecurse);
        BaseDirDlg->CheckBox2->Caption = "Strip Path";
        BaseDirDlg->CheckBox2->Checked
          = AbZipOutline1->StoreOptions.Contains(soStripPath);

        BaseDirDlg->ShowModal();
        if (BaseDirDlg->ModalResult == mrOk) {
          if (BaseDirDlg->CheckBox1->Checked)
            AbZipOutline1->StoreOptions =
              AbZipOutline1->StoreOptions << soRecurse;
          else
            AbZipOutline1->StoreOptions =
              AbZipOutline1->StoreOptions >> soRecurse;
          if (BaseDirDlg->CheckBox2->Checked)
            AbZipOutline1->StoreOptions =
              AbZipOutline1->StoreOptions << soStripPath;
          else
            AbZipOutline1->StoreOptions =
              AbZipOutline1->StoreOptions >> soStripPath;
          AbZipOutline1->BaseDirectory = BaseDirDlg->DirLabel->Caption;

          AbZipOutline1->ClearTags();
          AbZipOutline1->SelectedZipItem->Tagged = true;
          try {
            AbZipOutline1->FreshenTaggedItems();
          }
          catch (...) {
            AbZipOutline1->ClearTags();
          }
          AbZipOutline1->ClearTags();
          FileListBox1->Update();
        }
    }
    catch (...) {
      delete BaseDirDlg;
      return;
    }
    delete BaseDirDlg;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Move1Click(TObject *Sender)
{
  TDemoDlg* DemoDlg = new TDemoDlg(Application);
  try {
      DemoDlg->Caption = "Move File to New Path";
      DemoDlg->Edit1->Text = AbZipOutline1->SelectedZipItem->FileName;
      DemoDlg->ShowModal();
      if (ModalResult == mrOk)
        AbZipOutline1->Move(
          AbZipOutline1->SelectedZipItem, DemoDlg->Edit1->Text);
  }
  catch (...) {
    delete DemoDlg;
    return;
  }
  delete DemoDlg;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Password1Click(TObject *Sender)
{
  TPassWordDlg* dlg = new TPassWordDlg(Application);
  try {
    dlg->Edit1->Text = AbZipOutline1->Password;
    dlg->ShowModal();
    if (dlg->ModalResult == mrOk)
      AbZipOutline1->Password = dlg->Edit1->Text;
  }
  catch (...) {
    delete dlg;
    dlg = 0;
  }
  delete dlg;
  if (AbZipOutline1->Password.Length() > 0)
    Image1->Visible = true;
  else
    Image1->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddFiles1Click(TObject *Sender)
{
  TBaseDirDlg* BaseDirDlg = new TBaseDirDlg(Application);
  try {
    BaseDirDlg->Caption = "Add Files with FileMask";
    BaseDirDlg->Edit1->Text = "*.*";
    BaseDirDlg->ActionLabel->Caption = "Source Directory";
    BaseDirDlg->CheckBox1->Caption = "Recurse";
    BaseDirDlg->CheckBox1->Checked =
      AbZipOutline1->StoreOptions.Contains(soRecurse);
    BaseDirDlg->CheckBox2->Caption = "Strip Path";
    BaseDirDlg->CheckBox2->Checked =
      AbZipOutline1->StoreOptions.Contains(soStripPath);

    if (AbZipOutline1->BaseDirectory != "")
      BaseDirDlg->DLB->Directory = AbZipOutline1->BaseDirectory;

    BaseDirDlg->ShowModal();
    if (BaseDirDlg->ModalResult == mrOk) {
      if (BaseDirDlg->CheckBox1->Checked)
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions << soRecurse;
      else
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions >> soRecurse;
      if (BaseDirDlg->CheckBox2->Checked)
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions << soStripPath;
      else
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions >> soStripPath;
      AbZipOutline1->BaseDirectory = BaseDirDlg->DirLabel->Caption;
      AbZipOutline1->AddFiles(BaseDirDlg->Edit1->Text, 0);
    }
  }
  catch (...) {
    delete BaseDirDlg;
    return;
  }
  delete BaseDirDlg;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FreshenFiles1Click(TObject *Sender)
{
  TBaseDirDlg* BaseDirDlg = new TBaseDirDlg(Application);
  try {
    BaseDirDlg->Caption = "Freshen Files with FileMask";
    BaseDirDlg->Edit1->Text = "*.*";
    BaseDirDlg->ActionLabel->Caption = "Source Directory";
    BaseDirDlg->CheckBox1->Caption = "Recurse";
    BaseDirDlg->CheckBox1->Checked =
      AbZipOutline1->StoreOptions.Contains(soRecurse);
    BaseDirDlg->CheckBox2->Caption = "Strip Path";
    BaseDirDlg->CheckBox2->Checked =
      AbZipOutline1->StoreOptions.Contains(soStripPath);
    if (AbZipOutline1->BaseDirectory != "")
      BaseDirDlg->DLB->Directory = AbZipOutline1->BaseDirectory;

    BaseDirDlg->ShowModal();
    if (BaseDirDlg->ModalResult == mrOk) {
      if (BaseDirDlg->CheckBox1->Checked)
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions << soRecurse;
      else
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions >> soRecurse;
      if (BaseDirDlg->CheckBox2->Checked)
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions << soStripPath;
      else
        AbZipOutline1->StoreOptions =
          AbZipOutline1->StoreOptions >> soStripPath;
      AbZipOutline1->BaseDirectory = BaseDirDlg->DirLabel->Caption;
      AbZipOutline1->FreshenFiles(BaseDirDlg->Edit1->Text);
    }
  }
  catch (...) {
    delete BaseDirDlg;
    return;
  }
  delete BaseDirDlg;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1ArchiveItemProgress(TObject *Sender,
  TAbArchiveItem *Item, BYTE Progress, bool &Abort)
{
  String MethodStrings[] = { "UnStoring", "UnShrinking",
                             "UnReducing", "UnReducing",
                             "UnReducing", "UnReducing",
                             "Exploding", "DeTokenizing",
                             "Inflating", "Enhanced Inflating",
                             "DCL Exploding", "Extracting" };
  String ActionString;

  switch (Item->Action) {
    case aaAdd : ActionString = "Adding  "; break;
    case aaFreshen : ActionString = "Freshening  "; break;
    default :
      ActionString = MethodStrings[((TAbZipItem*)Item)->CompressionMethod] +
                    "  ";
  }
  Panel5->Caption = ActionString + Item->FileName + "   ";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1NeedPassword(TObject *Sender,
  AnsiString &NewPassword)
{
  TPassWordDlg* dlg = new TPassWordDlg(Application);
  try {
    dlg->ShowModal();
    if (dlg->ModalResult == mrOk)
      NewPassword = dlg->Edit1->Text;
  }
  catch (...) {
    delete dlg;
    dlg = 0;
  }
  delete dlg;
  if (NewPassword.Length() > 0)
    Image1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DeleteFiles1Click(TObject *Sender)
{
  TDemoDlg* dlg = new TDemoDlg(Application);
  try {
    dlg->Caption = "Delete Files with FileMask";
    dlg->Edit1->Text = "*.*";
    dlg->ShowModal();
    if (dlg->ModalResult == mrOk)
      AbZipOutline1->DeleteFiles(dlg->Edit1->Text);
  }
  catch (...) {
    delete dlg;
    return;
  }
  delete dlg;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExtractFiles1Click(TObject *Sender)
{
  TBaseDirDlg* BaseDirDlg = new TBaseDirDlg(Application);
  try {
    BaseDirDlg->Caption = "Extract Files with FileMask";
    BaseDirDlg->Edit1->Text = "*.*";
    BaseDirDlg->ActionLabel->Caption = "Target Directory:";
    if (AbZipOutline1->BaseDirectory != "")
      BaseDirDlg->DLB->Directory = AbZipOutline1->BaseDirectory;
    BaseDirDlg->CheckBox1->Caption = "Restore Path";
    BaseDirDlg->CheckBox1->Checked =
      AbZipOutline1->ExtractOptions.Contains(eoRestorePath);
    BaseDirDlg->CheckBox2->Caption = "Create Directories";
    BaseDirDlg->CheckBox2->Checked =
      AbZipOutline1->ExtractOptions.Contains(eoCreateDirs);
    BaseDirDlg->ShowModal();
    if (BaseDirDlg->ModalResult == mrOk) {
      AbZipOutline1->BaseDirectory = BaseDirDlg->DirLabel->Caption;
      if (BaseDirDlg->CheckBox1->Checked)
        AbZipOutline1->ExtractOptions =
          AbZipOutline1->ExtractOptions << eoRestorePath;
      else
        AbZipOutline1->ExtractOptions =
          AbZipOutline1->ExtractOptions >> eoRestorePath;
      if (BaseDirDlg->CheckBox2->Checked)
        AbZipOutline1->ExtractOptions =
          AbZipOutline1->ExtractOptions << eoCreateDirs;
      else
        AbZipOutline1->ExtractOptions =
          AbZipOutline1->ExtractOptions >> eoCreateDirs;
      AbZipOutline1->ExtractFiles(BaseDirDlg->Edit1->Text);
      FileListBox1->Update();
    }
  }
  catch (...) {
    delete BaseDirDlg;
    return;
  }
  delete BaseDirDlg;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  AbZipOutline1->Save();
  SaveIniSettings();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Close1Click(TObject *Sender)
{
  AbZipOutline1->FileName = "";
  AbZipOutline1->Color = clBtnFace;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1Load(TObject *Sender)
{
  AbZipOutline1->Color = clWindow;
  SetCaption();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Convert1Click(TObject *Sender)
{
  String ZipName;
  String ExeName;
  String StubSpec;
  AbZipOutline1->Save();
  ZipName = ExpandFileName(AbZipOutline1->FileName);
  AbZipOutline1->FileName = "";

  ExeName = ChangeFileExt(ZipName, ".EXE");
  StubSpec = ExtractFilePath(Application->ExeName) + StubName;

  TStream* StubStream =
    new TFileStream(StubSpec, fmOpenRead | fmShareDenyWrite);
  TStream* ZipStream =
    new TFileStream(ZipName , fmOpenRead | fmShareDenyWrite);
  TStream* SelfExtractingStream =
    new TFileStream(ExeName, fmCreate | fmShareExclusive);
  try {
    MakeSelfExtracting(StubStream, ZipStream, SelfExtractingStream);
  }
  catch (...) {
    delete SelfExtractingStream;
    delete StubStream;
    delete ZipStream;
    AbZipOutline1->FileName = ExeName;
  }
  delete SelfExtractingStream;
  delete StubStream;
  delete ZipStream;
  // and reload...
  AbZipOutline1->FileName = ExeName;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1ConfirmOverwrite(AnsiString &Name,
  bool &Confirm)
{
  char buff[300];
  sprintf(buff, "Overwrite %s?", Name.c_str());
  Confirm = MessageBox(0, buff, "Confirmation",
    MB_ICONQUESTION | MB_OKCANCEL) == IDOK;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Default1Click(TObject *Sender)
{
  AbZipOutline1->Attributes = TAbZipAttributes() <<
    zaCompressedSize << zaCompressionMethod << zaCompressionRatio <<
    zaCRC << zaExternalFileAttributes << zaEncryption <<
    zaTimeStamp << zaUncompressedSize;
  for (int i=0;i<zaComment;i++)
    Attributes1->Items[i]->Checked =
      AbZipOutline1->Attributes.Contains((TAbZipAttribute)i);
  AbZipOutline1->Update();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Contents1Click(TObject *Sender)
{
  Application->HelpCommand(HELP_CONTENTS, 0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::About1Click(TObject *Sender)
{
  TdlgAboutBox* dlg = new TdlgAboutBox(this);
  dlg->ShowModal();
  delete dlg;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FileListBox1DblClick(TObject *Sender)
{
  if (AbZipOutline1->FileName == "")
    try {
      AbZipOutline1->FileName =
        FileListBox1->Items->Strings[FileListBox1->ItemIndex];
    }
    catch (...) {
      AbZipOutline1->FileName = "";
    }
  else {
    TAbZipBrowser* Browser = new TAbZipBrowser(this);
    bool OK = true;
    try {
      Browser->FileName =
        FileListBox1->Items->Strings[FileListBox1->ItemIndex];
    }
    catch (...) {
      OK = false;
      delete Browser;
      Browser = 0;
    }
    delete Browser;
    if (OK)
      AbZipOutline1->FileName =
        FileListBox1->Items->Strings[FileListBox1->ItemIndex];
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1EndDrag(TObject *Sender, TObject *Target,
  int X, int Y)
{
  FileListBox1->Update();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FileListBox1MouseDown(TObject *Sender,
  TMouseButton Button, TShiftState Shift, int X, int Y)
{
  if (Button == mbLeft) {
    FileX = X;
    FileY = Y;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FileListBox1MouseMove(TObject *Sender,
  TShiftState Shift, int X, int Y)
{
  if (Shift.Contains(ssLeft))
    if (((X - FileX) * (X - FileX) +
         (Y - FileY) * (Y - FileY) > 100))
      if (FileListBox1->SelCount > 0)
        if (!FileListBox1->Dragging())
#if __BCPLUSPLUS__==0x0530
          FileListBox1->BeginDrag(true);
#else
          FileListBox1->BeginDrag(true, 0);
#endif
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1MouseMove(TObject *Sender,
  TShiftState Shift, int X, int Y)
{
  if (Shift.Contains(ssLeft))
    if (((X - OutlineX) * (X - OutlineX) +
         (Y - OutlineY) * (Y - OutlineY) > 100))
      if (AbZipOutline1->SelectedZipItem != NULL)
        if (!FileListBox1->Dragging())
#if __BCPLUSPLUS__==0x0530
          AbZipOutline1->BeginDrag(true);
#else
          AbZipOutline1->BeginDrag(true, 0);
#endif
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Exit(TObject *Sender)
{
  FileListBox1->ApplyFilePath(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyPress(TObject *Sender, char &Key)
{
  if (Key == VK_RETURN)
    Edit1Exit(this);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OS5Click(TObject *Sender)
{
  TMenuItem* Item = dynamic_cast<TMenuItem*>(Sender);
  OS1->Checked = false;
  OS2->Checked = false;
  OS3->Checked = false;
  OS4->Checked = false;
  OS5->Checked = false;
  OS6->Checked = false;
  Item->Checked = true;
//  AbZipOutline1->OutlineStyle = (TOutlineStyle)Item->Tag;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1ConfirmProcessItem(TObject *Sender,
  TAbArchiveItem *Item, TAbProcessType ProcessType, bool &Confirm)
{
  String Process;
  Confirm = true;
  switch (ProcessType) {
    case ptAdd : Process = "Add"; break;
    case ptDelete : Process = "Delete"; break;
    case ptExtract : Process = "Extract"; break;
    case ptFreshen : Process = "Freshen"; break;
    case ptMove : Process = "Move"; break;
  }
  DoConfirm(Sender, Item, Confirm, Process);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1ProcessItemFailure(TObject *Sender,
  TAbArchiveItem *Item, const TAbProcessType ProcessType,
  TAbErrorClass ErrorClass, int ErrorCode)
{
  TAbZipOutline* zo = dynamic_cast<TAbZipOutline*>(Sender);
  switch (ProcessType) {
    case ptAdd : {
      ShowMessage("Cannot add "
        + Item->FileName + " to " + zo->FileName);
      break;
    }
    case ptExtract : {
      ShowMessage("Cannot extract "
        + Item->FileName + " from " + zo->FileName);
      break;
    }
    case ptFreshen :
      ShowMessage("Cannot freshen "
        + Item->FileName + " in " + zo->FileName);
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TurboPowerontheWeb1Click(TObject *Sender)
{
  if ((int)ShellExecute(0, "open",
      "http://www.turbopower.com", "", "", SW_SHOWNORMAL) <= 32)
    ShowMessage("Unable to start web browser. "
      "Make sure you have it properly set up on your system.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbbreviaontheWeb1Click(TObject *Sender)
{
  if ((int)ShellExecute(0, "open",
      "http://www.turbopower.com/products/abbrevia", "", "", SW_SHOWNORMAL) <= 32)
    ShowMessage("Unable to start web browser. "
      "Make sure you have it properly set up on your system.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SendmailtoTurboPower1Click(TObject *Sender)
{
  if ((int)ShellExecute(0, "open",
      "mailto:info@turbopower.com", "", "", SW_SHOWNORMAL) <= 32)
    ShowMessage("Unable to start web browser. "
      "Make sure you have it properly set up on your system.");
}
//---------------------------------------------------------------------------


