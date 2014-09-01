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
/*                      UExample.h                       */
/*   Copyright (c) TurboPower Software Co., 1997, 1998   */
/*                 All Rights Reserved                   */
/*********************************************************/
//---------------------------------------------------------------------------
#ifndef UExampleH
#define UExampleH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\ExtCtrls.hpp>
#include "AbZipOut.hpp"
#include "AbArcTyp.hpp"
#include <vcl\Menus.hpp>
#include <vcl\Dialogs.hpp>
#include <vcl\ComCtrls.hpp>
#include "AbBase.hpp"
#include "AbMeter.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
  TPanel *BottomStatus;
  TPanel *TopStatus;
  TMainMenu *MainMenu1;
  TMenuItem *File1;
  TMenuItem *Open1;
  TMenuItem *N1;
  TMenuItem *Exit1;
  TOpenDialog *OpenDialog1;
  TPopupMenu *PopupMenu1;
  TMenuItem *Add1;
  TMenuItem *Delete1;
  TMenuItem *Extract1;
  TMenuItem *Freshen1;
  TMenuItem *Move1;
    TPanel *Panel1;
    TMemo *Memo1;
        TAbMeter *AbMeter1;
        TAbMeter *AbMeter2;
        TLabel *Label1;
        TLabel *Label2;
   TAbZipOutline *AbZipOutline1;
  void __fastcall Open1Click(TObject *Sender);
  void __fastcall Exit1Click(TObject *Sender);
  void __fastcall AbZipOutline1Load(TObject *Sender);
  void __fastcall AbZipOutline1MouseDown(TObject *Sender, TMouseButton Button,
  TShiftState Shift, int X, int Y);
  void __fastcall Delete1Click(TObject *Sender);
  void __fastcall Extract1Click(TObject *Sender);
  void __fastcall Freshen1Click(TObject *Sender);
  void __fastcall Add1Click(TObject *Sender);
  void __fastcall Move1Click(TObject *Sender);
  void __fastcall AbZipOutline1ProcessItemFailure(TObject *Sender,
  TAbArchiveItem *Item, const TAbProcessType ProcessType,
  TAbErrorClass ErrorClass, int ErrorCode);
  void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
