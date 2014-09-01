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

#include "StrmBmpU.h"

#include "AbUnzPrc.hpp"
#include "AbZipPrc.hpp"

//---------------------------------------------------------------------------
#pragma package(smart_init)
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
  // Create the compressed stream and the uncompressed stream.
  TMemoryStream* UStrm = new TMemoryStream;
  TMemoryStream* CStrm = new TMemoryStream;

  // Copy the bitmap image to the memory stream.
  Image1->Picture->Bitmap->SaveToStream(UStrm);

  // Set the stream position to the beginning.
  UStrm->Position = 0;

  // Compress the stream.
  DeflateStream(UStrm, CStrm);

  // Remove all data from the uncompressed stream.
  UStrm->Clear();

  // Reset the compressed stream back to the beginning.
  CStrm->Position = 0;

  // Decompress the stream back to the original uncompressed
  // stream and then reset the stream position back to 0.
  InflateStream(CStrm, UStrm);
  UStrm->Position = 0;

  // Now create a new TImage. Make it the same size as the
  // original image but move it down and to the left.
  TImage* Image2 = new TImage(this);
  Image2->Top = Image1->Top + 20;
  Image2->Left = Image1->Left + 20;
  Image2->Width = Image1->Width;
  Image2->Height = Image1->Height;
  Image2->Parent = this;

  // Delete the original TImage.
  delete Image1;

  // Load the new bitmap with the data from the stream
  // that contains the decompressed image.
  Image2->Picture->Bitmap->LoadFromStream(UStrm);

  // Free the memory streams.
  delete UStrm;
  delete CStrm;
}
//---------------------------------------------------------------------------

