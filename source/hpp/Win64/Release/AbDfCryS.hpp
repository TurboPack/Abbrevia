// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbDfCryS.pas' rev: 32.00 (Windows)

#ifndef AbdfcrysHPP
#define AbdfcrysHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abdfcrys
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbZipDecryptEngine;
class DELPHICLASS TAbDfDecryptStream;
class DELPHICLASS TAbZipEncryptEngine;
class DELPHICLASS TAbDfEncryptStream;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::Byte, 12> TAbZipEncryptHeader;

class PASCALIMPLEMENTATION TAbZipDecryptEngine : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FReady;
	System::StaticArray<int, 3> FState;
	
protected:
	void __fastcall zdeInitState(const System::UnicodeString aPassphrase);
	
public:
	__fastcall TAbZipDecryptEngine(void);
	System::Byte __fastcall Decode(System::Byte aCh);
	void __fastcall DecodeBuffer(void *aBuffer, int aCount);
	bool __fastcall VerifyHeader(const TAbZipEncryptHeader &aHeader, const System::UnicodeString aPassphrase, int aCheckValue);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAbZipDecryptEngine(void) { }
	
};


class PASCALIMPLEMENTATION TAbDfDecryptStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	int FCheckValue;
	TAbZipDecryptEngine* FEngine;
	bool FOwnsStream;
	System::UnicodeString FPassphrase;
	bool FReady;
	System::Classes::TStream* FStream;
	
public:
	__fastcall TAbDfDecryptStream(System::Classes::TStream* aStream, int aCheckValue, const System::UnicodeString aPassphrase);
	__fastcall virtual ~TAbDfDecryptStream(void);
	bool __fastcall IsValid(void);
	virtual int __fastcall Read(void *aBuffer, int aCount)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin)/* overload */;
	virtual int __fastcall Write(const void *aBuffer, int aCount)/* overload */;
	__property bool OwnsStream = {read=FOwnsStream, write=FOwnsStream, nodefault};
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Seek(int Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};


class PASCALIMPLEMENTATION TAbZipEncryptEngine : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FReady;
	System::StaticArray<int, 3> FState;
	
protected:
	void __fastcall zeeInitState(const System::UnicodeString aPassphrase);
	
public:
	__fastcall TAbZipEncryptEngine(void);
	System::Byte __fastcall Encode(System::Byte aCh);
	void __fastcall EncodeBuffer(void *aBuffer, int aCount);
	void __fastcall CreateHeader(TAbZipEncryptHeader &aHeader, const System::UnicodeString aPassphrase, int aCheckValue);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAbZipEncryptEngine(void) { }
	
};


class PASCALIMPLEMENTATION TAbDfEncryptStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	System::Byte *FBuffer;
	int FBufSize;
	TAbZipEncryptEngine* FEngine;
	System::Classes::TStream* FStream;
	
public:
	__fastcall TAbDfEncryptStream(System::Classes::TStream* aStream, int aCheckValue, const System::UnicodeString aPassphrase);
	__fastcall virtual ~TAbDfEncryptStream(void);
	virtual int __fastcall Read(void *aBuffer, int aCount)/* overload */;
	virtual int __fastcall Seek(int aOffset, System::Word aOrigin)/* overload */;
	virtual int __fastcall Write(const void *aBuffer, int aCount)/* overload */;
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek _DEPRECATED_ATTRIBUTE0 (const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abdfcrys */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABDFCRYS)
using namespace Abdfcrys;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbdfcrysHPP
