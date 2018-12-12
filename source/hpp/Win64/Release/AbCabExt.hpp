// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbCabExt.pas' rev: 32.00 (Windows)

#ifndef AbcabextHPP
#define AbcabextHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbCBrows.hpp>
#include <AbArcTyp.hpp>
#include <AbBrowse.hpp>
#include <AbBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abcabext
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbCustomCabExtractor;
class DELPHICLASS TAbCabExtractor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbCustomCabExtractor : public Abcbrows::TAbCustomCabBrowser
{
	typedef Abcbrows::TAbCustomCabBrowser inherited;
	
protected:
	Abarctyp::TAbExtractOptions FExtractOptions;
	Abarctyp::TAbConfirmOverwriteEvent FOnConfirmOverwrite;
	void __fastcall DoConfirmOverwrite(System::UnicodeString &Name, bool &Confirm);
	virtual void __fastcall InitArchive(void);
	void __fastcall SetExtractOptions(Abarctyp::TAbExtractOptions Value);
	__property Abarctyp::TAbExtractOptions ExtractOptions = {read=FExtractOptions, write=SetExtractOptions, default=1};
	__property Abarctyp::TAbConfirmOverwriteEvent OnConfirmOverwrite = {read=FOnConfirmOverwrite, write=FOnConfirmOverwrite};
	
public:
	__fastcall virtual TAbCustomCabExtractor(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbCustomCabExtractor(void);
	void __fastcall ExtractAt(int Index, const System::UnicodeString NewName);
	void __fastcall ExtractFiles(const System::UnicodeString FileMask);
	void __fastcall ExtractFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask);
	void __fastcall ExtractTaggedItems(void);
};


class PASCALIMPLEMENTATION TAbCabExtractor : public TAbCustomCabExtractor
{
	typedef TAbCustomCabExtractor inherited;
	
__published:
	__property ArchiveProgressMeter;
	__property BaseDirectory = {default=0};
	__property CabSize;
	__property CurrentCab;
	__property ExtractOptions = {default=1};
	__property FolderCount;
	__property HasNext;
	__property HasPrev;
	__property ItemProgressMeter;
	__property OnArchiveProgress;
	__property OnArchiveItemProgress;
	__property OnChange;
	__property OnConfirmOverwrite;
	__property OnConfirmProcessItem;
	__property OnLoad;
	__property OnProcessItemFailure;
	__property OnRequestImage;
	__property SetID;
	__property TempDirectory = {default=0};
	__property Version = {default=0};
	__property FileName = {default=0};
public:
	/* TAbCustomCabExtractor.Create */ inline __fastcall virtual TAbCabExtractor(System::Classes::TComponent* AOwner) : TAbCustomCabExtractor(AOwner) { }
	/* TAbCustomCabExtractor.Destroy */ inline __fastcall virtual ~TAbCabExtractor(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abcabext */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCABEXT)
using namespace Abcabext;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcabextHPP
