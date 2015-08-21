// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbCabKit.pas' rev: 30.00 (Windows)

#ifndef AbcabkitHPP
#define AbcabkitHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <AbArcTyp.hpp>
#include <AbCabMak.hpp>
#include <AbCBrows.hpp>
#include <AbBrowse.hpp>
#include <AbCabTyp.hpp>
#include <AbBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abcabkit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbCustomCabKit;
class DELPHICLASS TAbCabKit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbCustomCabKit : public Abcabmak::TAbCustomMakeCab
{
	typedef Abcabmak::TAbCustomMakeCab inherited;
	
protected:
	Abarctyp::TAbExtractOptions FExtractOptions;
	Abarctyp::TAbConfirmOverwriteEvent FOnConfirmOverwrite;
	void __fastcall DoConfirmOverwrite(System::UnicodeString &Name, bool &Confirm);
	virtual void __fastcall InitArchive(void);
	void __fastcall SetExtractOptions(Abarctyp::TAbExtractOptions Value);
	virtual void __fastcall SetFileName(const System::UnicodeString aFileName);
	__property Abarctyp::TAbExtractOptions ExtractOptions = {read=FExtractOptions, write=SetExtractOptions, default=1};
	__property Abarctyp::TAbConfirmOverwriteEvent OnConfirmOverwrite = {read=FOnConfirmOverwrite, write=FOnConfirmOverwrite};
	
public:
	__fastcall virtual TAbCustomCabKit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAbCustomCabKit(void);
	void __fastcall ExtractAt(int Index, const System::UnicodeString NewName);
	void __fastcall ExtractFiles(const System::UnicodeString FileMask);
	void __fastcall ExtractFilesEx(const System::UnicodeString FileMask, const System::UnicodeString ExclusionMask);
	void __fastcall ExtractTaggedItems(void);
};


class PASCALIMPLEMENTATION TAbCabKit : public TAbCustomCabKit
{
	typedef TAbCustomCabKit inherited;
	
__published:
	__property ArchiveProgressMeter;
	__property BaseDirectory = {default=0};
	__property CabSize;
	__property CompressionType;
	__property CurrentCab;
	__property ExtractOptions = {default=1};
	__property FolderCount;
	__property FolderThreshold;
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
	__property OnSave;
	__property SetID;
	__property SpanningThreshold = {default=0};
	__property TempDirectory = {default=0};
	__property Version = {default=0};
	__property FileName = {default=0};
public:
	/* TAbCustomCabKit.Create */ inline __fastcall virtual TAbCabKit(System::Classes::TComponent* AOwner) : TAbCustomCabKit(AOwner) { }
	/* TAbCustomCabKit.Destroy */ inline __fastcall virtual ~TAbCabKit(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abcabkit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCABKIT)
using namespace Abcabkit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcabkitHPP
