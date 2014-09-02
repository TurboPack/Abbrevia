// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbMeter.pas' rev: 27.00 (Windows)

#ifndef AbmeterHPP
#define AbmeterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <AbBrowse.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Abmeter
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAbMeterOrientation : unsigned char { moHorizontal, moVertical };

class DELPHICLASS TAbCustomMeter;
class PASCALIMPLEMENTATION TAbCustomMeter : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
protected:
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FCtl3D;
	TAbMeterOrientation FOrientation;
	int FPercent;
	System::Byte FTickMarks;
	System::Uitypes::TColor FUsedColor;
	System::Uitypes::TColor FUnusedColor;
	System::UnicodeString __fastcall GetVersion(void);
	virtual void __fastcall Paint(void);
	void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	void __fastcall SetCtl3D(const bool Value);
	void __fastcall SetOrientation(const TAbMeterOrientation O);
	void __fastcall SetTickMarks(const System::Byte Value);
	void __fastcall SetUnusedColor(const System::Uitypes::TColor C);
	void __fastcall SetUsedColor(const System::Uitypes::TColor C);
	void __fastcall SetVersion(System::UnicodeString Value);
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	
public:
	__fastcall virtual TAbCustomMeter(System::Classes::TComponent* AOwner);
	void __fastcall DoProgress(System::Byte Progress);
	void __fastcall Reset(void);
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property bool Ctl3D = {read=FCtl3D, write=SetCtl3D, default=1};
	__property TAbMeterOrientation Orientation = {read=FOrientation, write=SetOrientation, nodefault};
	__property System::Byte TickMarks = {read=FTickMarks, write=SetTickMarks, default=10};
	__property System::Uitypes::TColor UnusedColor = {read=FUnusedColor, write=SetUnusedColor, nodefault};
	__property System::Uitypes::TColor UsedColor = {read=FUsedColor, write=SetUsedColor, nodefault};
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TAbCustomMeter(void) { }
	
private:
	void *__IAbProgressMeter;	// Abbrowse::IAbProgressMeter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4B766704-FD20-40BF-BA40-2EC2DD77B178}
	operator Abbrowse::_di_IAbProgressMeter()
	{
		Abbrowse::_di_IAbProgressMeter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Abbrowse::IAbProgressMeter*(void) { return (Abbrowse::IAbProgressMeter*)&__IAbProgressMeter; }
	#endif
	
};


class DELPHICLASS TAbMeter;
class PASCALIMPLEMENTATION TAbMeter : public TAbCustomMeter
{
	typedef TAbCustomMeter inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property Align = {default=0};
	__property BorderStyle = {default=1};
	__property Ctl3D = {default=1};
	__property Font;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property Orientation;
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property TickMarks = {default=10};
	__property UnusedColor;
	__property UsedColor;
	__property Version = {default=0};
	__property Visible = {default=1};
public:
	/* TAbCustomMeter.Create */ inline __fastcall virtual TAbMeter(System::Classes::TComponent* AOwner) : TAbCustomMeter(AOwner) { }
	
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TAbMeter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abmeter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABMETER)
using namespace Abmeter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbmeterHPP
