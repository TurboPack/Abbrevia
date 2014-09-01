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
/*                      DgAbout.h                        */
/*   Copyright (c) TurboPower Software Co., 1997, 1998   */
/*                 All Rights Reserved                   */
/*********************************************************/
//---------------------------------------------------------------------------
#ifndef DgAboutH
#define DgAboutH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\ExtCtrls.hpp>
#include "AbConst.hpp"
//---------------------------------------------------------------------------
class TdlgAboutBox : public TForm
{
__published:	// IDE-managed Components
  TPanel *Panel1;
  TLabel *Label8;
  TImage *ProgramIcon;
  TLabel *Label7;
  TLabel *Label86;
  TLabel *Label85;
  TLabel *Label84;
  TLabel *Version;
  TPanel *Panel2;
  TLabel *lnTitleShadow;
  TLabel *lblTitle;
  TLabel *Label5;
  TLabel *Label1;
  TButton *OKButton;
  void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TdlgAboutBox(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdlgAboutBox *dlgAboutBox;
//---------------------------------------------------------------------------
#endif
