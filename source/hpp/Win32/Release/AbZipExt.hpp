// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbZipExt.pas' rev: 33.00 (Windows)

#ifndef AbzipextHPP
#define AbzipextHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abzipext
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall AbExistingZipAssociation(void);
extern DELPHI_PACKAGE bool __fastcall AbGetZipAssociation(System::UnicodeString &App, System::UnicodeString &ID, System::UnicodeString &FileType);
extern DELPHI_PACKAGE bool __fastcall AbRegisterZipExtension(const System::UnicodeString App, System::UnicodeString ID, System::UnicodeString FileType, bool Replace);
}	/* namespace Abzipext */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABZIPEXT)
using namespace Abzipext;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbzipextHPP
