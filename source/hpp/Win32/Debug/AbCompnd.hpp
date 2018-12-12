// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AbCompnd.pas' rev: 32.00 (Windows)

#ifndef AbcompndHPP
#define AbcompndHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.ComCtrls.hpp>
#include <AbBase.hpp>
#include <AbResString.hpp>
#include <AbDfDec.hpp>
#include <AbDfEnc.hpp>
#include <AbDfBase.hpp>

//-- user supplied -----------------------------------------------------------

namespace Abcompnd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS ECompoundFileError;
class DELPHICLASS TMultiNode;
class DELPHICLASS TMultiTree;
class DELPHICLASS TAbSystemBlock;
class DELPHICLASS TAbDirectoryEntry;
class DELPHICLASS TAbRootDir;
class DELPHICLASS TAbFATTable;
class DELPHICLASS TAbCompoundFile;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION ECompoundFileError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECompoundFileError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECompoundFileError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECompoundFileError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECompoundFileError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECompoundFileError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECompoundFileError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECompoundFileError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECompoundFileError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECompoundFileError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECompoundFileError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECompoundFileError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECompoundFileError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECompoundFileError(void) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TrdEntryType : unsigned char { etFolder, etFile };

typedef System::DynamicArray<int> TFATChainArray;

typedef void __fastcall (__closure *TBeforeDirDeleteEvent)(TAbCompoundFile* Sender, System::AnsiString Dir, bool &AllowDelete);

typedef void __fastcall (__closure *TBeforeDirModifiedEvent)(TAbCompoundFile* Sender, System::AnsiString Dir, bool &AllowModify);

typedef void __fastcall (__closure *TBeforeFileDeleteEvent)(TAbCompoundFile* Sender, System::AnsiString FileName, bool &AllowDelete);

typedef void __fastcall (__closure *TBeforeFileModifiedEvent)(TAbCompoundFile* Sender, System::AnsiString FileName, bool &AllowModify);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMultiNode : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	void *FParent;
	System::AnsiString FKey;
	System::Classes::TStringList* FChildren;
	System::TObject* FData;
	int __fastcall GetChildCount(void);
	
public:
	__fastcall TMultiNode(const System::AnsiString Key);
	__fastcall virtual ~TMultiNode(void);
	TMultiNode* __fastcall AddChild(const System::AnsiString Key);
	void __fastcall DeleteChild(int Index);
	bool __fastcall DeleteChildByName(const System::AnsiString ChildKey);
	bool __fastcall DeleteChildren(void);
	TMultiNode* __fastcall GetChild(int Index);
	TMultiNode* __fastcall GetChildByName(const System::AnsiString Key);
	bool __fastcall HasParent(void);
	bool __fastcall HasChildren(void);
	bool __fastcall Contains(const System::AnsiString Key);
	__property void * Parent = {read=FParent, write=FParent};
	__property int ChildCount = {read=GetChildCount, nodefault};
	__property TMultiNode* Children[int Index] = {read=GetChild};
	__property System::TObject* Data = {read=FData, write=FData};
	__property System::AnsiString Key = {read=FKey, write=FKey};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMultiTree : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TMultiNode* FRoot;
	int FCount;
	TMultiNode* FCurrentNode;
	char FSepChar;
	int FIDCount;
	void __fastcall VisitSubNodesPost(TMultiNode* Node, int ID);
	void __fastcall VisitSubNodesPre(TMultiNode* Node, System::Classes::TStream* Strm);
	void __fastcall VisitNode(TMultiNode* Node, System::Classes::TStream* Strm);
	void __fastcall ParseDirStr(const System::AnsiString Key, System::Classes::TStringList* Lst);
	void __fastcall PopulateSubNodes(TMultiNode* ParentNode, Vcl::Comctrls::TTreeView* TreeView, Vcl::Comctrls::TTreeNode* TreeNode);
	void __fastcall TraversePost(int ID);
	void __fastcall TraversePre(System::Classes::TStream* Strm);
	
public:
	__fastcall TMultiTree(void);
	__fastcall virtual ~TMultiTree(void);
	TMultiNode* __fastcall Insert(TMultiNode* ParentNode, const System::AnsiString Key);
	TMultiNode* __fastcall GetNode(const System::AnsiString Key);
	bool __fastcall DeleteNode(const System::AnsiString Key);
	void __fastcall ChangeDir(const System::AnsiString Key);
	int __fastcall PopulateTreeView(Vcl::Comctrls::TTreeView* TreeView);
	__property TMultiNode* Root = {read=FRoot};
	__property int Count = {read=FCount, nodefault};
	__property TMultiNode* CurrentNode = {read=FCurrentNode};
	__property char SepChar = {read=FSepChar, write=FSepChar, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbSystemBlock : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::AnsiString FSignature;
	System::AnsiString FVolumeLabel;
	int FAllocationSize;
	System::AnsiString FVersion;
	bool FUpdating;
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(void);
	void __fastcall WriteToStream(System::Classes::TMemoryStream* Strm);
	__property System::AnsiString Signature = {read=FSignature, write=FSignature};
	__property System::AnsiString VolumeLabel = {read=FVolumeLabel, write=FVolumeLabel};
	__property bool Updating = {read=FUpdating, nodefault};
	__property int AllocationSize = {read=FAllocationSize, write=FAllocationSize, nodefault};
	__property System::AnsiString Version = {read=FVersion};
	
public:
	__fastcall TAbSystemBlock(const System::AnsiString VolLabel, int AllocationSz);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAbSystemBlock(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAbDirectoryEntry : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	System::AnsiString FName;
	int FEntryID;
	int FParentFolder;
	TrdEntryType FEntryType;
	int FAttributes;
	int FStartBlock;
	System::TDateTime FLastModified;
	int FSize;
	int FCompressedSize;
	void __fastcall WriteToStream(System::Classes::TMemoryStream* Strm);
	bool __fastcall IsReadOnly(void);
	bool __fastcall IsHidden(void);
	bool __fastcall IsSysFile(void);
	bool __fastcall IsVolumeID(void);
	bool __fastcall IsDirectory(void);
	bool __fastcall IsArchive(void);
	bool __fastcall GetIsFree(void);
	
public:
	__fastcall TAbDirectoryEntry(bool AsFile);
	__property System::AnsiString EntryName = {read=FName, write=FName};
	__property int ParentFolder = {read=FParentFolder, write=FParentFolder, nodefault};
	__property int Attributes = {read=FAttributes, write=FAttributes, nodefault};
	__property int StartBlock = {read=FStartBlock, write=FStartBlock, nodefault};
	__property System::TDateTime LastModified = {read=FLastModified, write=FLastModified};
	__property int Size = {read=FSize, write=FSize, nodefault};
	__property int CompressedSize = {read=FCompressedSize, write=FCompressedSize, nodefault};
	__property bool IsFree = {read=GetIsFree, nodefault};
	__property TrdEntryType EntryType = {read=FEntryType, write=FEntryType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAbDirectoryEntry(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbRootDir : public TMultiTree
{
	typedef TMultiTree inherited;
	
public:
	int fAllocSize;
	
protected:
	TAbDirectoryEntry* __fastcall AddFolder(System::AnsiString FolderName);
	TAbDirectoryEntry* __fastcall AddFile(System::AnsiString FileName);
	void __fastcall DeleteFolder(System::AnsiString FolderName);
	void __fastcall DeleteFile(System::AnsiString FileName);
	void __fastcall WriteToStream(System::Classes::TMemoryStream* Strm);
	void __fastcall GoToEntryID(int ID);
	
public:
	__fastcall TAbRootDir(System::AnsiString VolLabel, int AllocSize);
	__fastcall virtual ~TAbRootDir(void);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbFATTable : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<int> _TAbFATTable__1;
	
	
protected:
	_TAbFATTable__1 fFATArray;
	int fAllocSize;
	void __fastcall WriteToStream(System::Classes::TMemoryStream* Strm);
	
public:
	__fastcall TAbFATTable(int AllocSize);
	__fastcall virtual ~TAbFATTable(void);
	bool __fastcall IsEndOfFile(int Ndx);
	bool __fastcall IsUnUsed(int Ndx);
	int __fastcall GetNextUnusedBlock(void);
	void __fastcall GetNewChain(int NumBytes, TFATChainArray &ChainArray);
	void __fastcall GetExistingChain(int StartNdx, TFATChainArray &ChainArray);
	void __fastcall ClearExistingChain(int StartNdx);
	void __fastcall GetRootDirChain(TFATChainArray &ChainArray);
	void __fastcall GetFATChain(TFATChainArray &ChainArray);
	void __fastcall GetNewRootDirChain(int NumBytes, TFATChainArray &ChainArray);
	void __fastcall GetNewFATChain(int NumBytes, TFATChainArray &ChainArray);
	void __fastcall ClearRootDirChain(void);
	void __fastcall ClearFATChain(void);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TAbCompoundFile : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TAbSystemBlock* FSystemBlock;
	TAbFATTable* FFATTable;
	TAbRootDir* FRootDir;
	System::UnicodeString FDiskFile;
	int FSizeOnDisk;
	System::Classes::TFileStream* FStream;
	System::Classes::TNotifyEvent FOnAfterOpen;
	System::Classes::TNotifyEvent FOnBeforeClose;
	TBeforeDirDeleteEvent FOnBeforeDirDelete;
	TBeforeDirModifiedEvent FOnBeforeDirModified;
	TBeforeFileDeleteEvent FOnBeforeFileDelete;
	TBeforeFileModifiedEvent FOnBeforeFileModified;
	System::AnsiString __fastcall GetVolumeLabel(void);
	void __fastcall SetVolumeLabel(System::AnsiString Val);
	int __fastcall GetDirectoryEntries(void);
	int __fastcall GetSizeOnDisk(void);
	void __fastcall PersistFileData(System::Classes::TStream* FileData, TFATChainArray &ChainArray);
	void __fastcall PersistSystemBlock(void);
	void __fastcall PersistRootDirBlock(void);
	void __fastcall PersistFATBlock(void);
	void __fastcall BuildSysBlock(void);
	void __fastcall BuildFat(void);
	void __fastcall BuildRootDir(void);
	void __fastcall AddDirEntriesFromList(System::Classes::TStringList* Lst);
	void __fastcall Defrag(void);
	
public:
	__fastcall TAbCompoundFile(const System::UnicodeString FileName, const System::AnsiString VolLabel, int AllocSize)/* overload */;
	__fastcall TAbCompoundFile(const System::UnicodeString FileName, const System::AnsiString VolLabel, int AllocSize, const System::AnsiString Signature)/* overload */;
	__fastcall virtual ~TAbCompoundFile(void);
	void __fastcall EnumerateFiles(System::Classes::TStringList* Lst);
	void __fastcall EnumerateFolders(System::Classes::TStringList* Lst);
	void __fastcall AddFile(System::AnsiString FName, System::Classes::TStream* FileData, int FileSize);
	bool __fastcall AddFolder(System::AnsiString FName);
	void __fastcall UpdateFile(System::AnsiString FName, System::Classes::TStream* FData);
	void __fastcall DeleteFile(System::AnsiString FName);
	void __fastcall DeleteFolder(System::AnsiString FName);
	void __fastcall Open(const System::UnicodeString FName)/* overload */;
	void __fastcall Open(const System::UnicodeString FName, const System::AnsiString Signature)/* overload */;
	int __fastcall OpenFile(System::AnsiString FileName, System::Classes::TStream* &Strm);
	int __fastcall PopulateTreeView(Vcl::Comctrls::TTreeView* TreeView);
	void __fastcall PopulateSubNodes(TMultiNode* ParentNode, Vcl::Comctrls::TTreeView* TreeView, Vcl::Comctrls::TTreeNode* TreeNode);
	void __fastcall RenameFile(System::AnsiString OrigName, System::AnsiString NewName);
	void __fastcall RenameFolder(System::AnsiString OrigName, System::AnsiString NewName);
	void __fastcall SetCurrentDirectory(System::AnsiString val);
	System::AnsiString __fastcall GetCurrentDirectory(void);
	int __fastcall GetAllocationSize(void);
	__property System::AnsiString CurrentDirectory = {read=GetCurrentDirectory, write=SetCurrentDirectory};
	__property int DirectoryEntries = {read=GetDirectoryEntries, nodefault};
	__property int SizeOnDisk = {read=GetSizeOnDisk, nodefault};
	__property System::Classes::TFileStream* Stream = {read=FStream, write=FStream};
	
__published:
	__property System::AnsiString VolumeLabel = {read=GetVolumeLabel, write=SetVolumeLabel};
	__property System::UnicodeString FileName = {read=FDiskFile};
	__property int AllocationSize = {read=GetAllocationSize, nodefault};
	__property System::Classes::TNotifyEvent OnAfterOpen = {read=FOnAfterOpen, write=FOnAfterOpen};
	__property System::Classes::TNotifyEvent OnBeforeClose = {read=FOnBeforeClose, write=FOnBeforeClose};
	__property TBeforeDirDeleteEvent OnBeforeDirDelete = {read=FOnBeforeDirDelete, write=FOnBeforeDirDelete};
	__property TBeforeDirModifiedEvent OnBeforeDirModified = {read=FOnBeforeDirModified, write=FOnBeforeDirModified};
	__property TBeforeFileDeleteEvent OnBeforeFileDelete = {read=FOnBeforeFileDelete, write=FOnBeforeFileDelete};
	__property TBeforeFileModifiedEvent OnBeforeFileModified = {read=FOnBeforeFileModified, write=FOnBeforeFileModified};
};


//-- var, const, procedure ---------------------------------------------------
#define AbCompoundFileVersion L"3.1"
static const System::Int8 sbSignatureSize = System::Int8(0x28);
static const System::Int8 sbVolumeLabelSize = System::Int8(0x28);
static const System::Int8 sbAllocationSizeSize = System::Int8(0x4);
static const System::Int8 sbVersionSize = System::Int8(0x4);
static const System::Int8 sbUpdateSize = System::Int8(0x1);
static const System::Int8 SizeOfSystemBlock = System::Int8(0x59);
static const System::Int8 rdEntryNameSize = System::Int8(0x1c);
static const System::Int8 rdEntryIDSize = System::Int8(0x4);
static const System::Int8 rdParentFolderSize = System::Int8(0x4);
static const System::Int8 rdEntryTypeSize = System::Int8(0x4);
static const System::Int8 rdAttributesSize = System::Int8(0x4);
static const System::Int8 rdStartBlockSize = System::Int8(0x4);
static const System::Int8 rdLastModifiedSize = System::Int8(0x8);
static const System::Int8 rdSizeSize = System::Int8(0x4);
static const System::Int8 rdCompressedSizeSize = System::Int8(0x4);
static const System::Int8 rdSizeOfDirEntry = System::Int8(0x40);
static const System::Int8 rdUnUsed = System::Int8(-2);
static const System::Int8 SizeOfRootDirBlock = System::Int8(0x40);
static const System::Int8 ftEndOfBlock = System::Int8(-1);
static const System::Int8 ftUnusedBlock = System::Int8(-2);
static const System::Word cfAllocationSize = System::Word(0x200);
}	/* namespace Abcompnd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ABCOMPND)
using namespace Abcompnd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AbcompndHPP
