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
/*                      UBaseDlg.h                       */
/*   Copyright (c) TurboPower Software Co., 1997, 1998   */
/*                 All Rights Reserved                   */
/*********************************************************/
//---------------------------------------------------------------------------
#ifndef UBaseDlgH
#define UBaseDlgH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\FileCtrl.hpp>
#include <AbUtils.hpp>
//---------------------------------------------------------------------------
class TBaseDirDlg : public TForm
{
__published:	// IDE-managed Components
  TLabel *DirLabel;
  TLabel *ActionLabel;
  TButton *Button1;
  TButton *Button2;
  TEdit *Edit1;
  TDriveComboBox *DriveComboBox1;
  TDirectoryListBox *DLB;
  TCheckBox *CheckBox2;
  TCheckBox *CheckBox1;
  TButton *Button3;
  void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TBaseDirDlg(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBaseDirDlg *BaseDirDlg;
//---------------------------------------------------------------------------
#endif
