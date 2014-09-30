// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbBytes.pas' rev: 28.00 (iOS)

#ifndef AbbytesHPP
#define AbbytesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Abbytes
{
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
struct DECLSPEC_DRECORD TAbBytes
{
public:
	static System::UnicodeString __fastcall AsString(void * ASource)/* overload */;
	static System::UnicodeString __fastcall AsString(void * ASource, int ALen)/* overload */;
	static bool __fastcall Equals(const System::UnicodeString ALeft, void * ARight)/* overload */;
	static bool __fastcall Equals(const void * ALeft, System::UnicodeString ARight)/* overload */;
	static void __fastcall FromString(const System::UnicodeString ASource, void * ADest);
	static System::PByte __fastcall StrLCopy(System::PByte ADest, const System::UnicodeString ASource, unsigned AMaxLen);
	static unsigned __fastcall StrLen(void * ABuffer);
	static System::PByte __fastcall StrPCopy(void * ADest, const System::UnicodeString ASource);
	static System::PByte __fastcall StrPLCopy(void * ADest, const System::UnicodeString ASource, unsigned AMaxLen);
};
#pragma pack(pop)


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abbytes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABBYTES)
using namespace Abbytes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbbytesHPP
