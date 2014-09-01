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
/*                      selfex.cpp                       */
/*********************************************************/

/* This program creates a ZIP stub called SELFEX.EXE. This
stub can then be used to create self-extracting ZIP files.
For more information on self-extracting ZIPs and ZIP stubs see
page 112 in the Abbrevia manual. */


#include <condefs.h>
#include <stdio.h>
#include "AbArcTyp.hpp"
#include "AbUnzPrc.hpp"
#include "AbUtils.hpp"
#include "AbZipTyp.hpp"

#pragma hdrstop

class THelper : public TObject {
  public:
    __fastcall THelper() {}
    void __fastcall UnzipProc(TObject* Sender,
      TAbArchiveItem* Item, AnsiString NewName);
};

void __fastcall THelper::UnzipProc(TObject* Sender, TAbArchiveItem* Item, AnsiString NewName)
{
  AbUnzip( Sender, dynamic_cast<TAbZipItem *>(Item), NewName );
}

//---------------------------------------------------------------------------
USERES("selfex.res");
//---------------------------------------------------------------------------
#pragma link "AbArcTyp"
#pragma link "abutils"
#pragma link "AbUnzPrc"
#pragma link "AbZipTyp"
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char **argv)
{
  TAbZipArchive* ZipArchive;
  THelper* Helper = new THelper;
  printf("Abbrevia Self Extracting Archive");
  ZipArchive = new TAbZipArchive(
    ParamStr( 0 ), fmOpenRead | fmShareDenyNone);
  SetCurrentDirectory(ExtractFilePath(ParamStr(0)).c_str());
  try {
    ZipArchive->Load();
    ZipArchive->ExtractHelper = Helper->UnzipProc;
    ZipArchive->ExtractFiles("*.*");
  }
  catch (...) {
    delete Helper;
    delete ZipArchive;
    return 0;
  }
  delete Helper;
  delete ZipArchive;
  return 0;
}
 