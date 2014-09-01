<%
  ' Abbrevia ZipKit Constants
  ' Copyright (c) 1999 TurboPower Software Company
  
  ' TArchiveAction constants
  const aaFailed                   = &h00000000
  const aaNone                     = &h00000001
  const aaAdd                      = &h00000002
  const aaDelete                   = &h00000003
  const aaFreshen                  = &h00000004
  const aaMove                     = &h00000005
  const aaStreamAdd                = &h00000006

  ' TArchiveStatus constants
  const asInvalid                  = &h00000000
  const asIdle                     = &h00000001
  const asBusy                     = &h00000002

  ' TErrorClass constants
  const eclAbbrevia                = &h00000000
  const eclInOutError              = &h00000001
  const eclFileError               = &h00000002
  const eclFileCreateError         = &h00000003
  const eclFileOpenError           = &h00000004
  const eclOther                   = &h00000005

  ' TFileAttributes constants
  const faReadOnly                 = &h00000001
  const faHidden                   = &h00000002
  const faSysFile                  = &h00000004
  const faVolumeID                 = &h00000008
  const faDirectory                = &h00000010
  const faArchive                  = &h00000020

  ' TProcessType constants
  const ptAdd                      = &h00000000
  const ptDelete                   = &h00000001
  const ptExtract                  = &h00000002
  const ptFreshen                  = &h00000003
  const ptMove                     = &h00000004
  const ptReplace                  = &h00000005

  ' TStoreOptions constants
  const soStripDrive               = &h00000001
  const soStripPath                = &h00000002
  const soRemoveDots               = &h00000004
  const soRecurse                  = &h00000008
  const soFreshen                  = &h00000010
  const soReplace                  = &h00000020

  ' TZipCompressionMethod constants
  const cmStored                   = &h00000000
  const cmShrunk                   = &h00000001
  const cmReduced1                 = &h00000002
  const cmReduced2                 = &h00000003
  const cmReduced3                 = &h00000004
  const cmReduced4                 = &h00000005
  const cmImploded                 = &h00000006
  const cmTokenized                = &h00000007
  const cmDeflated                 = &h00000008
  const cmEnhancedDeflated         = &h00000009
  const cmDCLImploded              = &h0000000A
  const cmBestMethod               = &h0000000B

  ' TZipDeflationOption constants
  const doInvalid                  = &h00000000
  const doNormal                   = &h00000001
  const doMaximum                  = &h00000002
  const doFast                     = &h00000003
  const doSuperFast                = &h00000004

  ' TZipDictionarySize constants
  const dsInvalid                  = &h00000000
  const ds4K                       = &h00000001
  const ds8K                       = &h00000002

  ' TZipExtractOptions constants
  const eoCreateDirs               = &h00000001
  const eoRestorePath              = &h00000002

  ' TZipSupportMethod constants
  const smStored                   = &h00000000
  const smDeflated                 = &h00000001
  const smBestMethod               = &h00000002

  ' TErrorCode constants
  const ecDuplicateName            = &h00000000
  const ecInvalidPassword          = &h00000001
  const ecNoSuchDirectory          = &h00000002
  const ecUnknownCompressionMethod = &h00000003
  const ecUserAbort                = &h00000004
  const ecZipBadCRC                = &h00000005
  const ecZipVersionNumber         = &h00000006
  const ecSpannedItemNotFound      = &h00000007

  ' Compression Method Names Array
  cmNames = array("Stored", "Shrunk", "Reduced1", "Reduced2", "Reduced3", "Reduced4", "Imploded", _
                  "Tokenized", "Deflated", "Enh-Deflated", "DCLImploded", "BestMethod")
%>