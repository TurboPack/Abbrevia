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
/*                      UCompPad.cpp                     */
/*********************************************************/
//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "UCompPad.h"
//---------------------------------------------------------------------------
#pragma link "AbZipKit"
#pragma link "AbZipper"
#pragma link "AbZBrows"
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
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  ZnfName = ChangeFileExt(Application->ExeName, ".zip");
  TxtName = ExtractFileName( ChangeFileExt(Application->ExeName, ".txt") );
  AbZipKit1->BaseDirectory = ExtractFilePath( Application->ExeName );
  SetCurrentDirectory( AbZipKit1->BaseDirectory.c_str() );
  AbZipKit1->FileName = ZnfName;
  if (AbZipKit1->Count > 0) {
    AbZipKit1->ExtractFiles( TxtName );
    Memo1->Lines->LoadFromFile( TxtName );
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  Memo1->Lines->SaveToFile( TxtName );
  if (AbZipKit1->Count == 0)
    AbZipKit1->AddFiles( TxtName, 0 );
  else
    AbZipKit1->FreshenFiles( TxtName );
  AbZipKit1->Save();
  DeleteFile( TxtName.c_str() );
}
//---------------------------------------------------------------------------
 