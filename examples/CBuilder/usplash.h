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
/*                      usplash.h                        */
/*   Copyright (c) TurboPower Software Co., 1997, 1998   */
/*                 All Rights Reserved                   */
/*********************************************************/
//---------------------------------------------------------------------------
#ifndef usplashH
#define usplashH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TSplash : public TForm
{
__published:	// IDE-managed Components
  TImage *Image1;
  TTimer *Timer1;
  void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TSplash(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSplash *Splash;
//---------------------------------------------------------------------------
#endif
