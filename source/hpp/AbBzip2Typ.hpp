// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbBzip2Typ.pas' rev: 27.00 (Windows)

#ifndef Abbzip2typHPP
#define Abbzip2typHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <AbArcTyp.hpp>	// Pascal unit
#include <AbTarTyp.hpp>	// Pascal unit
#include <AbUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Abbzip2typ
{
//-- type declarations -------------------------------------------------------
struct TAbBzip2Header;
typedef TAbBzip2Header *PAbBzip2Header;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TAbBzip2Header
{
public:
	System::StaticArray<char, 3> FileHeader;
	char BlockSize;
	System::StaticArray<char, 6> BlockHeader;
};
#pragma pack(pop)


class DELPHICLASS TAbBzip2Item;
class PASCALIMPLEMENTATION TAbBzip2Item : public Abarctyp::TAbArchiveItem
{
	typedef Abarctyp::TAbArchiveItem inherited;
	
public:
	/* TAbArchiveItem.Create */ inline __fastcall TAbBzip2Item(void) : Abarctyp::TAbArchiveItem() { }
	/* TAbArchiveItem.Destroy */ inline __fastcall virtual ~TAbBzip2Item(void) { }
	
};


enum DECLSPEC_DENUM TAbBzip2ArchiveState : unsigned char { gsBzip2, gsTar };

class DELPHICLASS TAbBzip2Archive;
class PASCALIMPLEMENTATION TAbBzip2Archive : public Abtartyp::TAbTarArchive
{
	typedef Abtartyp::TAbTarArchive inherited;
	
private:
	System::Classes::TStream* FBzip2Stream;
	Abarctyp::TAbArchiveList* FBzip2Item;
	System::Classes::TStream* FTarStream;
	Abarctyp::TAbArchiveList* FTarList;
	bool FTarAutoHandle;
	TAbBzip2ArchiveState FState;
	bool FIsBzippedTar;
	void __fastcall DecompressToStream(System::Classes::TStream* aStream);
	void __fastcall SetTarAutoHandle(const bool Value);
	void __fastcall SwapToBzip2(void);
	void __fastcall SwapToTar(void);
	
protected:
	virtual Abarctyp::TAbArchiveItem* __fastcall CreateItem(const System::UnicodeString FileSpec);
	virtual void __fastcall ExtractItemAt(int Index, const System::UnicodeString NewName);
	virtual void __fastcall ExtractItemToStreamAt(int Index, System::Classes::TStream* aStream);
	virtual void __fastcall LoadArchive(void);
	virtual void __fastcall SaveArchive(void);
	virtual void __fastcall TestItemAt(int Index);
	virtual bool __fastcall GetSupportsEmptyFolders(void);
	
public:
	__fastcall virtual TAbBzip2Archive(System::Classes::TStream* aStream, const System::UnicodeString aArchiveName);
	__fastcall virtual ~TAbBzip2Archive(void);
	virtual void __fastcall DoSpanningMediaRequest(System::TObject* Sender, int ImageNumber, System::UnicodeString &ImageName, bool &Abort);
	__property bool TarAutoHandle = {read=FTarAutoHandle, write=SetTarAutoHandle, nodefault};
	__property bool IsBzippedTar = {read=FIsBzippedTar, write=FIsBzippedTar, nodefault};
protected:
	/* TAbArchive.CreateInit */ inline __fastcall TAbBzip2Archive(void) : Abtartyp::TAbTarArchive() { }
	
public:
	/* TAbArchive.Create */ inline __fastcall virtual TAbBzip2Archive(const System::UnicodeString FileName, System::Word Mode) : Abtartyp::TAbTarArchive(FileName, Mode) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define AB_BZIP2_FILE_HEADER L"BZh"
#define AB_BZIP2_BLOCK_SIZE (System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)>() << '\x31' << '\x32' << '\x33' << '\x34' << '\x35' << '\x36' << '\x37' << '\x38' << '\x39' )
#define AB_BZIP2_BLOCK_HEADER L"1AY&SY"
#define AB_BZIP2_FILE_TAIL L"\u0017r$S\u2026\t\u0000"
extern DELPHI_PACKAGE Abutils::TAbArchiveType __fastcall VerifyBzip2(System::Classes::TStream* Strm);
}	/* namespace Abbzip2typ */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABBZIP2TYP)
using namespace Abbzip2typ;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Abbzip2typHPP
