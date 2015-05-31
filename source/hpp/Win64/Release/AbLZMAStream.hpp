// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbLZMAStream.pas' rev: 29.00 (Windows)

#ifndef AblzmastreamHPP
#define AblzmastreamHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <AbLZMA.hpp>
#include <AbUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ablzmastream
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbLZMACompressionThread;
struct TAbQueuedBuffer;
class DELPHICLASS TAbLZMACompressionStream;
class DELPHICLASS TAbLZMADecompressionStream;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAbLZMACompressionThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
protected:
	TAbLZMACompressionStream* FCompressionStream;
	
public:
	virtual void __fastcall Execute(void);
public:
	/* TThread.Create */ inline __fastcall TAbLZMACompressionThread(void)/* overload */ : System::Classes::TThread() { }
	/* TThread.Create */ inline __fastcall TAbLZMACompressionThread(bool CreateSuspended)/* overload */ : System::Classes::TThread(CreateSuspended) { }
	/* TThread.Destroy */ inline __fastcall virtual ~TAbLZMACompressionThread(void) { }
	
};


typedef TAbQueuedBuffer *PAbQueuedBuffer;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TAbQueuedBuffer
{
public:
	TAbQueuedBuffer *PreviousBuffer;
	TAbQueuedBuffer *NextBuffer;
	int DataSize;
	void __fastcall QueueBuffer(TAbLZMACompressionStream* ACompressionStream);
	void __fastcall UnQueueBuffer(void);
	void * __fastcall GetDataPointer(int AOffset);
};
#pragma pack(pop)


class PASCALIMPLEMENTATION TAbLZMACompressionStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
protected:
	System::Classes::TStream* FOutputStream;
	_RTL_CRITICAL_SECTION FBufferCriticalSection;
	NativeUInt FPendingWorkSemaphore;
	void *FLZMAEncHandle;
	TAbLZMACompressionThread* FCompressionThread;
	int FCompressionErrorCode;
	TAbQueuedBuffer *FPIntermediateCompressionBuffer;
	int FIntermediateCompressionBufferAvailableBytes;
	TAbQueuedBuffer FQueuedData;
	int FCurrentBufferBytesSubmitted;
	__int64 FOutputStreamHeaderSizeFieldPosition;
	__int64 FTotalBytesWritten;
	void __fastcall WakeCompressionThread(void);
	
public:
	__fastcall TAbLZMACompressionStream(System::Classes::TStream* AOutputStream, int ACompressionLevel, int ADictionarySize);
	__fastcall virtual ~TAbLZMACompressionStream(void);
	virtual int __fastcall Read(void *ABuffer, int ACount)/* overload */;
	virtual int __fastcall Write(const void *ABuffer, int ACount)/* overload */;
	virtual int __fastcall Seek(int AOffset, System::Word AOrigin)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 AOffset, System::Classes::TSeekOrigin AOrigin)/* overload */;
	void __fastcall NoMoreDataToCompress(void);
	int __fastcall WaitForCompressionToFinish(void);
	bool __fastcall IsBusy(void);
	__property int ErrorCode = {read=FCompressionErrorCode, nodefault};
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


class PASCALIMPLEMENTATION TAbLZMADecompressionStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
protected:
	System::Classes::TStream* FSourceStream;
	System::StaticArray<System::Byte, 16384> FCompressedDataBuffer;
	System::StaticArray<System::Byte, 32768> FUncompressedDataBuffer;
	int FReadBufferSize;
	int FReadBufferAvailableBytes;
	int FCompressedDataBufferSize;
	int FCompressedDataBufferPosition;
	__int64 FUncompressedSize;
	__int64 FBytesDecompressed;
	Ablzma::CLzmaDec FLzmaState;
	int __fastcall InternalDecompressToBuffer(void * APBuffer, int ABufferSize);
	__int64 __fastcall GetBytesRead(void);
	virtual __int64 __fastcall GetSize(void);
	
public:
	__fastcall TAbLZMADecompressionStream(System::Classes::TStream* ASourceStream);
	__fastcall virtual ~TAbLZMADecompressionStream(void);
	virtual int __fastcall Read(void *ABuffer, int ACount)/* overload */;
	virtual int __fastcall Write(const void *ABuffer, int ACount)/* overload */;
	virtual int __fastcall Seek(int AOffset, System::Word AOrigin)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 AOffset, System::Classes::TSeekOrigin AOrigin)/* overload */;
	__property __int64 BytesRead = {read=GetBytesRead};
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word CompressedDataBufferSize = System::Word(0x4000);
static const System::Word UncompressedDataBufferSize = System::Word(0x8000);
static const System::Word MaximumBlockSizeForBufferedIO = System::Word(0x400);
}	/* namespace Ablzmastream */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABLZMASTREAM)
using namespace Ablzmastream;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AblzmastreamHPP
