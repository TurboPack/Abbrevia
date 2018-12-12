// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbSWStm.pas' rev: 32.00 (Linux)

#ifndef AbswstmHPP
#define AbswstmHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abswstm
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TabSlidingWindowStream;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TabSlidingWindowStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
protected:
	System::StaticArray<System::Sysutils::PByteArray, 5> bsChunks;
	int bsBufferStart;
	int bsLastPos;
	int bsCurChunk;
	int bsPosInChunk;
	int bsPosInBuffer;
	int bsSize;
	bool bsDirty;
	System::Classes::TStream* bsStream;
	void __fastcall bsWriteChunk(int aIndex);
	void __fastcall bsSlide(void);
	
public:
	__fastcall TabSlidingWindowStream(System::Classes::TStream* aStream);
	__fastcall virtual ~TabSlidingWindowStream(void);
	void __fastcall Flush(void);
	virtual long __fastcall Read(void *Buffer, long Count)/* overload */;
	virtual long __fastcall Seek(long Offset, System::Word Origin)/* overload */;
	virtual long __fastcall Write(const void *Buffer, long Count)/* overload */;
	/* Hoisted overloads: */
	
public:
	inline long __fastcall  Read(System::TArray__1<System::Byte> Buffer, long Offset, long Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline long __fastcall  Read(System::TArray__1<System::Byte> &Buffer, long Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline long __fastcall  Write(const System::TArray__1<System::Byte> Buffer, long Offset, long Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline long __fastcall  Write(const System::TArray__1<System::Byte> Buffer, long Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};


//-- var, const, procedure ---------------------------------------------------
static constexpr System::Int8 abSWChunkCount = System::Int8(0x5);
}	/* namespace Abswstm */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABSWSTM)
using namespace Abswstm;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbswstmHPP
