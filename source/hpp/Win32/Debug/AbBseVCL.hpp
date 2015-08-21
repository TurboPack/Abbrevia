// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbBseVCL.pas' rev: 30.00 (Windows)

#ifndef AbbsevclHPP
#define AbbsevclHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abbsevcl
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbBaseWinControl;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbBaseWinControl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
public:
	/* TWinControl.Create */ inline __fastcall virtual TAbBaseWinControl(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TAbBaseWinControl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TAbBaseWinControl(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abbsevcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABBSEVCL)
using namespace Abbsevcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbbsevclHPP
