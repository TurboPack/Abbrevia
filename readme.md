# Abbrevia

Version 5.0  
December 6, 2011  
[Home Page](http://tpabbrevia.sourceforge.net/)

* * *

## Table of contents

  * Introduction
  * Packages
  * Installation
  * Support and feedback
  * Development sources
  * Getting involved
  * License
  * Changes from 4.0

* * *

## Introduction

Abbrevia is a compression toolkit for Embarcadero Delphi, C++ Builder, and
Kylix and FreePascal. It supports PKZip, Microsoft CAB, tar, gzip, bzip2 and
zlib compression formats, and the creation of self-extracting executables.
It includes several visual components that simplify displaying zip files.

Abbrevia 5.0 adds a number of new features and support for more platforms:

  * RAD Studio XE2 support, including both 64-bit Windows and OS X
  * FreePascal support on Windows, OS X, and Linux
  * TAbTreeView and TAbListView VCL controls that provide an Explorer/
    WinZip-like interface
  * ZIP64 support, for archives larger than 2GB
  * Improved split/spanned zip support
  * Expanded LZMA support
  * Unicode filenames in tar and gzip archives

This is a source-only release. It includes design-time and run-time packages
for Delphi 6 through Delphi XE2, C++Builder 2009 through XE2, and Kylix 3.
FreePascal is supported, but runtime/design time packages are not included.
The LZMA, PPMd, and WavPack algorithms are only supported on Delphi/
C++Builder for Windows (32 and 64-bit).

* * *

## Packages

Abbrevia includes the following packages:

  * **Abbrevia.bpl**: Runtime non-visual components. `TAbZipBrowse`, 
    `TAbZipKit`, `TAbMakeCab`, etc.
  * **AbbreviaVCL.bpl**: Runtime visual components. `TAbTreeView`, 
    `TAbListView`, `TAbProgressMeter`.
  * **AbbreviaVCLDesign.bpl**: Designtime support.
  * **AbbreviaCLX.bpl**, **AbbreviaCLXDesign.bpl** (Delphi 6/7): CLX visual 
    components.

`$LIBSUFFIX` is used, so each .bpl/.bpi will have a version number after it
corresponding to the compiler version (e.g. 160 for Delphi XE2).

The Kylix 3 `AbbreviaCLX` package includes all of the non-visual runtime
units, and the `Abbrevia` package is not included separately.

* * *

## Installation

To install TurboPower Abbrevia into your IDE:

  1. Unzip the release files into a directory (e.g., d:\abbrevia).
  2. Start Delphi or C++Builder.
  3. Add the source subdirectory (e.g. d:\abbrevia\source) to the Delphi
     Library path. When using XE2 or later, add it to all platforms.
  4. If using C++Builder, add the source subdirectory to C++Builder's Include 
     and Library paths.
  5. Open the project group in the packages directory that corresponds to the 
     IDE being used (e.g. "Delphi XE2.groupproj").
  6. Start at the top of the project group and compile each package in turn. If 
     using C++Builder, install each one after compiling.
  7. Select the "AbbreviaVCLDesign" package and install it. The IDE should 
     notify you that the components have been installed. If you are using 
     Delphi 7 you can install "AbbreviaCLXDesign" as well to get CLX designtime 
     support.
  8. Make sure the PATH environmental variable contains the directory in which 
     the compiled packages (i.e. BPL or DPL files) were placed.

* * *

## Support and feedback

[Support forums][] are available on the SourceForge project site.

Bug reports can be entered in the [bug tracker][]. If possible please include a
small test case that reproduces the issue. Sample files can be attached to the
bug report, and confidential data can be emailed to the project administrator.

If you have something you would like to see in the product feel free to add
[feature requests][].

  [Support forums]: https://sourceforge.net/projects/tpabbrevia/forums
  [Bug tracker]: http://sourceforge.net/tracker/?atid=529778&group_id=71001&func=browse
  [Feature requests]: http://sourceforge.net/tracker/?atid=529781&group_id=71001&func=browse

* * *

## Development sources

The current source code is available in the Subversion [repository][]. The code
here may not be as stable or tested as the official releases, but may include
bug fixes or new features not yet included in the downloadable releases.

The repository also includes [DUnit][] tests, the source code to the third-party
libraries, and the Help source code.

  [Repository]: https://sourceforge.net/scm/?type=svn&group_id=71001
  [DUnit]: http://dunit.sourceforge.net/

* * *

## Getting involved

If you want to help make Abbrevia better, there are several ways to get
involved. We welcome help with features and bug fixes. Just look in the issue
tracker to see what's needed. We're also looking for help for:

  * C++Builder maintainer
  * FreePascal maintainer
  * Webmaster
  * Documentation
  * Examples

* * *

## License

Abbrevia is licensed under the [Mozilla Public License][], version 1.1. It can
be used in commercial and closed-source applications provided any changes to 
Abbrevia units are made available electronically.

The [WavPack][] library used for zipx decompression has its own license,
included as "WavPack License.txt". Redistribution requires a copyright notice
in your documentation or elsewhere in your distribution.  WavPack support can
be removed by disabling the **UnzipZipxSupport** or **UnzipWavPackSupport**
conditional define in **AbDefine.inc**.

  [Mozilla Public License]: http://www.mozilla.org/MPL/MPL-1.1.html
  [WavPack]: http://www.wavpack.com/

* * *

## Changes from 4.0

These are the most significant features, fixes and changes made since v4.0.
Information on earlier versions is available in the full
[changelog](http://tpabbrevia.sourceforge.net/Changelog).

### Features

  * Added support for Delphi/C++Builder XE2, including the 64-bit Windows and 
    OS X platforms.
  * Added support for FreePascal 2.4/2.6 on Windows, OS X, and Linux.
  * Added **TAbTreeView** and **TAbListView** VCL controls that provide an 
    Explorer/WinZip-like interface, and ComCtrlsDemo Delphi example to 
    demonstrate their usage.
  * Added ZIP64 support (reading/writing zip archives larger than 2GB, 
    containing files larger than 2GB, or containing more than 65K files).
  * Significantly improved split/spanned zip support.
  * Added LZMA buffer-to-buffer compression/decompression (**LzmaEncodeBuffer** 
    and **LzmaDecodeBuffer**) and compression/decompression stream descendants 
    (**TAbLZMACompressionStream** and **TAbLZMADecompressionStream**). Thanks 
    to Pierre le Riche.
  * Added support for tar and gzip archives containing filenames encoded in the
    system ANSI and OEM codepage and UTF-8.  New archives are written using
    UTF-8.
  * Added icon/text to RAD Studio's splash screen and about box. Thanks to 
    Lance Rasmussen.
  * Added VCL TAbProgressBar control that can replace TAbMeter.
  * Added 64-bit COM dll and support for per-user registration.

### API Changes

  * Renamed `LzEncode/LzDecode` to `LzmaEncodeStream/LzmaDecodeStream`.
  * Renamed `LzmaDecode` to `LzmaDecodeStream`.
  * Various changes due to split/spanned zip changes (see below).

### Bug Fixes

  * Fixed support for opening paths with a "\\?\" prefix.
  * Fixed buffer overflow in AbUtils.pas.
  * Fixed freshening/replacing items using absolute paths.
  * Fixed CAB files created with Delphi 2009 and later incorrectly including 
    the "has next volume" flag.
  * Fixed Delphi 6 support. Thanks to Peter Luijer.
  * Fixed `AbFindFiles` so it finds system and hidden folders if the SearchAttr 
    parameter includes them [3372355].
  * Fixed hang when trying to extract files that cross CAB boundaries when the 
    next cab is not available [3370538].
  * Fixed extracting CAB archives so OnProcessItemFailure isn't called after a 
    successful extraction.
  * Fixed LZMA support for streams larger than 2GB.
  * Fixed `AbGetDriveFreeSpace` buffer overflow and fixed support for free 
    space larger than 2GB.
  * Fixed support for modifying SFX zips with non-native stubs (Linux on 
    Windows and vice versa).
  * Fixed `TAbBitBucketStream` so it doesn't fault on writes larger than the 
    buffer size, and supports sizes over 2GB.
  * Zip local file headers are now preserved when copying unmodified files to a 
    new archive.
  * Local file headers are no longer copies of the central directory headers, 
    since many of the defined extra data fields have different values in the 
    two locations.
  * Fixed IZipKit (COM) support for enumerations (for each).

### Split/Spanned Zip Changes

  * #### Bug Fixes

    * Added support for reading/writing unequally sized spans.
    * Split/spanned zips are now written to the final location as they're 
      compressed, rather than writing everything to a virtual memory stream 
      first.
    * Fixed writing headers that can't be spanned so they trigger a new span if 
      necessary.

  * #### API Changes

    * Converting from an unspanned archive to a spanned one is no longer 
      supported.
    * `OnRequestImage`'s span numbers are now 1-based instead of 0-based to 
      match `OnRequestNthDisk`.
    * `OnArchiveSaveProgress` is now called at the same time as 
      `OnArchiveProgress`, since there isn't a lengthy copy after a spanned 
      archive is written.
    * `TAbSpanStream` has been replaced by `TAbSpanReadStream` and 
      `TAbSpanWriteStream`.
