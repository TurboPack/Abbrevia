// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbUnzOutStm.pas' rev: 31.00 (iOS)

#ifndef AbunzoutstmHPP
#define AbunzoutstmHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <AbArcTyp.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abunzoutstm
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbUnzipSubsetStream;
class DELPHICLASS TAbUnzipOutputStream;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbUnzipSubsetStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	System::Classes::TStream* FStream;
	__int64 FStartPos;
	__int64 FCurPos;
	__int64 FEndPos;
	
public:
	__fastcall TAbUnzipSubsetStream(System::Classes::TStream* aStream, __int64 aStreamSize);
	virtual long __fastcall Read(void *Buffer, long Count)/* overload */;
	virtual long __fastcall Write(const void *Buffer, long Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAbUnzipSubsetStream(void) { }
	
	/* Hoisted overloads: */
	
public:
	inline long __fastcall  Read(System::TArray__1<System::Byte> Buffer, long Offset, long Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline long __fastcall  Read(System::TArray__1<System::Byte> &Buffer, long Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline long __fastcall  Write(const System::TArray__1<System::Byte> Buffer, long Offset, long Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline long __fastcall  Write(const System::TArray__1<System::Byte> Buffer, long Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline long __fastcall  Seek(long Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


class PASCALIMPLEMENTATION TAbUnzipOutputStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	__int64 FBytesWritten;
	int FCRC32;
	System::Byte FCurrentProgress;
	System::Classes::TStream* FStream;
	__int64 FUncompressedSize;
	Abarctyp::TAbProgressEvent FOnProgress;
	int __fastcall GetCRC32(void);
	
public:
	__fastcall TAbUnzipOutputStream(System::Classes::TStream* aStream);
	virtual long __fastcall Read(void *Buffer, long Count)/* overload */;
	virtual long __fastcall Write(const void *Buffer, long Count)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	__property int CRC32 = {read=GetCRC32, nodefault};
	__property System::Classes::TStream* Stream = {read=FStream, write=FStream};
	__property __int64 UncompressedSize = {read=FUncompressedSize, write=FUncompressedSize};
	__property Abarctyp::TAbProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAbUnzipOutputStream(void) { }
	
	/* Hoisted overloads: */
	
public:
	inline long __fastcall  Read(System::TArray__1<System::Byte> Buffer, long Offset, long Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline long __fastcall  Read(System::TArray__1<System::Byte> &Buffer, long Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline long __fastcall  Write(const System::TArray__1<System::Byte> Buffer, long Offset, long Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline long __fastcall  Write(const System::TArray__1<System::Byte> Buffer, long Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline long __fastcall  Seek(long Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abunzoutstm */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABUNZOUTSTM)
using namespace Abunzoutstm;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbunzoutstmHPP
