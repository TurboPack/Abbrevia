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
#ifndef MakeCab1H
#define MakeCab1H
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include "AbMeter.hpp"
#include <vcl\ExtCtrls.hpp>
#include <vcl\Dialogs.hpp>
#include "AbCabMak.hpp"
#include "AbCBrows.hpp"
#include "AbArcTyp.hpp"
#include "AbBase.hpp"
#include "AbBrowse.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TAbMeter *AbMeter1;
	TButton *AddBtn;
	TButton *CreateBtn;
	TButton *CloseBtn;
	TPanel *Panel1;
	TButton *NewFolderBtn;
	TButton *NewCabBtn;
	TOpenDialog *OpenDialog1;
	TAbMakeCab *AbMakeCab1;
   TAbVCLMeterLink *AbVCLMeterLink1;
	void __fastcall CreateBtnClick(TObject *Sender);
	void __fastcall AddBtnClick(TObject *Sender);
	void __fastcall CloseBtnClick(TObject *Sender);
	void __fastcall NewFolderBtnClick(TObject *Sender);
	void __fastcall NewCabBtnClick(TObject *Sender);
	void __fastcall AbMakeCab1ArchiveItemProgress(TObject *Sender,
          TAbArchiveItem *Item, BYTE Progress, bool &Abort);
        void __fastcall AbMakeCab1ConfirmProcessItem(TObject *Sender,
          TAbArchiveItem *Item, TAbProcessType ProcessType, bool &Confirm);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
