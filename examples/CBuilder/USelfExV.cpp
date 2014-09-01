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
/*                      USelfExV.cpp                     */
/*********************************************************/
//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "USelfExV.h"
//---------------------------------------------------------------------------
#pragma link "AbUnZper"
#pragma link "AbZBrows"
#pragma link "AbArcTyp"
#pragma link "AbBase"
#pragma link "AbBrowse"
#pragma link "AbUnzper"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
  : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  AbUnZipper1->FileName = ParamStr( 0 );
  SetCurrentDirectory( ExtractFilePath( ParamStr( 0 ) ).c_str() );
  AbUnZipper1->ExtractFiles( "*.*" );
}
//---------------------------------------------------------------------------
