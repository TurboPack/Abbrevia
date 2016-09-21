// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbZBrows.pas' rev: 31.00 (MacOS)

#ifndef AbzbrowsHPP
#define AbzbrowsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbArcTyp.hpp>
#include <AbBrowse.hpp>
#include <AbSpanSt.hpp>
#include <AbZipTyp.hpp>
#include <AbBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abzbrows
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbCustomZipBrowser;
class DELPHICLASS TAbZipBrowser;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbCustomZipBrowser : public Abbrowse::TAbBaseBrowser
{
	typedef Abbrowse::TAbBaseBrowser inherited;
	
public:
	Abziptyp::TAbZipItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool __fastcall GetTarAutoHandle(void);
	void __fastcall SetTarAutoHandle(const bool Value);
	
protected:
	System::UnicodeString FPassword;
	Abarctyp::TAbRequestDiskEvent FOnRequestLastDisk;
	Abarctyp::TAbRequestNthDiskEvent FOnRequestNthDisk;
	Abarctyp::TAbRequestDiskEvent FOnRequestBlankDisk;
	bool FTarAutoHandle;
	HIDESBASE virtual Abziptyp::TAbZipItem* __fastcall GetItem(int Index);
	System::Classes::TStream* __fastcall GetStream(void);
	System::UnicodeString __fastcall GetZipfileComment(void);
	virtual void __fastcall InitArchive(void);
	virtual void __fastcall SetFileName(const System::UnicodeString aFileName);
	void __fastcall SetStream(System::Classes::TStream* aValue);
	void __fastcall SetOnRequestLastDisk(Abarctyp::TAbRequestDiskEvent Value);
	void __fastcall SetOnRequestNthDisk(Abarctyp::TAbRequestNthDiskEvent Value);
	void __fastcall SetOnRequestBlankDisk(Abarctyp::TAbRequestDiskEvent Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	virtual void __fastcall SetZipfileComment(const System::UnicodeString Value);
	__property System::UnicodeString Password = {read=FPassword, write=SetPassword};
	__property Abarctyp::TAbRequestDiskEvent OnRequestLastDisk = {read=FOnRequestLastDisk, write=SetOnRequestLastDisk};
	__property Abarctyp::TAbRequestNthDiskEvent OnRequestNthDisk = {read=FOnRequestNthDisk, write=SetOnRequestNthDisk};
	__property Abarctyp::TAbRequestDiskEvent OnRequestBlankDisk = {read=FOnRequestBlankDisk, write=SetOnRequestBlankDisk};
	
public:
	__fastcall virtual TAbCustomZipBrowser(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbCustomZipBrowser(void);
	__property Abziptyp::TAbZipItem* Items[int Index] = {read=GetItem/*, default*/};
	__property System::Classes::TStream* Stream = {read=GetStream, write=SetStream};
	__property Abarctyp::TAbArchive* ZipArchive = {read=FArchive};
	__property System::UnicodeString ZipfileComment = {read=GetZipfileComment, write=SetZipfileComment};
	__property bool TarAutoHandle = {read=GetTarAutoHandle, write=SetTarAutoHandle, nodefault};
};


class PASCALIMPLEMENTATION TAbZipBrowser : public TAbCustomZipBrowser
{
	typedef TAbCustomZipBrowser inherited;
	
__published:
	__property ArchiveProgressMeter;
	__property ItemProgressMeter;
	__property BaseDirectory = {default=0};
	__property LogFile = {default=0};
	__property Logging = {default=0};
	__property OnArchiveProgress;
	__property OnArchiveItemProgress;
	__property OnChange;
	__property OnConfirmProcessItem;
	__property OnLoad;
	__property OnProcessItemFailure;
	__property OnRequestLastDisk;
	__property OnRequestNthDisk;
	__property Version = {default=0};
	__property TarAutoHandle;
	__property FileName = {default=0};
public:
	/* TAbCustomZipBrowser.Create */ inline __fastcall virtual TAbZipBrowser(System::Classes::TComponent* AOwner) : TAbCustomZipBrowser(AOwner) { }
	/* TAbCustomZipBrowser.Destroy */ inline __fastcall virtual ~TAbZipBrowser(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abzbrows */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABZBROWS)
using namespace Abzbrows;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbzbrowsHPP
