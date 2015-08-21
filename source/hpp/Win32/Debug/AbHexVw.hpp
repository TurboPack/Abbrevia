// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbHexVw.pas' rev: 30.00 (Windows)

#ifndef AbhexvwHPP
#define AbhexvwHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abhexvw
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THexView;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THexView : public Vcl::Stdctrls::TMemo
{
	typedef Vcl::Stdctrls::TMemo inherited;
	
protected:
	int FBlockSize;
	
public:
	void __fastcall SetStream(System::Classes::TStream* Strm);
	__fastcall virtual THexView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~THexView(void);
	__property System::Classes::TStream* Stream = {write=SetStream};
	__property int BlockSize = {read=FBlockSize, write=FBlockSize, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall THexView(HWND ParentWindow) : Vcl::Stdctrls::TMemo(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abhexvw */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABHEXVW)
using namespace Abhexvw;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbhexvwHPP
