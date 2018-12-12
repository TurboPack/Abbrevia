// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbDlgDir.pas' rev: 32.00 (Windows)

#ifndef AbdlgdirHPP
#define AbdlgdirHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.ShlObj.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.FileCtrl.hpp>
#include <AbResString.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abdlgdir
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDirDlg;
class DELPHICLASS TAbDirDlg;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDirDlg : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* OKBtn;
	Vcl::Stdctrls::TButton* CancelBtn;
	Vcl::Extctrls::TBevel* Bevel1;
	Vcl::Filectrl::TDriveComboBox* DriveComboBox1;
	Vcl::Filectrl::TDirectoryListBox* DirectoryListBox1;
	Vcl::Extctrls::TPanel* Panel1;
	void __fastcall DirectoryListBox1Change(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	
public:
	System::UnicodeString SelectedFolder;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TDirDlg(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDirDlg(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TDirDlg(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDirDlg(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TAbDirDlg : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
protected:
	System::UnicodeString FAdditionalText;
	System::UnicodeString FCaption;
	int FHandle;
	_ITEMIDLIST *FIDList;
	System::UnicodeString FSelectedFolder;
	void __fastcall SetSelectedFolder(const System::UnicodeString Value);
	void __fastcall FreeIDList(void);
	
public:
	__property System::UnicodeString AdditionalText = {read=FAdditionalText, write=FAdditionalText};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property int Handle = {read=FHandle, nodefault};
	__property Winapi::Shlobj::PItemIDList IDList = {read=FIDList};
	__property System::UnicodeString SelectedFolder = {read=FSelectedFolder, write=SetSelectedFolder};
	__fastcall virtual TAbDirDlg(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbDirDlg(void);
	bool __fastcall Execute(void);
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TDirDlg* DirDlg;
}	/* namespace Abdlgdir */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABDLGDIR)
using namespace Abdlgdir;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbdlgdirHPP
