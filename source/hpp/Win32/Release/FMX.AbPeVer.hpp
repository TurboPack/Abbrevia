// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.AbPeVer.pas' rev: 31.00 (Windows)

#ifndef Fmx_AbpeverHPP
#define Fmx_AbpeverHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <FMX.Forms.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Objects.hpp>
#include <System.Classes.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Controls.Presentation.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Abpever
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbAboutBox;
class DELPHICLASS TAbVersionProperty;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbAboutBox : public Fmx::Forms::TForm
{
	typedef Fmx::Forms::TForm inherited;
	
__published:
	Fmx::Stdctrls::TLabel* lblVersion;
	Fmx::Stdctrls::TPanel* Panel1;
	Fmx::Objects::TImage* Image1;
	Fmx::Stdctrls::TButton* btnOK;
	Fmx::Stdctrls::TPanel* Panel2;
	Fmx::Stdctrls::TLabel* WebLbl;
	Fmx::Stdctrls::TLabel* NewsLbl;
	Fmx::Stdctrls::TPanel* Bevel1;
	Fmx::Stdctrls::TLabel* Label1;
	Fmx::Stdctrls::TLabel* Label2;
	Fmx::Stdctrls::TLabel* Label3;
	Fmx::Stdctrls::TLabel* Label5;
	Fmx::Stdctrls::TLabel* Label6;
	Fmx::Stdctrls::TLabel* Label7;
	Fmx::Stdctrls::TLabel* Label10;
	Fmx::Stdctrls::TLabel* Label11;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall btnOKClick(System::TObject* Sender);
	void __fastcall WebLblClick(System::TObject* Sender);
	void __fastcall NewsLblClick(System::TObject* Sender);
	void __fastcall FormMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall NewsLblMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall Panel2MouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, float X, float Y);
	void __fastcall WebLblMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, float X, float Y);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAbAboutBox(System::Classes::TComponent* AOwner) : Fmx::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAbAboutBox(System::Classes::TComponent* AOwner, NativeInt Dummy) : Fmx::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAbAboutBox(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbVersionProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TAbVersionProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TAbVersionProperty(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abpever */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_ABPEVER)
using namespace Fmx::Abpever;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_AbpeverHPP
