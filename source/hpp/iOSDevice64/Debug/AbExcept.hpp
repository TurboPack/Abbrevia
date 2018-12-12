// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbExcept.pas' rev: 32.00 (iOS)

#ifndef AbexceptHPP
#define AbexceptHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <AbUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abexcept
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EAbException;
class DELPHICLASS EAbArchiveBusy;
class DELPHICLASS EAbBadStream;
class DELPHICLASS EAbDuplicateName;
class DELPHICLASS EAbFileNotFound;
class DELPHICLASS EAbNoArchive;
class DELPHICLASS EAbUserAbort;
class DELPHICLASS EAbNoSuchDirectory;
class DELPHICLASS EAbUnhandledType;
class DELPHICLASS EAbSpanningNotSupported;
class DELPHICLASS EAbInvalidSpanningThreshold;
class DELPHICLASS EAbZipException;
class DELPHICLASS EAbCabException;
class DELPHICLASS EAbTarException;
class DELPHICLASS EAbGzipException;
class DELPHICLASS EAbZipBadSpanStream;
class DELPHICLASS EAbZipBadCRC;
class DELPHICLASS EAbZipInflateBlock;
class DELPHICLASS EAbZipInvalid;
class DELPHICLASS EAbInvalidIndex;
class DELPHICLASS EAbZipInvalidFactor;
class DELPHICLASS EAbZipInvalidLFH;
class DELPHICLASS EAbZipInvalidMethod;
class DELPHICLASS EAbZipInvalidPassword;
class DELPHICLASS EAbZipInvalidStub;
class DELPHICLASS EAbZipNoExtraction;
class DELPHICLASS EAbZipNoInsertion;
class DELPHICLASS EAbZipSpanOverwrite;
class DELPHICLASS EAbZipStreamFull;
class DELPHICLASS EAbZipTruncate;
class DELPHICLASS EAbZipUnsupported;
class DELPHICLASS EAbZipVersion;
class DELPHICLASS EAbReadError;
class DELPHICLASS EAbGzipBadCRC;
class DELPHICLASS EAbGzipBadFileSize;
class DELPHICLASS EAbGzipInvalid;
class DELPHICLASS EAbTarInvalid;
class DELPHICLASS EAbTarBadFileName;
class DELPHICLASS EAbTarBadLinkName;
class DELPHICLASS EAbTarBadOp;
class DELPHICLASS EAbVMSInvalidOrigin;
class DELPHICLASS EAbVMSErrorOpenSwap;
class DELPHICLASS EAbVMSSeekFail;
class DELPHICLASS EAbVMSReadFail;
class DELPHICLASS EAbVMSWriteFail;
class DELPHICLASS EAbVMSWriteTooManyBytes;
class DELPHICLASS EAbBBSReadTooManyBytes;
class DELPHICLASS EAbBBSSeekOutsideBuffer;
class DELPHICLASS EAbBBSInvalidOrigin;
class DELPHICLASS EAbBBSWriteTooManyBytes;
class DELPHICLASS EAbSWSNotEndofStream;
class DELPHICLASS EAbSWSSeekFailed;
class DELPHICLASS EAbSWSWriteFailed;
class DELPHICLASS EAbSWSInvalidOrigin;
class DELPHICLASS EAbSWSInvalidNewOrigin;
class DELPHICLASS EAbNoCabinetDll;
class DELPHICLASS EAbFCIFileOpenError;
class DELPHICLASS EAbFCIFileReadError;
class DELPHICLASS EAbFCIFileWriteError;
class DELPHICLASS EAbFCIFileCloseError;
class DELPHICLASS EAbFCIFileSeekError;
class DELPHICLASS EAbFCIFileDeleteError;
class DELPHICLASS EAbFCIAddFileError;
class DELPHICLASS EAbFCICreateError;
class DELPHICLASS EAbFCIFlushCabinetError;
class DELPHICLASS EAbFCIFlushFolderError;
class DELPHICLASS EAbFDICopyError;
class DELPHICLASS EAbFDICreateError;
class DELPHICLASS EAbInvalidCabTemplate;
class DELPHICLASS EAbInvalidCabFile;
class DELPHICLASS EAbFileTooLarge;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION EAbException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	int ErrorCode;
public:
	/* Exception.Create */ inline __fastcall EAbException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbException(System::PResStringRec ResStringRec) : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbException(System::PResStringRec ResStringRec, int AHelpContext) : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbException(void) { }
	
};


class PASCALIMPLEMENTATION EAbArchiveBusy : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbArchiveBusy(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbArchiveBusy(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbArchiveBusy(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbArchiveBusy(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbArchiveBusy(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbArchiveBusy(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbArchiveBusy(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbArchiveBusy(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbArchiveBusy(void) { }
	
};


class PASCALIMPLEMENTATION EAbBadStream : public EAbException
{
	typedef EAbException inherited;
	
protected:
	System::Sysutils::Exception* FInnerException;
	
public:
	__fastcall EAbBadStream(void);
	__fastcall EAbBadStream(System::Sysutils::Exception* aInnerException);
	__property System::Sysutils::Exception* InnerException = {read=FInnerException};
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBadStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBadStream(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBadStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBadStream(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBadStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBadStream(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBadStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBadStream(void) { }
	
};


class PASCALIMPLEMENTATION EAbDuplicateName : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbDuplicateName(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbDuplicateName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbDuplicateName(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbDuplicateName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbDuplicateName(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbDuplicateName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbDuplicateName(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbDuplicateName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbDuplicateName(void) { }
	
};


class PASCALIMPLEMENTATION EAbFileNotFound : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbFileNotFound(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFileNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFileNotFound(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFileNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFileNotFound(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFileNotFound(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFileNotFound(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFileNotFound(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFileNotFound(void) { }
	
};


class PASCALIMPLEMENTATION EAbNoArchive : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbNoArchive(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbNoArchive(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbNoArchive(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbNoArchive(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbNoArchive(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbNoArchive(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbNoArchive(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbNoArchive(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbNoArchive(void) { }
	
};


class PASCALIMPLEMENTATION EAbUserAbort : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbUserAbort(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbUserAbort(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbUserAbort(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbUserAbort(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbUserAbort(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbUserAbort(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbUserAbort(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbUserAbort(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbUserAbort(void) { }
	
};


class PASCALIMPLEMENTATION EAbNoSuchDirectory : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbNoSuchDirectory(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbNoSuchDirectory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbNoSuchDirectory(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbNoSuchDirectory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbNoSuchDirectory(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbNoSuchDirectory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbNoSuchDirectory(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbNoSuchDirectory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbNoSuchDirectory(void) { }
	
};


class PASCALIMPLEMENTATION EAbUnhandledType : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbUnhandledType(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbUnhandledType(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbUnhandledType(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbUnhandledType(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbUnhandledType(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbUnhandledType(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbUnhandledType(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbUnhandledType(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbUnhandledType(void) { }
	
};


class PASCALIMPLEMENTATION EAbSpanningNotSupported : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbSpanningNotSupported(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSpanningNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSpanningNotSupported(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSpanningNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSpanningNotSupported(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSpanningNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSpanningNotSupported(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSpanningNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSpanningNotSupported(void) { }
	
};


class PASCALIMPLEMENTATION EAbInvalidSpanningThreshold : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbInvalidSpanningThreshold(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbInvalidSpanningThreshold(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidSpanningThreshold(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidSpanningThreshold(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInvalidSpanningThreshold(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInvalidSpanningThreshold(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidSpanningThreshold(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidSpanningThreshold(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInvalidSpanningThreshold(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipException : public EAbException
{
	typedef EAbException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbZipException(const System::UnicodeString Msg) : EAbException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbZipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipException(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipException(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipException(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipException(void) { }
	
};


class PASCALIMPLEMENTATION EAbCabException : public EAbException
{
	typedef EAbException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbCabException(const System::UnicodeString Msg) : EAbException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbCabException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbCabException(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbCabException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbCabException(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbCabException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbCabException(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbCabException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbCabException(void) { }
	
};


class PASCALIMPLEMENTATION EAbTarException : public EAbException
{
	typedef EAbException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbTarException(const System::UnicodeString Msg) : EAbException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbTarException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarException(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarException(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarException(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarException(void) { }
	
};


class PASCALIMPLEMENTATION EAbGzipException : public EAbException
{
	typedef EAbException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAbGzipException(const System::UnicodeString Msg) : EAbException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAbGzipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipException(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbGzipException(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbGzipException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipException(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbGzipException(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipBadSpanStream : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipBadSpanStream(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipBadSpanStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipBadSpanStream(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipBadSpanStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipBadSpanStream(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipBadSpanStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipBadSpanStream(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipBadSpanStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipBadSpanStream(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipBadCRC : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipBadCRC(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipBadCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipBadCRC(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipBadCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipBadCRC(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipBadCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipBadCRC(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipBadCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipBadCRC(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipInflateBlock : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInflateBlock(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInflateBlock(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInflateBlock(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInflateBlock(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInflateBlock(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInflateBlock(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInflateBlock(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInflateBlock(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInflateBlock(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipInvalid : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalid(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalid(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalid(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalid(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalid(void) { }
	
};


class PASCALIMPLEMENTATION EAbInvalidIndex : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbInvalidIndex(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbInvalidIndex(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidIndex(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidIndex(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInvalidIndex(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInvalidIndex(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidIndex(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidIndex(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInvalidIndex(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipInvalidFactor : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidFactor(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidFactor(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidFactor(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidFactor(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidFactor(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidFactor(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidFactor(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidFactor(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidFactor(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipInvalidLFH : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidLFH(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidLFH(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidLFH(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidLFH(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidLFH(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidLFH(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidLFH(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidLFH(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidLFH(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipInvalidMethod : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidMethod(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidMethod(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidMethod(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidMethod(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidMethod(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidMethod(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidMethod(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidMethod(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidMethod(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipInvalidPassword : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidPassword(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidPassword(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidPassword(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidPassword(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidPassword(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidPassword(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidPassword(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidPassword(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidPassword(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipInvalidStub : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipInvalidStub(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipInvalidStub(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipInvalidStub(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipInvalidStub(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipInvalidStub(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipInvalidStub(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipInvalidStub(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipInvalidStub(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipInvalidStub(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipNoExtraction : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipNoExtraction(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipNoExtraction(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipNoExtraction(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipNoExtraction(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipNoExtraction(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipNoExtraction(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipNoExtraction(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipNoExtraction(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipNoExtraction(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipNoInsertion : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipNoInsertion(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipNoInsertion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipNoInsertion(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipNoInsertion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipNoInsertion(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipNoInsertion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipNoInsertion(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipNoInsertion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipNoInsertion(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipSpanOverwrite : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipSpanOverwrite(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipSpanOverwrite(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipSpanOverwrite(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipSpanOverwrite(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipSpanOverwrite(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipSpanOverwrite(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipSpanOverwrite(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipSpanOverwrite(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipSpanOverwrite(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipStreamFull : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipStreamFull(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipStreamFull(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipStreamFull(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipStreamFull(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipStreamFull(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipStreamFull(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipStreamFull(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipStreamFull(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipStreamFull(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipTruncate : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipTruncate(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipTruncate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipTruncate(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipTruncate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipTruncate(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipTruncate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipTruncate(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipTruncate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipTruncate(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipUnsupported : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipUnsupported(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipUnsupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipUnsupported(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipUnsupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipUnsupported(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipUnsupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipUnsupported(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipUnsupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipUnsupported(void) { }
	
};


class PASCALIMPLEMENTATION EAbZipVersion : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbZipVersion(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbZipVersion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbZipVersion(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbZipVersion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbZipVersion(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbZipVersion(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbZipVersion(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbZipVersion(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbZipVersion(void) { }
	
};


class PASCALIMPLEMENTATION EAbReadError : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbReadError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbReadError(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbReadError(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbReadError(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbReadError(void) { }
	
};


class PASCALIMPLEMENTATION EAbGzipBadCRC : public EAbGzipException
{
	typedef EAbGzipException inherited;
	
public:
	__fastcall EAbGzipBadCRC(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbGzipBadCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbGzipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipBadCRC(System::PResStringRec ResStringRec) : EAbGzipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipBadCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbGzipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbGzipBadCRC(const System::UnicodeString Msg, int AHelpContext) : EAbGzipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbGzipBadCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbGzipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipBadCRC(System::PResStringRec ResStringRec, int AHelpContext) : EAbGzipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipBadCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbGzipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbGzipBadCRC(void) { }
	
};


class PASCALIMPLEMENTATION EAbGzipBadFileSize : public EAbGzipException
{
	typedef EAbGzipException inherited;
	
public:
	__fastcall EAbGzipBadFileSize(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbGzipBadFileSize(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbGzipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipBadFileSize(System::PResStringRec ResStringRec) : EAbGzipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipBadFileSize(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbGzipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbGzipBadFileSize(const System::UnicodeString Msg, int AHelpContext) : EAbGzipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbGzipBadFileSize(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbGzipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipBadFileSize(System::PResStringRec ResStringRec, int AHelpContext) : EAbGzipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipBadFileSize(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbGzipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbGzipBadFileSize(void) { }
	
};


class PASCALIMPLEMENTATION EAbGzipInvalid : public EAbGzipException
{
	typedef EAbGzipException inherited;
	
public:
	__fastcall EAbGzipInvalid(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbGzipInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbGzipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbGzipInvalid(System::PResStringRec ResStringRec) : EAbGzipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbGzipInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbGzipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbGzipInvalid(const System::UnicodeString Msg, int AHelpContext) : EAbGzipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbGzipInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbGzipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbGzipInvalid(System::PResStringRec ResStringRec, int AHelpContext) : EAbGzipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbGzipInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbGzipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbGzipInvalid(void) { }
	
};


class PASCALIMPLEMENTATION EAbTarInvalid : public EAbTarException
{
	typedef EAbTarException inherited;
	
public:
	__fastcall EAbTarInvalid(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbTarInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbTarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarInvalid(System::PResStringRec ResStringRec) : EAbTarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbTarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarInvalid(const System::UnicodeString Msg, int AHelpContext) : EAbTarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarInvalid(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarInvalid(System::PResStringRec ResStringRec, int AHelpContext) : EAbTarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarInvalid(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarInvalid(void) { }
	
};


class PASCALIMPLEMENTATION EAbTarBadFileName : public EAbTarException
{
	typedef EAbTarException inherited;
	
public:
	__fastcall EAbTarBadFileName(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbTarBadFileName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbTarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarBadFileName(System::PResStringRec ResStringRec) : EAbTarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarBadFileName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbTarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarBadFileName(const System::UnicodeString Msg, int AHelpContext) : EAbTarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarBadFileName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarBadFileName(System::PResStringRec ResStringRec, int AHelpContext) : EAbTarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarBadFileName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarBadFileName(void) { }
	
};


class PASCALIMPLEMENTATION EAbTarBadLinkName : public EAbTarException
{
	typedef EAbTarException inherited;
	
public:
	__fastcall EAbTarBadLinkName(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbTarBadLinkName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbTarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarBadLinkName(System::PResStringRec ResStringRec) : EAbTarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarBadLinkName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbTarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarBadLinkName(const System::UnicodeString Msg, int AHelpContext) : EAbTarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarBadLinkName(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarBadLinkName(System::PResStringRec ResStringRec, int AHelpContext) : EAbTarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarBadLinkName(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarBadLinkName(void) { }
	
};


class PASCALIMPLEMENTATION EAbTarBadOp : public EAbTarException
{
	typedef EAbTarException inherited;
	
public:
	__fastcall EAbTarBadOp(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbTarBadOp(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbTarException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbTarBadOp(System::PResStringRec ResStringRec) : EAbTarException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbTarBadOp(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbTarException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbTarBadOp(const System::UnicodeString Msg, int AHelpContext) : EAbTarException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbTarBadOp(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbTarBadOp(System::PResStringRec ResStringRec, int AHelpContext) : EAbTarException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbTarBadOp(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbTarException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbTarBadOp(void) { }
	
};


class PASCALIMPLEMENTATION EAbVMSInvalidOrigin : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSInvalidOrigin(int Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSInvalidOrigin(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSInvalidOrigin(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSInvalidOrigin(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSInvalidOrigin(void) { }
	
};


class PASCALIMPLEMENTATION EAbVMSErrorOpenSwap : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSErrorOpenSwap(const System::UnicodeString Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSErrorOpenSwap(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSErrorOpenSwap(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSErrorOpenSwap(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSErrorOpenSwap(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSErrorOpenSwap(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSErrorOpenSwap(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSErrorOpenSwap(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSErrorOpenSwap(void) { }
	
};


class PASCALIMPLEMENTATION EAbVMSSeekFail : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSSeekFail(const System::UnicodeString Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSSeekFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSSeekFail(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSSeekFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSSeekFail(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSSeekFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSSeekFail(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSSeekFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSSeekFail(void) { }
	
};


class PASCALIMPLEMENTATION EAbVMSReadFail : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSReadFail(int Count, const System::UnicodeString Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSReadFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSReadFail(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSReadFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSReadFail(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSReadFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSReadFail(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSReadFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSReadFail(void) { }
	
};


class PASCALIMPLEMENTATION EAbVMSWriteFail : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSWriteFail(int Count, const System::UnicodeString Value);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSWriteFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSWriteFail(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSWriteFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSWriteFail(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSWriteFail(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSWriteFail(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSWriteFail(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSWriteFail(void) { }
	
};


class PASCALIMPLEMENTATION EAbVMSWriteTooManyBytes : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbVMSWriteTooManyBytes(int Count);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbVMSWriteTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbVMSWriteTooManyBytes(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbVMSWriteTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbVMSWriteTooManyBytes(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbVMSWriteTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbVMSWriteTooManyBytes(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbVMSWriteTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbVMSWriteTooManyBytes(void) { }
	
};


class PASCALIMPLEMENTATION EAbBBSReadTooManyBytes : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbBBSReadTooManyBytes(int Count);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBBSReadTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSReadTooManyBytes(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSReadTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBBSReadTooManyBytes(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBBSReadTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSReadTooManyBytes(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSReadTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBBSReadTooManyBytes(void) { }
	
};


class PASCALIMPLEMENTATION EAbBBSSeekOutsideBuffer : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbBBSSeekOutsideBuffer(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBBSSeekOutsideBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSSeekOutsideBuffer(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSSeekOutsideBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSSeekOutsideBuffer(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBBSSeekOutsideBuffer(void) { }
	
};


class PASCALIMPLEMENTATION EAbBBSInvalidOrigin : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbBBSInvalidOrigin(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBBSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSInvalidOrigin(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBBSInvalidOrigin(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBBSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSInvalidOrigin(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBBSInvalidOrigin(void) { }
	
};


class PASCALIMPLEMENTATION EAbBBSWriteTooManyBytes : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbBBSWriteTooManyBytes(int Count);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbBBSWriteTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbBBSWriteTooManyBytes(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbBBSWriteTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbBBSWriteTooManyBytes(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbBBSWriteTooManyBytes(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbBBSWriteTooManyBytes(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbBBSWriteTooManyBytes(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbBBSWriteTooManyBytes(void) { }
	
};


class PASCALIMPLEMENTATION EAbSWSNotEndofStream : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSNotEndofStream(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSNotEndofStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSNotEndofStream(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSNotEndofStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSNotEndofStream(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSNotEndofStream(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSNotEndofStream(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSNotEndofStream(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSNotEndofStream(void) { }
	
};


class PASCALIMPLEMENTATION EAbSWSSeekFailed : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSSeekFailed(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSSeekFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSSeekFailed(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSSeekFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSSeekFailed(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSSeekFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSSeekFailed(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSSeekFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSSeekFailed(void) { }
	
};


class PASCALIMPLEMENTATION EAbSWSWriteFailed : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSWriteFailed(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSWriteFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSWriteFailed(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSWriteFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSWriteFailed(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSWriteFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSWriteFailed(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSWriteFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSWriteFailed(void) { }
	
};


class PASCALIMPLEMENTATION EAbSWSInvalidOrigin : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSInvalidOrigin(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSInvalidOrigin(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSInvalidOrigin(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSInvalidOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSInvalidOrigin(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSInvalidOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSInvalidOrigin(void) { }
	
};


class PASCALIMPLEMENTATION EAbSWSInvalidNewOrigin : public EAbZipException
{
	typedef EAbZipException inherited;
	
public:
	__fastcall EAbSWSInvalidNewOrigin(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbSWSInvalidNewOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbZipException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbSWSInvalidNewOrigin(System::PResStringRec ResStringRec) : EAbZipException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbSWSInvalidNewOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbZipException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbSWSInvalidNewOrigin(const System::UnicodeString Msg, int AHelpContext) : EAbZipException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbSWSInvalidNewOrigin(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbSWSInvalidNewOrigin(System::PResStringRec ResStringRec, int AHelpContext) : EAbZipException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbSWSInvalidNewOrigin(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbZipException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbSWSInvalidNewOrigin(void) { }
	
};


class PASCALIMPLEMENTATION EAbNoCabinetDll : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbNoCabinetDll(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbNoCabinetDll(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbNoCabinetDll(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbNoCabinetDll(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbNoCabinetDll(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbNoCabinetDll(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbNoCabinetDll(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbNoCabinetDll(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbNoCabinetDll(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCIFileOpenError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileOpenError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileOpenError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileOpenError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileOpenError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileOpenError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileOpenError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileOpenError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileOpenError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileOpenError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCIFileReadError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileReadError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileReadError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileReadError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileReadError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileReadError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileReadError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileReadError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCIFileWriteError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileWriteError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileWriteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileWriteError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileWriteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileWriteError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileWriteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileWriteError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileWriteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileWriteError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCIFileCloseError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileCloseError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileCloseError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileCloseError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileCloseError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileCloseError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileCloseError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileCloseError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileCloseError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileCloseError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCIFileSeekError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileSeekError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileSeekError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileSeekError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileSeekError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileSeekError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileSeekError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileSeekError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileSeekError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileSeekError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCIFileDeleteError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFileDeleteError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFileDeleteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFileDeleteError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFileDeleteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFileDeleteError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFileDeleteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFileDeleteError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFileDeleteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFileDeleteError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCIAddFileError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIAddFileError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIAddFileError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIAddFileError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIAddFileError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIAddFileError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIAddFileError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIAddFileError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIAddFileError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIAddFileError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCICreateError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCICreateError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCICreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCICreateError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCICreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCICreateError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCICreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCICreateError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCICreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCICreateError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCIFlushCabinetError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFlushCabinetError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFlushCabinetError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFlushCabinetError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFlushCabinetError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFlushCabinetError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFlushCabinetError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFlushCabinetError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFlushCabinetError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFlushCabinetError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFCIFlushFolderError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFCIFlushFolderError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFCIFlushFolderError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFCIFlushFolderError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFCIFlushFolderError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFCIFlushFolderError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFCIFlushFolderError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFCIFlushFolderError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFCIFlushFolderError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFCIFlushFolderError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFDICopyError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFDICopyError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFDICopyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFDICopyError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFDICopyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFDICopyError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFDICopyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFDICopyError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFDICopyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFDICopyError(void) { }
	
};


class PASCALIMPLEMENTATION EAbFDICreateError : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbFDICreateError(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFDICreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFDICreateError(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFDICreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFDICreateError(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFDICreateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFDICreateError(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFDICreateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFDICreateError(void) { }
	
};


class PASCALIMPLEMENTATION EAbInvalidCabTemplate : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbInvalidCabTemplate(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbInvalidCabTemplate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidCabTemplate(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidCabTemplate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInvalidCabTemplate(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInvalidCabTemplate(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidCabTemplate(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidCabTemplate(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInvalidCabTemplate(void) { }
	
};


class PASCALIMPLEMENTATION EAbInvalidCabFile : public EAbCabException
{
	typedef EAbCabException inherited;
	
public:
	__fastcall EAbInvalidCabFile(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbInvalidCabFile(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbCabException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbInvalidCabFile(System::PResStringRec ResStringRec) : EAbCabException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbInvalidCabFile(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbCabException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbInvalidCabFile(const System::UnicodeString Msg, int AHelpContext) : EAbCabException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbInvalidCabFile(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbInvalidCabFile(System::PResStringRec ResStringRec, int AHelpContext) : EAbCabException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbInvalidCabFile(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbCabException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbInvalidCabFile(void) { }
	
};


class PASCALIMPLEMENTATION EAbFileTooLarge : public EAbException
{
	typedef EAbException inherited;
	
public:
	__fastcall EAbFileTooLarge(void);
public:
	/* Exception.CreateFmt */ inline __fastcall EAbFileTooLarge(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EAbException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAbFileTooLarge(System::PResStringRec ResStringRec) : EAbException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAbFileTooLarge(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High) : EAbException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAbFileTooLarge(const System::UnicodeString Msg, int AHelpContext) : EAbException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAbFileTooLarge(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAbFileTooLarge(System::PResStringRec ResStringRec, int AHelpContext) : EAbException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAbFileTooLarge(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EAbException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAbFileTooLarge(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall AbConvertException(System::Sysutils::Exception* const E, Abutils::TAbErrorClass &eClass, int &eErrorCode);
}	/* namespace Abexcept */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABEXCEPT)
using namespace Abexcept;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbexceptHPP
