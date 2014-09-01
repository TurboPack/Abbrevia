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
#pragma link "Abcompnd"
#pragma link "Abhexvw"
#pragma link "Classes"
#pragma link "Sysutils"
#pragma hdrstop

#include "uCfMain.h"
#include "uCfNewDg.h"
#include "uCfGenDg.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfmCfMain *fmCfMain;
//---------------------------------------------------------------------------
__fastcall TfmCfMain::TfmCfMain(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::Button1Click(TObject *Sender)
{
  AbCompoundFile1 = new TAbCompoundFile("", "", 1024);
  AbCompoundFile1->CurrentDirectory = "";
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::mnuFileNewClick(TObject *Sender)
{
  if (SaveDialog1->Execute()) {
    if (frmCfNewDlg->ShowModal() == mrOk) {
      if (AbCompoundFile1) {
        delete AbCompoundFile1;
      }
      int AllocSize = StrToInt(frmCfNewDlg->lbAllocSize->
                            Items->Strings[frmCfNewDlg->lbAllocSize->ItemIndex]);
      AbCompoundFile1 = new TAbCompoundFile(SaveDialog1->FileName,
                                         frmCfNewDlg->edtVolLbl->Text, AllocSize);
      Caption = "Abbrevia 3 Compound File Example (" + SaveDialog1->FileName + ")";
      HexV = new THexView(this);
      HexV->BlockSize = AllocSize;
      HexV->Parent = pnlHexView;
      HexV->Align = alClient;
      HexV->Stream = AbCompoundFile1->Stream;
      AbCompoundFile1->PopulateTreeView(tvDirectory);
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::mnuFileOpenClick(TObject *Sender)
{
  /* Open Existing compound file*/
  if (OpenDialog1->Execute()) {
    if (AbCompoundFile1) {
      delete AbCompoundFile1;
    }
    AbCompoundFile1 = new TAbCompoundFile("", "", 512);
    AbCompoundFile1->Open(OpenDialog1->FileName);
    Caption = "Abbrevia 3 Compound File Example (" + OpenDialog1->FileName + ")";
    HexV = new THexView(this);
    HexV->BlockSize = AbCompoundFile1->AllocationSize;
    HexV->Parent = pnlHexView;
    HexV->Align = alClient;
    HexV->Stream = AbCompoundFile1->Stream;
    AbCompoundFile1->PopulateTreeView(tvDirectory);
  }
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::FormDestroy(TObject *Sender)
{
  if (AbCompoundFile1) {
    delete AbCompoundFile1;
  }
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::mnuFileExitClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::mnuEditAddFileClick(TObject *Sender)
{
  if (OpenDialog2->Execute()) {
    TFileStream* Strm = new TFileStream(OpenDialog2->FileName,
      fmOpenRead | fmShareDenyNone);
    AbCompoundFile1->AddFile(OpenDialog2->FileName, Strm, Strm->Size);
    delete Strm;

    AbCompoundFile1->PopulateTreeView(tvDirectory);
    for (int i = 0; i < tvDirectory->Items->Count; i++) {
      tvDirectory->Items->Item[i]->Expand(true);
    }
    HexV->Stream = AbCompoundFile1->Stream;
  }
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::mnuEditAddFolderClick(TObject *Sender)
{
  if (frmCfGenDlg->ShowModal() == mrOk) {
    AbCompoundFile1->AddFolder(frmCfGenDlg->Edit1->Text);
    AbCompoundFile1->PopulateTreeView(tvDirectory);
    for (int i = 0; i < tvDirectory->Items->Count; i++) {
      tvDirectory->Items->Item[i]->Expand(true);
    }
  }
  HexV->Stream = AbCompoundFile1->Stream;
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::mnuEditDeleteClick(TObject *Sender)
{
  if (tvDirectory->Selected->ImageIndex == 0) {
    AbCompoundFile1->DeleteFolder(tvDirectory->Selected->Text);
  }
  else {
    AbCompoundFile1->DeleteFile(tvDirectory->Selected->Text);
  }
  HexV->Stream = AbCompoundFile1->Stream;
  AbCompoundFile1->PopulateTreeView(tvDirectory);

  for (int i = 0; i < tvDirectory->Items->Count; i++) {
    tvDirectory->Items->Item[i]->Expand(true);
  }
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::mnuEditChangeDirClick(TObject *Sender)
{
  frmCfGenDlg->Caption = AbCompoundFile1->CurrentDirectory;
  if (frmCfGenDlg->ShowModal() == mrOk) {
    AbCompoundFile1->CurrentDirectory = frmCfGenDlg->Edit1->Text;
    StatusBar1->SimpleText = "  Current Directory: " + AbCompoundFile1->CurrentDirectory;
  }
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::puViewFileClick(TObject *Sender)
{
  TMemoryStream* Strm = new TMemoryStream;
  AbCompoundFile1->OpenFile(tvDirectory->Selected->Text, Strm);
  HexV->SetStream(Strm);
  delete Strm;
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::puViewCompoundFileClick(TObject *Sender)
{
  HexV->Stream = AbCompoundFile1->Stream;
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::Rename1Click(TObject *Sender)
{
  frmCfGenDlg->Caption = "Rename";
  frmCfGenDlg->Label1->Caption = "New Name";
  if (frmCfGenDlg->ShowModal() == mrOk) {
    if (tvDirectory->Selected->ImageIndex == 0) {
      AbCompoundFile1->RenameFolder(tvDirectory->Selected->Text, frmCfGenDlg->Edit1->Text);
    }
    else {
      AbCompoundFile1->RenameFile(tvDirectory->Selected->Text, frmCfGenDlg->Edit1->Text);
    }
  }
  frmCfGenDlg->Caption = "Change Directory";
  frmCfGenDlg->Label1->Caption = "New Directory";
}
//---------------------------------------------------------------------------
void __fastcall TfmCfMain::tvDirectoryClick(TObject *Sender)
{
  if (!tvDirectory->Selected) {
    tvDirectory->Selected = tvDirectory->TopItem;
  }
  if (tvDirectory->Selected->ImageIndex == 0) {
    AbCompoundFile1->CurrentDirectory = tvDirectory->Selected->Text;
    StatusBar1->SimpleText = "  Current Directory: " + AbCompoundFile1->CurrentDirectory;
  }
}
//---------------------------------------------------------------------------

