// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbDlgDir.pas' rev: 28.00 (Windows)

#ifndef AbdlgdirHPP
#define AbdlgdirHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Winapi.ShlObj.hpp>	// Pascal unit
#include <Winapi.ActiveX.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.FileCtrl.hpp>	// Pascal unit
#include <AbResString.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Abdlgdir
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDirDlg;
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


class DELPHICLASS TAbDirDlg;
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
