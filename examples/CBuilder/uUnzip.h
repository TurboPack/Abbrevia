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
/*                      uUnzip.h                         */
/*   Copyright (c) TurboPower Software Co., 1997, 1998   */
/*                 All Rights Reserved                   */
/*********************************************************/
//---------------------------------------------------------------------------
#ifndef uUnzipH
#define uUnzipH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Dialogs.hpp>
#include "AbUnZper.hpp"
#include "AbZBrows.hpp"
#include "AbArcTyp.hpp"
#include "AbBase.hpp"
#include "AbBrowse.hpp"
#include "AbMeter.hpp"
#include "AbUnzper.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
  TOpenDialog *OpenDialog1;
  TAbUnZipper *AbUnZipper1;
    TMemo *Memo1;
    TButton *Button1;
        TAbMeter *AbMeter1;
   TAbVCLMeterLink *AbVCLMeterLink1;
  void __fastcall Button1Click(TObject *Sender);
  void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
