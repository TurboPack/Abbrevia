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
#ifndef ExFiltr1H
#define ExFiltr1H
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include "AbMeter.hpp"
#include "AbZView.hpp"
#include "AbView.hpp"
#include "Grids.hpp"
#include <vcl\ExtCtrls.hpp>
#include <vcl\FileCtrl.hpp>
#include <vcl\Dialogs.hpp>
#include "AbZipKit.hpp"
#include "AbZipper.hpp"
#include "AbZBrows.hpp"
#include "AbArcTyp.hpp"
#include "AbBase.hpp"
#include "AbBrowse.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label4;
	TAbMeter *AbMeter1;
	TButton *OpenBtn;
	TAbZipView *AbZipView1;
	TButton *CloseBtn;
	TGroupBox *AddGroup;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TBevel *Bevel1;
	TEdit *FileMask1;
	TEdit *FilterMask1;
	TButton *AddBtn;
	TDirectoryListBox *DirectoryListBox1;
	TGroupBox *DeleteGroup;
	TLabel *Label5;
	TLabel *Label6;
	TBevel *Bevel2;
	TEdit *FileMask2;
	TEdit *FilterMask2;
	TButton *DeleteBtn;
	TButton *AbortBtn;
	TButton *ExitBtn;
	TGroupBox *ExtractGroup;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TBevel *Bevel3;
	TEdit *FileMask3;
	TEdit *FilterMask3;
	TButton *ExtractBtn;
	TDirectoryListBox *DirectoryListBox2;
	TOpenDialog *OpenDialog1;
	TAbZipKit *AbZipKit1;
   TAbVCLMeterLink *AbVCLMeterLink1;
	void __fastcall OpenBtnClick(TObject *Sender);
	void __fastcall CloseBtnClick(TObject *Sender);
	void __fastcall AddBtnClick(TObject *Sender);
	void __fastcall DeleteBtnClick(TObject *Sender);
	void __fastcall ExtractBtnClick(TObject *Sender);
	void __fastcall AbortBtnClick(TObject *Sender);
	void __fastcall ExitBtnClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall AbZipKit1ConfirmProcessItem(TObject *Sender,
	TAbArchiveItem *Item, TAbProcessType ProcessType, bool &Confirm);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
