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
/*                      TPZip.cpp                        */
/*********************************************************/
//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "usplash.h"

//---------------------------------------------------------------------------
USEFORM("UMain.cpp", Form1);
USERES("TPZip.res");
USEFORM("DgAbout.cpp", dlgAboutBox);
USEFORM("UBaseDlg.cpp", BaseDirDlg);
USEFORM("UDemoDlg.cpp", DemoDlg);
USEFORM("usplash.cpp", Splash);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
  try
  {
     Application->Initialize();
     Application->HelpFile = "Tpzip31.hlp";
     Splash = new TSplash(Application);
     Splash->Show();
     Splash->Refresh();
     Application->CreateForm(__classid(TForm1), &Form1);
        Application->Run();
  }
  catch (Exception &exception)
  {
     Application->ShowException(&exception);
  }
  return 0;
}
//---------------------------------------------------------------------------
