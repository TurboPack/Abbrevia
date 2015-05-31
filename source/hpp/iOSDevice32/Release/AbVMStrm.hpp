// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbVMStrm.pas' rev: 29.00 (iOS)

#ifndef AbvmstrmHPP
#define AbvmstrmHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abvmstrm
{
//-- forward type declarations -----------------------------------------------
struct TvmsPage;
class DELPHICLASS TAbVirtualMemoryStream;
//-- type declarations -------------------------------------------------------
typedef TvmsPage *PvmsPage;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TvmsPage
{
public:
	__int64 vpStmOfs;
	int vpLRU;
	bool vpDirty;
	System::StaticArray<System::Byte, 4096> vpData;
};
#pragma pack(pop)


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbVirtualMemoryStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
protected:
	TvmsPage *vmsCachePage;
	int vmsLRU;
	unsigned vmsMaxMemToUse;
	int vmsMaxPages;
	System::Generics::Collections::TList__1<PvmsPage> * vmsPageList;
	__int64 vmsPosition;
	__int64 vmsSize;
	System::UnicodeString vmsSwapFileDir;
	System::UnicodeString vmsSwapFileName;
	__int64 vmsSwapFileSize;
	System::Classes::TFileStream* vmsSwapStream;
	void __fastcall vmsSetMaxMemToUse(unsigned aNewMem);
	unsigned __fastcall vmsAlterPageList(unsigned aNewMem);
	void __fastcall vmsFindOldestPage(/* out */ int &OldestInx, /* out */ PvmsPage &OldestPage);
	int __fastcall vmsGetNextLRU(void);
	PvmsPage __fastcall vmsGetPageForOffset(__int64 aOffset);
	void __fastcall vmsSwapFileCreate(void);
	void __fastcall vmsSwapFileDestroy(void);
	void __fastcall vmsSwapFileRead(PvmsPage aPage);
	void __fastcall vmsSwapFileWrite(PvmsPage aPage);
	
public:
	__fastcall TAbVirtualMemoryStream(void);
	__fastcall virtual ~TAbVirtualMemoryStream(void);
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	virtual void __fastcall SetSize(const __int64 NewSize)/* overload */;
	__property unsigned MaxMemToUse = {read=vmsMaxMemToUse, write=vmsSetMaxMemToUse, nodefault};
	__property System::UnicodeString SwapFileDirectory = {read=vmsSwapFileDir, write=vmsSwapFileDir};
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
protected:
	inline void __fastcall  SetSize(int NewSize){ System::Classes::TStream::SetSize(NewSize); }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static constexpr System::Word AB_VMSPageSize = System::Word(0x1000);
static constexpr System::Word AB_VMSMaxPages = System::Word(0x800);
}	/* namespace Abvmstrm */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABVMSTRM)
using namespace Abvmstrm;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbvmstrmHPP
