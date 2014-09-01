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

#ifndef uCfMainH
#define uCfMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <ImgList.hpp>
#include <Menus.hpp>

#undef SetCurrentDirectory
#undef DeleteFile
#undef GetCurrentDirectory
#include "AbCompnd.hpp"
#include "AbHexVw.hpp"
//---------------------------------------------------------------------------
class TfmCfMain : public TForm
{
__published:	// IDE-managed Components
        TStatusBar *StatusBar1;
        TTreeView *tvDirectory;
        TPanel *pnlHexView;
        TImageList *tvImages;
        TOpenDialog *OpenDialog1;
        TMainMenu *mnuMain;
        TMenuItem *mnuFile;
        TMenuItem *mnuFileNew;
        TMenuItem *mnuFileOpen;
        TMenuItem *N6;
        TMenuItem *mnuFileExit;
        TMenuItem *mnuEdit;
        TMenuItem *mnuEditAddFile;
        TMenuItem *mnuEditAddFolder;
        TMenuItem *mnuEditDelete;
        TMenuItem *N1;
        TMenuItem *mnuEditChangeDir;
        TPopupMenu *mnuPopupMenu;
        TMenuItem *puAddFile;
        TMenuItem *puAddFolder;
        TMenuItem *puViewFile;
        TMenuItem *puChangeDir;
        TMenuItem *puViewCompoundFile;
        TMenuItem *puDelete;
        TMenuItem *Rename1;
        TSaveDialog *SaveDialog1;
        TOpenDialog *OpenDialog2;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall mnuFileNewClick(TObject *Sender);
        void __fastcall mnuFileOpenClick(TObject *Sender);
        void __fastcall FormDestroy(TObject *Sender);
        void __fastcall mnuFileExitClick(TObject *Sender);
        void __fastcall mnuEditAddFileClick(TObject *Sender);
        void __fastcall mnuEditAddFolderClick(TObject *Sender);
        void __fastcall mnuEditDeleteClick(TObject *Sender);
        void __fastcall mnuEditChangeDirClick(TObject *Sender);
        void __fastcall puViewFileClick(TObject *Sender);
        void __fastcall puViewCompoundFileClick(TObject *Sender);
        void __fastcall Rename1Click(TObject *Sender);
        void __fastcall tvDirectoryClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfmCfMain(TComponent* Owner);


        TAbCompoundFile* AbCompoundFile1;
        THexView* HexV;
};
//---------------------------------------------------------------------------
extern PACKAGE TfmCfMain *fmCfMain;
//---------------------------------------------------------------------------
#endif
 