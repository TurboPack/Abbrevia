// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbCBrows.pas' rev: 31.00 (Windows)

#ifndef AbcbrowsHPP
#define AbcbrowsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbBrowse.hpp>
#include <AbCabTyp.hpp>
#include <AbBase.hpp>
#include <AbArcTyp.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abcbrows
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbCustomCabBrowser;
class DELPHICLASS TAbCabBrowser;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbCustomCabBrowser : public Abbrowse::TAbBaseBrowser
{
	typedef Abbrowse::TAbBaseBrowser inherited;
	
public:
	Abcabtyp::TAbCabItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	System::Word FSetID;
	Abcabtyp::TAbCabArchive* __fastcall GetCabArchive(void);
	int __fastcall GetCabSize(void);
	System::Word __fastcall GetCurrentCab(void);
	System::Word __fastcall GetFolderCount(void);
	HIDESBASE virtual Abcabtyp::TAbCabItem* __fastcall GetItem(int Index);
	bool __fastcall GetHasNext(void);
	bool __fastcall GetHasPrev(void);
	System::Word __fastcall GetSetID(void);
	virtual void __fastcall InitArchive(void);
	virtual void __fastcall SetFileName(const System::UnicodeString aFileName);
	void __fastcall SetSetID(System::Word Value);
	__property int CabSize = {read=GetCabSize, nodefault};
	__property System::Word CurrentCab = {read=GetCurrentCab, nodefault};
	__property System::Word FolderCount = {read=GetFolderCount, nodefault};
	__property bool HasNext = {read=GetHasNext, nodefault};
	__property bool HasPrev = {read=GetHasPrev, nodefault};
	__property System::Word SetID = {read=GetSetID, write=SetSetID, nodefault};
	
public:
	__fastcall virtual TAbCustomCabBrowser(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbCustomCabBrowser(void);
	__property Abcabtyp::TAbCabArchive* CabArchive = {read=GetCabArchive};
	__property Abcabtyp::TAbCabItem* Items[int Index] = {read=GetItem/*, default*/};
};


class PASCALIMPLEMENTATION TAbCabBrowser : public TAbCustomCabBrowser
{
	typedef TAbCustomCabBrowser inherited;
	
__published:
	__property ArchiveProgressMeter;
	__property BaseDirectory = {default=0};
	__property CabSize;
	__property CurrentCab;
	__property FolderCount;
	__property HasNext;
	__property HasPrev;
	__property ItemProgressMeter;
	__property LogFile = {default=0};
	__property Logging = {default=0};
	__property OnArchiveProgress;
	__property OnArchiveItemProgress;
	__property OnChange;
	__property OnLoad;
	__property SetID;
	__property TempDirectory = {default=0};
	__property Version = {default=0};
	__property FileName = {default=0};
public:
	/* TAbCustomCabBrowser.Create */ inline __fastcall virtual TAbCabBrowser(System::Classes::TComponent* AOwner) : TAbCustomCabBrowser(AOwner) { }
	/* TAbCustomCabBrowser.Destroy */ inline __fastcall virtual ~TAbCabBrowser(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abcbrows */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCBROWS)
using namespace Abcbrows;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcbrowsHPP
