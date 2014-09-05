// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbDlgPwd.pas' rev: 28.00 (Windows)

#ifndef AbdlgpwdHPP
#define AbdlgpwdHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Abdlgpwd
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TPassWordDlg;
class PASCALIMPLEMENTATION TPassWordDlg : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* OKBtn;
	Vcl::Stdctrls::TButton* CancelBtn;
	Vcl::Extctrls::TBevel* Bevel1;
	Vcl::Stdctrls::TEdit* Edit1;
	Vcl::Stdctrls::TEdit* Edit2;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* Label2;
	void __fastcall Edit1Change(System::TObject* Sender);
	void __fastcall Edit2Change(System::TObject* Sender);
	void __fastcall FormActivate(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TPassWordDlg(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TPassWordDlg(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TPassWordDlg(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPassWordDlg(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TPassWordDlg* PassWordDlg;
}	/* namespace Abdlgpwd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABDLGPWD)
using namespace Abdlgpwd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbdlgpwdHPP
