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
/*                      UsingAPI.cpp                     */
/*********************************************************/
//---------------------------------------------------------------------------

#include <condefs.h>
#include <iostream.h>

#include <AbArcTyp.hpp>
#include <AbZipTyp.hpp>
#include <AbZipPrc.hpp>
#include <AbUnzPrc.hpp>

#pragma hdrstop
//---------------------------------------------------------------------------

USERES("UsingAPI.res");
//---------------------------------------------------------------------------
#pragma link "abarctyp"
#pragma link "abziptyp"
#pragma link "abzipprc"
#pragma link "abunzprc"
//---------------------------------------------------------------------------

class THelper : public TObject {
  public:
    virtual __fastcall THelper() {};
    void __fastcall UnzipProc(
      TObject* Sender, TAbArchiveItem* Item, String NewName);
    void __fastcall ZipProc(
      TObject* Sender, TAbArchiveItem* Item, TStream* OutStream);
    void __fastcall ArchiveItemProgress(TObject* Sender, TAbArchiveItem* Item,
      Byte Progress, bool& Abort);
};

void __fastcall THelper::ZipProc(
  TObject* Sender, TAbArchiveItem* Item, TStream* OutStream)
{
  AbZip((TAbZipArchive*)Sender, (TAbZipItem*)Item, OutStream);
}

void __fastcall THelper::UnzipProc(
  TObject* Sender, TAbArchiveItem* Item, String NewName)
{
  AbUnzip(Sender, (TAbZipItem*)Item, NewName);
}

void __fastcall THelper::ArchiveItemProgress(
  TObject* Sender, TAbArchiveItem* Item, Byte Progress, bool& Abort)
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
  cout << String(ActionString + Item->FileName).c_str() << endl;
}


//---------------------------------------------------------------------------
#pragma argsused
int main(int argc, char **argv)
{
  String ZipFileName;
  String OutDirectory;
  String InDirectory;
  String Mask;
  TAbZipArchive* Archive;
  THelper* Helper = new THelper;

  // usage: UsingAPI ZipFileName InDirectory Mask OutDirectory
  if (ParamCount() < 4 || (ParamCount() > 0 && ParamStr(1).Pos('?'))) {
     cout << endl << "  Syntax: UsingAPI ZipFileName "
      "InDirectory Mask OutDirectory" << endl;
    return 0;
  }
  ZipFileName = ParamStr(1);
  InDirectory = ParamStr(2);
  Mask = ParamStr(3);
  OutDirectory = ParamStr(4);
  // open the file
  if (FileExists( ZipFileName )) {
    Archive = new TAbZipArchive(
      ZipFileName, fmOpenReadWrite | fmShareDenyWrite );
    Archive->Load();
  }
  else
    Archive = new TAbZipArchive(
      ZipFileName, fmCreate | fmShareDenyNone );
  try {
    Helper = new THelper;
    // set the event handlers
    Archive->InsertHelper = Helper->ZipProc;
    Archive->ExtractHelper = Helper->UnzipProc;
    Archive->OnArchiveItemProgress = Helper->ArchiveItemProgress;
    // set the BaseDirectory for input files
    Archive->BaseDirectory = InDirectory;
    // add all the files in the BaseDirectory to the archive
    Archive->AddFiles( Mask, 0 );
    // save the files to the zipfile
    Archive->Save();
    // now, change the base directory to the output
    Archive->BaseDirectory = OutDirectory;
    Archive->ExtractFiles( Mask );
  }
  catch (...) {
    delete Helper;
    delete Archive;
    return 0;
  }
  delete Helper;
  delete Archive;
  return 0;
}
