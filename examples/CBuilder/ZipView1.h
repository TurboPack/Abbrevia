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
#ifndef ZipView1H
#define ZipView1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "AbArcTyp.hpp"
#include "AbBase.hpp"
#include "AbBrowse.hpp"
#include "AbDlgDir.hpp"
#include "AbMeter.hpp"
#include "AbView.hpp"
#include "AbZBrows.hpp"
#include "AbZipKit.hpp"
#include "AbZipper.hpp"
#include "AbZipTyp.hpp"
#include "AbZView.hpp"
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TAbZipView *AbZipView1;
        TPanel *Panel1;
        TPanel *Panel2;
        TAbMeter *AbMeter1;
        TLabel *Label1;
        TLabel *Label2;
        TAbMeter *AbMeter2;
        TOpenDialog *OpenDialog1;
        TFontDialog *FontDialog1;
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *Open1;
        TMenuItem *Save1;
        TMenuItem *Close1;
        TMenuItem *N1;
        TMenuItem *Print1;
        TMenuItem *Exit1;
        TMenuItem *Action1;
        TMenuItem *Add1;
        TMenuItem *Delete1;
        TMenuItem *Extract1;
        TMenuItem *Freshen1;
        TMenuItem *Moveselecteditem1;
        TMenuItem *Testselecteditems1;
        TMenuItem *ZipView1;
        TMenuItem *Attributes1;
        TMenuItem *Itemname1;
        TMenuItem *Packed1;
        TMenuItem *Method1;
        TMenuItem *Ratio1;
        TMenuItem *CRC1;
        TMenuItem *Fileattributes1;
        TMenuItem *Filetype1;
        TMenuItem *Encryption1;
        TMenuItem *Timestamp1;
        TMenuItem *Filesize1;
        TMenuItem *Versionmade1;
        TMenuItem *Versionneeded1;
        TMenuItem *Path1;
        TMenuItem *Display1;
        TMenuItem *Alternatecolors1;
        TMenuItem *Columnlines1;
        TMenuItem *Columnmoving1;
        TMenuItem *Columnresizing1;
        TMenuItem *MultiSelect1;
        TMenuItem *Rowlines1;
        TMenuItem *ShowIcons1;
        TMenuItem *Thumbtracking1;
        TMenuItem *Trackactiverow1;
        TMenuItem *Font1;
        TMenuItem *Rows1;
        TMenuItem *Rowheight1;
        TMenuItem *Headerheight1;
        TMenuItem *Sort1;
        TMenuItem *Itemname2;
        TMenuItem *Packed2;
        TMenuItem *Ratio2;
        TMenuItem *Timestamp2;
        TMenuItem *Filesize2;
        TMenuItem *ZipKit1;
        TMenuItem *Compress1;
        TMenuItem *Stored1;
        TMenuItem *Deflated1;
        TMenuItem *Best1;
        TMenuItem *Deflation1;
        TMenuItem *Normal1;
        TMenuItem *Maximum1;
        TMenuItem *Fast1;
        TMenuItem *SuperFast1;
        TMenuItem *N2;
        TMenuItem *CreateDirs1;
        TMenuItem *RestorePath1;
        TMenuItem *Store1;
        TMenuItem *StripPath1;
        TMenuItem *RemoveDots1;
        TMenuItem *Recurse1;
        TMenuItem *Freshen2;
        TMenuItem *Replace1;
        TMenuItem *Logging1;
        TMenuItem *Select1;
        TMenuItem *SelectAll1;
        TMenuItem *ClearSelections1;
        TMenuItem *Colors1;
        TMenuItem *AlternateColor1;
        TMenuItem *AlternateTextColor1;
        TMenuItem *DeletedColor1;
        TMenuItem *DeletedTextColor1;
        TMenuItem *Selectedcolor;
        TMenuItem *Selectedtextcolor;
        TColorDialog *ColorDialog1;
        TAbZipKit *AbZipKit1;
        TPopupMenu *PopupMenu1;
        TMenuItem *Delete2;
        TMenuItem *Extract2;
        TMenuItem *Freshen3;
        TMenuItem *Move1;
        TMenuItem *Test1;
   TAbVCLMeterLink *AbVCLMeterLink1;
   TAbVCLMeterLink *AbVCLMeterLink2;
        void __fastcall AttributeClick(TObject *Sender);
        void __fastcall DisplayClick(TObject *Sender);
        void __fastcall MethodClick(TObject *Sender);
        void __fastcall DeflationClick(TObject *Sender);
        void __fastcall ExtractOptionClick(TObject *Sender);
        void __fastcall StoreOptionClick(TObject *Sender);
        void __fastcall AbZipView1Click(TObject *Sender);
        void __fastcall Open1Click(TObject *Sender);
        void __fastcall Close1Click(TObject *Sender);
        void __fastcall SelectAll1Click(TObject *Sender);
        void __fastcall ClearSelections1Click(TObject *Sender);
        void __fastcall Font1Click(TObject *Sender);
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall DeletedColor1Click(TObject *Sender);
        void __fastcall DeletedTextColor1Click(TObject *Sender);
        void __fastcall SelectedcolorClick(TObject *Sender);
        void __fastcall SelectedtextcolorClick(TObject *Sender);
        void __fastcall Rowheight1Click(TObject *Sender);
        void __fastcall Headerheight1Click(TObject *Sender);
        void __fastcall Add1Click(TObject *Sender);
        void __fastcall Delete1Click(TObject *Sender);
        void __fastcall Extract1Click(TObject *Sender);
        void __fastcall Freshen1Click(TObject *Sender);
        void __fastcall Testselecteditems1Click(TObject *Sender);
        void __fastcall AbZipKit1ConfirmProcessItem(TObject *Sender,
          TAbArchiveItem *Item, TAbProcessType ProcessType, bool &Confirm);
        void __fastcall AbZipView1Change(TObject *Sender);
        void __fastcall AlternateColor1Click(TObject *Sender);
        void __fastcall AlternateTextColor1Click(TObject *Sender);
        void __fastcall Moveselecteditem1Click(TObject *Sender);
        void __fastcall AbZipKit1Save(TObject *Sender);
        void __fastcall Save1Click(TObject *Sender);
        void __fastcall Logging1Click(TObject *Sender);
        
        void __fastcall SortAttributeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
