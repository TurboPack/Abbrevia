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
#ifndef Streams1H
#define Streams1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AbArcTyp.hpp"
#include "AbView.hpp"
#include "AbZBrows.hpp"
#include "AbZipKit.hpp"
#include "AbZipper.hpp"
#include "AbZView.hpp"
#include <Dialogs.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
#include "AbBase.hpp"
#include "AbBrowse.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TAbZipView *AbZipView1;
        TMemo *Memo1;
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *Open1;
        TMenuItem *Close1;
        TMenuItem *N1;
        TMenuItem *Exit1;
        TMenuItem *Action1;
        TMenuItem *Extract1;
        TMenuItem *Add1;
        TMenuItem *Clearmemo1;
        TOpenDialog *OpenDialog1;
        TAbZipKit *AbZipKit1;
        void __fastcall Open1Click(TObject *Sender);
        void __fastcall Extract1Click(TObject *Sender);
        void __fastcall Close1Click(TObject *Sender);
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall AbZipView1DblClick(TObject *Sender);
        void __fastcall Clearmemo1Click(TObject *Sender);
        void __fastcall Add1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
