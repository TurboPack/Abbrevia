// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbPeCol.pas' rev: 30.00 (Windows)

#ifndef AbpecolHPP
#define AbpecolHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <AbView.hpp>
#include <AbBseVCL.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <AbConst.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abpecol
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbColHeadingsEditor;
class DELPHICLASS TAbColHeadingsProperty;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbColHeadingsEditor : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TPanel* Panel1;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TComboBox* Attribute1;
	Vcl::Buttons::TBitBtn* Done1;
	Vcl::Buttons::TBitBtn* Apply1;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TEdit* Heading1;
	Vcl::Stdctrls::TButton* Button1;
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall Attribute1Click(System::TObject* Sender);
	void __fastcall Apply1Click(System::TObject* Sender);
	void __fastcall Heading1Exit(System::TObject* Sender);
	
public:
	Abview::TAbBaseViewer* Viewer;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAbColHeadingsEditor(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAbColHeadingsEditor(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAbColHeadingsEditor(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAbColHeadingsEditor(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbColHeadingsProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TAbColHeadingsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TAbColHeadingsProperty(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TAbColHeadingsEditor* AbColHeadingsEditor;
}	/* namespace Abpecol */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABPECOL)
using namespace Abpecol;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbpecolHPP
