// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbGzTyp.pas' rev: 32.00 (iOSSIM)

#ifndef AbgztypHPP
#define AbgztypHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <AbUtils.hpp>
#include <AbArcTyp.hpp>
#include <AbTarTyp.hpp>
#include <AbVMStrm.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abgztyp
{
//-- forward type declarations -----------------------------------------------
struct TAbGzHeader;
struct TAbGzTailRec;
class DELPHICLASS TAbGzipExtraField;
class DELPHICLASS TAbGzipItem;
class DELPHICLASS TAbGzipStreamHelper;
class DELPHICLASS TAbGzipArchive;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAbGzFileSystem : unsigned char { osFat, osAmiga, osVMS, osUnix, osVM_CMS, osAtariTOS, osHPFS, osMacintosh, osZSystem, osCP_M, osTOPS20, osNTFS, osQDOS, osAcornRISCOS, osVFAT, osMVS, osBeOS, osTandem, osTHEOS, osUnknown, osUndefined };

typedef TAbGzHeader *PAbGzHeader;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TAbGzHeader
{
public:
	System::Byte ID1;
	System::Byte ID2;
	System::Byte CompMethod;
	System::Byte Flags;
	int ModTime;
	System::Byte XtraFlags;
	System::Byte OS;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TAbGzTailRec
{
public:
	int CRC32;
	unsigned ISize;
};
#pragma pack(pop)


typedef System::StaticArray<System::Byte, 2> TAbGzExtraFieldSubID;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbGzipExtraField : public Abarctyp::TAbExtraField
{
	typedef Abarctyp::TAbExtraField inherited;
	
private:
	TAbGzHeader *FGZHeader;
	HIDESBASE TAbGzExtraFieldSubID __fastcall GetID(int aIndex);
	
protected:
	virtual void __fastcall Changed(void);
	
public:
	__fastcall TAbGzipExtraField(PAbGzHeader aGZHeader);
	HIDESBASE void __fastcall Delete(TAbGzExtraFieldSubID aID);
	HIDESBASE bool __fastcall Get(TAbGzExtraFieldSubID aID, /* out */ void * &aData, /* out */ System::Word &aDataSize);
	HIDESBASE void __fastcall Put(TAbGzExtraFieldSubID aID, const void *aData, System::Word aDataSize);
	__property TAbGzExtraFieldSubID IDs[int aIndex] = {read=GetID};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAbGzipExtraField(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbGzipItem : public Abarctyp::TAbArchiveItem
{
	typedef Abarctyp::TAbArchiveItem inherited;
	
private:
	System::TArray__1<System::Byte> FRawFileName;
	
protected:
	TAbGzHeader FGZHeader;
	TAbGzipExtraField* FExtraField;
	System::UnicodeString FFileComment;
	TAbGzFileSystem __fastcall GetFileSystem(void);
	bool __fastcall GetHasExtraField(void);
	bool __fastcall GetHasFileComment(void);
	bool __fastcall GetHasFileName(void);
	bool __fastcall GetIsText(void);
	void __fastcall SetFileComment(const System::UnicodeString Value);
	void __fastcall SetFileSystem(const TAbGzFileSystem Value);
	void __fastcall SetIsText(const bool Value);
	virtual unsigned __fastcall GetExternalFileAttributes(void);
	virtual bool __fastcall GetIsEncrypted(void);
	virtual System::Word __fastcall GetLastModFileDate(void);
	virtual System::Word __fastcall GetLastModFileTime(void);
	virtual System::TDateTime __fastcall GetLastModTimeAsDateTime(void);
	virtual void __fastcall SetExternalFileAttributes(unsigned Value);
	virtual void __fastcall SetFileName(const System::UnicodeString Value);
	virtual void __fastcall SetIsEncrypted(bool Value);
	virtual void __fastcall SetLastModFileDate(const System::Word Value);
	virtual void __fastcall SetLastModFileTime(const System::Word Value);
	virtual void __fastcall SetLastModTimeAsDateTime(const System::TDateTime Value);
	void __fastcall SaveGzHeaderToStream(System::Classes::TStream* AStream);
	void __fastcall LoadGzHeaderFromStream(System::Classes::TStream* AStream);
	
public:
	__property System::Byte CompressionMethod = {read=FGZHeader.CompMethod, nodefault};
	__property System::Byte ExtraFlags = {read=FGZHeader.XtraFlags, write=FGZHeader.XtraFlags, nodefault};
	__property System::Byte Flags = {read=FGZHeader.Flags, nodefault};
	__property System::UnicodeString FileComment = {read=FFileComment, write=SetFileComment};
	__property TAbGzFileSystem FileSystem = {read=GetFileSystem, write=SetFileSystem, nodefault};
	__property TAbGzipExtraField* ExtraField = {read=FExtraField};
	__property bool IsEncrypted = {read=GetIsEncrypted, nodefault};
	__property bool HasExtraField = {read=GetHasExtraField, nodefault};
	__property bool HasFileName = {read=GetHasFileName, nodefault};
	__property bool HasFileComment = {read=GetHasFileComment, nodefault};
	__property bool IsText = {read=GetIsText, write=SetIsText, nodefault};
	__property TAbGzHeader GZHeader = {read=FGZHeader};
	__fastcall TAbGzipItem(void);
	__fastcall virtual ~TAbGzipItem(void);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbGzipStreamHelper : public Abarctyp::TAbArchiveStreamHelper
{
	typedef Abarctyp::TAbArchiveStreamHelper inherited;
	
private:
	int __fastcall GetGzCRC(void);
	int __fastcall GetFileSize(void);
	
protected:
	TAbGzipItem* FItem;
	TAbGzTailRec FTail;
	
public:
	__fastcall TAbGzipStreamHelper(System::Classes::TStream* AStream);
	__fastcall virtual ~TAbGzipStreamHelper(void);
	virtual void __fastcall ExtractItemData(System::Classes::TStream* AStream);
	virtual bool __fastcall FindFirstItem(void);
	virtual bool __fastcall FindNextItem(void);
	virtual bool __fastcall SeekItem(int Index);
	void __fastcall SeekToItemData(void);
	virtual void __fastcall WriteArchiveHeader(void);
	virtual void __fastcall WriteArchiveItem(System::Classes::TStream* AStream);
	virtual void __fastcall WriteArchiveTail(void);
	virtual int __fastcall GetItemCount(void);
	virtual void __fastcall ReadHeader(void);
	virtual void __fastcall ReadTail(void);
	__property int CRC = {read=GetGzCRC, nodefault};
	__property int FileSize = {read=GetFileSize, nodefault};
	__property int TailCRC = {read=FTail.CRC32, nodefault};
	__property unsigned TailSize = {read=FTail.ISize, nodefault};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TAbGzipArchiveState : unsigned char { gsGzip, gsTar };

class PASCALIMPLEMENTATION TAbGzipArchive : public Abtartyp::TAbTarArchive
{
	typedef Abtartyp::TAbTarArchive inherited;
	
public:
	TAbGzipItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TStream* FGZStream;
	Abarctyp::TAbArchiveList* FGZItem;
	Abvmstrm::TAbVirtualMemoryStream* FTarStream;
	Abarctyp::TAbArchiveList* FTarList;
	bool FTarAutoHandle;
	TAbGzipArchiveState FState;
	bool FIsGzippedTar;
	void __fastcall SetTarAutoHandle(const bool Value);
	bool __fastcall GetIsGzippedTar(void);
	void __fastcall SwapToGzip(void);
	void __fastcall SwapToTar(void);
	
protected:
	virtual Abarctyp::TAbArchiveItem* __fastcall CreateItem(const System::UnicodeString FileSpec);
	virtual void __fastcall ExtractItemAt(int Index, const System::UnicodeString UseName);
	virtual void __fastcall ExtractItemToStreamAt(int Index, System::Classes::TStream* aStream);
	virtual void __fastcall LoadArchive(void);
	virtual void __fastcall SaveArchive(void);
	virtual void __fastcall TestItemAt(int Index);
	virtual System::UnicodeString __fastcall FixName(const System::UnicodeString Value);
	virtual bool __fastcall GetSupportsEmptyFolders(void);
	HIDESBASE TAbGzipItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall PutItem(int Index, TAbGzipItem* const Value);
	
public:
	__fastcall virtual TAbGzipArchive(System::Classes::TStream* aStream, const System::UnicodeString aArchiveName);
	__fastcall virtual ~TAbGzipArchive(void);
	virtual void __fastcall DoSpanningMediaRequest(System::TObject* Sender, int ImageNumber, System::UnicodeString &ImageName, bool &Abort);
	__property bool TarAutoHandle = {read=FTarAutoHandle, write=SetTarAutoHandle, nodefault};
	__property bool IsGzippedTar = {read=GetIsGzippedTar, write=FIsGzippedTar, nodefault};
	__property TAbGzipItem* Items[int Index] = {read=GetItem, write=PutItem/*, default*/};
protected:
	/* TAbArchive.CreateInit */ inline __fastcall TAbGzipArchive(void) : Abtartyp::TAbTarArchive() { }
	
public:
	/* TAbArchive.Create */ inline __fastcall virtual TAbGzipArchive(const System::UnicodeString FileName, System::Word Mode) : Abtartyp::TAbTarArchive(FileName, Mode) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall GZOsToStr(System::Byte OS);
extern DELPHI_PACKAGE Abutils::TAbArchiveType __fastcall VerifyGZip(System::Classes::TStream* Strm);
}	/* namespace Abgztyp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABGZTYP)
using namespace Abgztyp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbgztypHPP
