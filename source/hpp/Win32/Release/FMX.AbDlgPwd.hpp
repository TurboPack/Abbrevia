// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.AbDlgPwd.pas' rev: 31.00 (Windows)

#ifndef Fmx_AbdlgpwdHPP
#define Fmx_AbdlgpwdHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <System.Classes.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Controls.Presentation.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Abdlgpwd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPassWordDlg;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TPassWordDlg : public Fmx::Forms::TForm
{
	typedef Fmx::Forms::TForm inherited;
	
__published:
	Fmx::Stdctrls::TButton* OKBtn;
	Fmx::Stdctrls::TButton* CancelBtn;
	Fmx::Stdctrls::TPanel* Bevel1;
	Fmx::Edit::TEdit* Edit1;
	Fmx::Edit::TEdit* Edit2;
	Fmx::Stdctrls::TLabel* Label1;
	Fmx::Stdctrls::TLabel* Label2;
	void __fastcall Edit1Change(System::TObject* Sender);
	void __fastcall Edit2Change(System::TObject* Sender);
	void __fastcall FormActivate(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TPassWordDlg(System::Classes::TComponent* AOwner) : Fmx::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TPassWordDlg(System::Classes::TComponent* AOwner, NativeInt Dummy) : Fmx::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TPassWordDlg(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abdlgpwd */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_ABDLGPWD)
using namespace Fmx::Abdlgpwd;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_AbdlgpwdHPP
