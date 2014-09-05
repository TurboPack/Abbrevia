// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbCabTyp.pas' rev: 28.00 (Windows)

#ifndef AbcabtypHPP
#define AbcabtypHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <AbFciFdi.hpp>	// Pascal unit
#include <AbArcTyp.hpp>	// Pascal unit
#include <AbUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Abcabtyp
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAbCabItem;
class PASCALIMPLEMENTATION TAbCabItem : public Abarctyp::TAbArchiveItem
{
	typedef Abarctyp::TAbArchiveItem inherited;
	
protected:
	bool FPartialFile;
	System::AnsiString FRawFileName;
	
public:
	__property bool PartialFile = {read=FPartialFile, write=FPartialFile, nodefault};
	__property System::AnsiString RawFileName = {read=FRawFileName, write=FRawFileName};
public:
	/* TAbArchiveItem.Create */ inline __fastcall TAbCabItem(void) : Abarctyp::TAbArchiveItem() { }
	/* TAbArchiveItem.Destroy */ inline __fastcall virtual ~TAbCabItem(void) { }
	
};


enum DECLSPEC_DENUM TAbCabCompressionType : unsigned char { ctNone, ctMSZIP, ctLZX };

enum DECLSPEC_DENUM TAbCabinetMode : unsigned char { cmRead, cmWrite };

enum DECLSPEC_DENUM TAbCabStatus : unsigned char { csFile, csFolder, csCabinet };

class DELPHICLASS TAbCabArchive;
class PASCALIMPLEMENTATION TAbCabArchive : public Abarctyp::TAbArchive
{
	typedef Abarctyp::TAbArchive inherited;
	
public:
	TAbCabItem* operator[](int Index) { return Items[Index]; }
	
protected:
	System::AnsiString FCabName;
	System::AnsiString FCabPath;
	Abfcifdi::FCICabInfo FFCICabInfo;
	void *FFCIContext;
	void *FFDIContext;
	Abfcifdi::FDICabInfo FFDICabInfo;
	Abfcifdi::CabErrorRecord FErrors;
	TAbCabItem* FItemInProgress;
	System::Classes::TStream* FItemStream;
	System::UnicodeString FIIPName;
	unsigned FItemProgress;
	System::UnicodeString FNextCabinet;
	System::UnicodeString FNextDisk;
	int FTempFileID;
	System::Word FCurrentCab;
	int FCabSize;
	TAbCabCompressionType FCompressionType;
	System::Word FFileCount;
	unsigned FFolderThreshold;
	System::Word FFolderCount;
	bool FHasPrev;
	bool FHasNext;
	System::Word FSetID;
	void __fastcall CloseCabFile(void);
	void __fastcall CreateCabFile(void);
	virtual Abarctyp::TAbArchiveItem* __fastcall CreateItem(const System::UnicodeString FileSpec);
	void __fastcall DoCabItemProgress(unsigned BytesCompressed, bool &Abort);
	void __fastcall DoGetNextCabinet(int CabIndex, System::UnicodeString &CabName, bool &Abort);
	virtual void __fastcall ExtractItemAt(int Index, const System::UnicodeString NewName);
	virtual void __fastcall ExtractItemToStreamAt(int Index, System::Classes::TStream* OutStream);
	TAbCabItem* __fastcall GetItem(int ItemIndex);
	virtual void __fastcall LoadArchive(void);
	void __fastcall OpenCabFile(void);
	void __fastcall PutItem(int Index, TAbCabItem* Value);
	virtual void __fastcall SaveArchive(void);
	void __fastcall SetFolderThreshold(unsigned Value);
	void __fastcall SetSetID(System::Word Value);
	virtual void __fastcall SetSpanningThreshold(__int64 Value);
	virtual void __fastcall TestItemAt(int Index);
	
public:
	__fastcall virtual TAbCabArchive(const System::UnicodeString FileName, System::Word Mode);
	__fastcall virtual TAbCabArchive(System::Classes::TStream* aStream, const System::UnicodeString aArchiveName);
	__fastcall virtual ~TAbCabArchive(void);
	virtual void __fastcall Add(Abarctyp::TAbArchiveItem* aItem);
	void __fastcall NewCabinet(void);
	void __fastcall NewFolder(void);
	__property System::Word CurrentCab = {read=FCurrentCab, nodefault};
	__property int CabSize = {read=FCabSize, nodefault};
	__property TAbCabCompressionType CompressionType = {read=FCompressionType, write=FCompressionType, nodefault};
	__property unsigned FolderThreshold = {read=FFolderThreshold, write=SetFolderThreshold, nodefault};
	__property System::Word FolderCount = {read=FFolderCount, nodefault};
	__property bool HasPrev = {read=FHasPrev, nodefault};
	__property bool HasNext = {read=FHasNext, nodefault};
	__property TAbCabItem* Items[int Index] = {read=GetItem, write=PutItem/*, default*/};
	__property unsigned ItemProgress = {read=FItemProgress, write=FItemProgress, nodefault};
	__property System::Word SetID = {read=FSetID, write=SetSetID, nodefault};
protected:
	/* TAbArchive.CreateInit */ inline __fastcall TAbCabArchive(void) : Abarctyp::TAbArchive() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 faExtractAndExecute = System::Int8(0x40);
static const System::Byte faUTF8Name = System::Byte(0x80);
static const System::Int8 AbDefCabSpanningThreshold = System::Int8(0x0);
static const System::Int8 AbDefFolderThreshold = System::Int8(0x0);
static const TAbCabCompressionType AbDefCompressionType = (TAbCabCompressionType)(1);
static const System::Int8 AbDefReserveHeaderSize = System::Int8(0x0);
static const System::Int8 AbDefReserveFolderSize = System::Int8(0x0);
static const System::Int8 AbDefReserveDataSize = System::Int8(0x0);
static const System::Int8 AbDefLZXWindowSize = System::Int8(0x12);
extern DELPHI_PACKAGE System::StaticArray<System::Word, 3> CompressionTypeMap;
extern DELPHI_PACKAGE Abutils::TAbArchiveType __fastcall VerifyCab(const System::UnicodeString Fn)/* overload */;
extern DELPHI_PACKAGE Abutils::TAbArchiveType __fastcall VerifyCab(System::Classes::TStream* Strm)/* overload */;
}	/* namespace Abcabtyp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCABTYP)
using namespace Abcabtyp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcabtypHPP
