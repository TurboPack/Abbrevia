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
/*                      UMain.h                          */
/*   Copyright (c) TurboPower Software Co., 1997, 1998   */
/*                 All Rights Reserved                   */
/*********************************************************/
//---------------------------------------------------------------------------
#ifndef UMainH
#define UMainH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\ExtCtrls.hpp>
#include "AbZipOut.hpp"
#include "AbArcTyp.hpp"
#include "AbZBrows.hpp"
#include "AbDlgPwd.hpp"
#include <vcl\FileCtrl.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\Menus.hpp>
#include <vcl\Dialogs.hpp>
#include <vcl\IniFiles.hpp>
#include <shellapi.h>
#include <vcl\ComCtrls.hpp>
#include "AbBase.hpp"
#include "AbMeter.hpp"
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
  TPanel *Panel1;
  TLabel *Label1;
  TLabel *Label2;
  TPanel *Panel2;
  TPanel *Panel3;
  TPanel *Panel4;
  TLabel *Label3;
  TDriveComboBox *DriveComboBox1;
  TFilterComboBox *FilterComboBox1;
  TEdit *Edit1;
  TDirectoryListBox *DirectoryListBox1;
  TFileListBox *FileListBox1;
  TPanel *Panel6;
  TLabel *ArchiveLabel;
  TPanel *Panel8;
  TSpeedButton *SpeedButton1;
  TSpeedButton *SpeedButton2;
  TSpeedButton *SpeedButton3;
  TSpeedButton *SpeedButton4;
  TSpeedButton *SpeedButton5;
  TSpeedButton *SpeedButton7;
  TSpeedButton *SpeedButton8;
  TSpeedButton *SpeedButton9;
  TSpeedButton *SpeedButton10;
  TSpeedButton *SpeedButton11;
  TSpeedButton *SpeedButton12;
  TSpeedButton *SpeedButton13;
  TSpeedButton *SpeedButton14;
  TImage *Image1;
  TSpeedButton *sbNone;
  TSpeedButton *sbAll;
  TSpeedButton *sbDef;
  TMainMenu *MainMenu1;
  TMenuItem *File1;
  TMenuItem *Open1;
  TMenuItem *Save1;
  TMenuItem *Close1;
  TMenuItem *N4;
  TMenuItem *Convert1;
  TMenuItem *N1;
  TMenuItem *Exit1;
  TMenuItem *Preferences1;
  TMenuItem *Confirmations1;
  TMenuItem *CompressionMethodToUse1;
  TMenuItem *Store1;
  TMenuItem *Deflate1;
  TMenuItem *Best1;
  TMenuItem *DeflationOption1;
  TMenuItem *Normal1;
  TMenuItem *Maximum1;
  TMenuItem *Fast1;
  TMenuItem *SuperFast1;
  TMenuItem *ExtractOptions1;
  TMenuItem *CreateDirs1;
  TMenuItem *RestorePath1;
  TMenuItem *Password1;
  TMenuItem *StoreOptions1;
  TMenuItem *RecurseTree1;
  TMenuItem *RemoveDots1;
  TMenuItem *StripPath1;
  TMenuItem *View1;
  TMenuItem *Attributes1;
  TMenuItem *za0;
  TMenuItem *za1;
  TMenuItem *za2;
  TMenuItem *za3;
  TMenuItem *za4;
  TMenuItem *za5;
  TMenuItem *za6;
  TMenuItem *za7;
  TMenuItem *za8;
  TMenuItem *za9;
  TMenuItem *za10;
  TMenuItem *FileComment1;
  TMenuItem *N3;
  TMenuItem *None1;
  TMenuItem *All1;
  TMenuItem *Default1;
  TMenuItem *Font1;
  TMenuItem *Style1;
  TMenuItem *Hierarchy1;
  TMenuItem *N5;
  TMenuItem *OS1;
  TMenuItem *OS2;
  TMenuItem *OS3;
  TMenuItem *OS4;
  TMenuItem *OS5;
  TMenuItem *OS6;
  TMenuItem *Items1;
  TMenuItem *AddFiles1;
  TMenuItem *DeleteFiles1;
  TMenuItem *ExtractFiles1;
  TMenuItem *FreshenFiles1;
  TMenuItem *Help1;
  TMenuItem *Contents1;
  TMenuItem *N2;
  TMenuItem *About1;
  TFontDialog *FontDialog1;
  TOpenDialog *OpenDialog1;
  TPopupMenu *PopupMenu1;
  TMenuItem *Delete1;
  TMenuItem *Extract1;
  TMenuItem *Freshen1;
  TMenuItem *Move1;
  TMenuItem *Run1;
  TPanel *Panel5;
  TMenuItem *TurboPowerontheWeb1;
  TMenuItem *SendmailtoTurboPower1;
  TMenuItem *AbbreviaontheWeb1;
        TAbMeter *AbMeter1;
        TAbMeter *AbMeter2;
        TAbZipOutline *AbZipOutline1;
  void __fastcall All1Click(TObject *Sender);
  void __fastcall Exit1Click(TObject *Sender);
  void __fastcall FormCreate(TObject *Sender);
  void __fastcall Hierarchy1Click(TObject *Sender);
  void __fastcall None1Click(TObject *Sender);
  void __fastcall Save1Click(TObject *Sender);
  void __fastcall za10Click(TObject *Sender);
  void __fastcall Font1Click(TObject *Sender);
  void __fastcall Open1Click(TObject *Sender);
  void __fastcall AbZipOutline1DragOver(TObject *Sender, TObject *Source, int X,
  int Y, TDragState State, bool &Accept);
  void __fastcall AbZipOutline1DragDrop(TObject *Sender, TObject *Source, int X,
  int Y);
  void __fastcall AbZipOutline1DblClick(TObject *Sender);
  void __fastcall AbZipOutline1MouseDown(TObject *Sender, TMouseButton Button,
  TShiftState Shift, int X, int Y);
  void __fastcall FileListBox1DragOver(TObject *Sender, TObject *Source, int X,
  int Y, TDragState State, bool &Accept);
  void __fastcall FileListBox1DragDrop(TObject *Sender, TObject *Source, int X,
  int Y);
  void __fastcall AbZipOutline1WindowsDrop(TObject *Sender, AnsiString FileName);
  void __fastcall Best1Click(TObject *Sender);
  void __fastcall SuperFast1Click(TObject *Sender);
  void __fastcall CreateDirs1Click(TObject *Sender);
  void __fastcall RestorePath1Click(TObject *Sender);
  void __fastcall StripPath1Click(TObject *Sender);
  void __fastcall AbZipOutline1Change(TObject *Sender);
  void __fastcall Confirmations1Click(TObject *Sender);
  void __fastcall AbZipOutline1ConfirmSave(TObject *Sender, bool &Confirm);
  void __fastcall Delete1Click(TObject *Sender);
  void __fastcall Extract1Click(TObject *Sender);
  void __fastcall Freshen1Click(TObject *Sender);
  void __fastcall Move1Click(TObject *Sender);
  void __fastcall Password1Click(TObject *Sender);
  void __fastcall AddFiles1Click(TObject *Sender);
  void __fastcall FreshenFiles1Click(TObject *Sender);
  void __fastcall AbZipOutline1ArchiveItemProgress(TObject *Sender,
  TAbArchiveItem *Item, BYTE Progress, bool &Abort);
  void __fastcall AbZipOutline1NeedPassword(TObject *Sender,
  AnsiString &NewPassword);
  void __fastcall DeleteFiles1Click(TObject *Sender);
  void __fastcall ExtractFiles1Click(TObject *Sender);
  void __fastcall FormDestroy(TObject *Sender);
  void __fastcall Close1Click(TObject *Sender);
  void __fastcall AbZipOutline1Load(TObject *Sender);
  void __fastcall Convert1Click(TObject *Sender);
  void __fastcall AbZipOutline1ConfirmOverwrite(AnsiString &Name, bool &Confirm);
  void __fastcall Default1Click(TObject *Sender);
  void __fastcall Contents1Click(TObject *Sender);
  void __fastcall About1Click(TObject *Sender);
  void __fastcall FileListBox1DblClick(TObject *Sender);
  void __fastcall AbZipOutline1EndDrag(TObject *Sender, TObject *Target, int X,
  int Y);
  void __fastcall FileListBox1MouseDown(TObject *Sender, TMouseButton Button,
  TShiftState Shift, int X, int Y);
  void __fastcall FileListBox1MouseMove(TObject *Sender, TShiftState Shift,
  int X, int Y);
  void __fastcall AbZipOutline1MouseMove(TObject *Sender, TShiftState Shift,
  int X, int Y);
  void __fastcall Edit1Exit(TObject *Sender);
  void __fastcall FormKeyPress(TObject *Sender, char &Key);
  void __fastcall OS5Click(TObject *Sender);
  void __fastcall AbZipOutline1ConfirmProcessItem(TObject *Sender,
  TAbArchiveItem *Item, TAbProcessType ProcessType, bool &Confirm);
  void __fastcall AbZipOutline1ProcessItemFailure(TObject *Sender,
  TAbArchiveItem *Item, const TAbProcessType ProcessType,
  TAbErrorClass ErrorClass, int ErrorCode);
  
  
  
  
  void __fastcall TurboPowerontheWeb1Click(TObject *Sender);
  void __fastcall AbbreviaontheWeb1Click(TObject *Sender);
  void __fastcall SendmailtoTurboPower1Click(TObject *Sender);
private:	// User declarations
  int OutlineX, OutlineY, FileX, FileY;
  String StubName;
  void ReadIniSettings();
  void SaveIniSettings();
  void SetCaption();
  void UpdateMenu();
  void __fastcall DoConfirm(TObject* Sender, TAbArchiveItem* Item,
                       bool& Confirm, String Caption);
  void __fastcall GetMinMaxInfo(TWMGetMinMaxInfo& Msg);
public:		// User declarations
  __fastcall TForm1(TComponent* Owner);
  BEGIN_MESSAGE_MAP
    MESSAGE_HANDLER(WM_GETMINMAXINFO, TWMGetMinMaxInfo, GetMinMaxInfo)
  END_MESSAGE_MAP(TForm);
};
//---------------------------------------------------------------------------
extern TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
