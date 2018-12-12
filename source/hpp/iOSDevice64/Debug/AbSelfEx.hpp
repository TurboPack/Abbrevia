// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbSelfEx.pas' rev: 32.00 (iOS)

#ifndef AbselfexHPP
#define AbselfexHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abselfex
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbMakeSelfExe;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TAbGetFileEvent)(System::TObject* Sender, System::UnicodeString &aFilename, bool &Abort);

class PASCALIMPLEMENTATION TAbMakeSelfExe : public Abbase::TAbBaseComponent
{
	typedef Abbase::TAbBaseComponent inherited;
	
protected:
	System::UnicodeString FStubExe;
	System::UnicodeString FZipFile;
	System::UnicodeString FSelfExe;
	System::Classes::TFileStream* FStubStream;
	System::Classes::TFileStream* FZipStream;
	System::Classes::TFileStream* FSelfStream;
	TAbGetFileEvent FOnGetStubExe;
	TAbGetFileEvent FOnGetZipFile;
	void __fastcall DoGetStubExe(bool &Abort);
	void __fastcall DoGetZipFile(bool &Abort);
	
public:
	bool __fastcall Execute(void);
	
__published:
	__property System::UnicodeString SelfExe = {read=FSelfExe, write=FSelfExe};
	__property System::UnicodeString StubExe = {read=FStubExe, write=FStubExe};
	__property System::UnicodeString ZipFile = {read=FZipFile, write=FZipFile};
	__property TAbGetFileEvent OnGetStubExe = {read=FOnGetStubExe, write=FOnGetStubExe};
	__property TAbGetFileEvent OnGetZipFile = {read=FOnGetZipFile, write=FOnGetZipFile};
	__property Version = {default=0};
public:
	/* TComponent.Create */ inline __fastcall virtual TAbMakeSelfExe(System::Classes::TComponent* AOwner) : Abbase::TAbBaseComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TAbMakeSelfExe(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abselfex */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABSELFEX)
using namespace Abselfex;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbselfexHPP
