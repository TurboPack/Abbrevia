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
/*                      UExample.cpp                     */
/*********************************************************/
//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "UExample.h"
#include "UDemoDlg.h"
//---------------------------------------------------------------------------
#pragma link "AbZipOut"
#pragma link "AbArcTyp"
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
void __fastcall TForm1::Open1Click(TObject *Sender)
{
  if (OpenDialog1->Execute()) {
    AbZipOutline1->FileName = OpenDialog1->FileName;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Exit1Click(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1Load(TObject *Sender)
{
  TopStatus->Caption = "  " + AbZipOutline1->FileName;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1MouseDown(TObject *Sender,
  TMouseButton Button, TShiftState Shift, int X, int Y)
{
  if (Button == mbRight) {
    // prepare popup menu
    if (AbZipOutline1->Count > 0) {
      // there are items in the outline - select the item under the mouse
//      int i = AbZipOutline1->GetOutlineItem( X, Y );
//      if (i != -1)
//        AbZipOutline1->SelectedItem = i;
    }
    if (AbZipOutline1->FileName != "")
      Add1->Enabled = true;
    else
      // archive has to be initialized before we can add to it
      Add1->Enabled = false;
    if (AbZipOutline1->SelectedZipItem) {
      // pointing at a file - allow file operations
      Delete1->Enabled = true;
      Extract1->Enabled = true;
      Freshen1->Enabled = true;
      Move1->Enabled = true;
    }
    else {
      // pointing at a directory - don"t allow file operations
      Delete1->Enabled = false;
      Extract1->Enabled = false;
      Freshen1->Enabled = false;
      Move1->Enabled = false;
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Delete1Click(TObject *Sender)
{
  AbZipOutline1->DeleteFiles( AbZipOutline1->SelectedZipItem->FileName );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Extract1Click(TObject *Sender)
{
  AbZipOutline1->ExtractFiles( AbZipOutline1->SelectedZipItem->FileName );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Freshen1Click(TObject *Sender)
{
  AbZipOutline1->FreshenFiles( AbZipOutline1->SelectedZipItem->FileName );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Add1Click(TObject *Sender)
{
  DemoDlg->Caption = "Add Files with FileMask";
  DemoDlg->Edit1->Text = "*.*";
  DemoDlg->ShowModal();
  if (DemoDlg->ModalResult == mrOk)
    AbZipOutline1->AddFiles( DemoDlg->Edit1->Text, 0 );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Move1Click(TObject *Sender)
{
  DemoDlg->Caption = "Move File to New Name";
  DemoDlg->Edit1->Text = AbZipOutline1->SelectedZipItem->FileName;
  DemoDlg->ShowModal();
  if (DemoDlg->ModalResult == mrOk)
    AbZipOutline1->Move( AbZipOutline1->SelectedZipItem, DemoDlg->Edit1->Text );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AbZipOutline1ProcessItemFailure(TObject *Sender,
  TAbArchiveItem *Item, const TAbProcessType ProcessType,
  TAbErrorClass ErrorClass, int ErrorCode)
{
  switch (ProcessType) {
    case ptAdd : ShowMessage( "Failed to add " + Item->FileName ); break;
    case ptMove : ShowMessage( "Failed to move " + Item->FileName ); break;
    case ptExtract : ShowMessage( "Failed to extract " + Item->FileName ); break;
    case ptFreshen : ShowMessage( "Failed to freshen " + Item->FileName ); break;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  AbZipOutline1->BaseDirectory = ExtractFilePath( Application->ExeName );
}
//---------------------------------------------------------------------------
