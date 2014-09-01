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
/*                      UStrPad.cpp                      */
/*********************************************************/
//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "UStrPad.h"
//---------------------------------------------------------------------------
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
  ZnfName = ChangeFileExt(Application->ExeName, ".zst");
  TxtName = ExtractFileName( ChangeFileExt(Application->ExeName, ".pad") );
  SetCurrentDirectory( ExtractFilePath( Application->ExeName ).c_str() );
  if (FileExists( ZnfName )) {
    TxtStream = new TMemoryStream;
    try {
      ZnfStream = new TFileStream( ZnfName, fmOpenRead | fmShareExclusive );
      try {
        InflateStream( ZnfStream, TxtStream );
      }
      catch (...) {
        delete ZnfStream;
        ZnfStream = 0;
      }
      delete ZnfStream;
      TxtStream->Position = 0;
      Memo1->Lines->LoadFromStream( TxtStream );
    }
    catch (...) {
      delete TxtStream;
      return;
    }
    delete TxtStream;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  TxtStream = new TMemoryStream;
  try {
    Memo1->Lines->SaveToStream( TxtStream );
    TxtStream->Position = 0;
    if (FileExists( ZnfName ))
      ZnfStream = new TFileStream( ZnfName, fmOpenWrite | fmShareExclusive );
    else
      ZnfStream = new TFileStream( ZnfName, fmCreate | fmShareExclusive );
    try {
      DeflateStream( TxtStream, ZnfStream );
    }
    catch (...) {
      delete ZnfStream;
      ZnfStream = 0;
    }
    delete ZnfStream;
  }
  catch (...) {
    delete TxtStream;
    return;
  }
  delete TxtStream;
}
//---------------------------------------------------------------------------
