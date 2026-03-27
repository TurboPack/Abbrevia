LZMA SDK v26.00

Original download available from https://7-zip.org/a/lzma2600.7z

### Compiling

Compile Win32 using C++Builder in the "RAD Studio Command Prompt" environment using:
    bcc32 -q -c -u- -w-8004 -w-8065 -n..\..\source\Win32\ *.c

Compile Win64 using C++Builder in the "RAD Studio Command Prompt" environment using:
    bcc64 -q -c -Wno-int-to-void-pointer-cast -output-dir ..\..\source\Win64 *.c

Compile WinARM64EC in MSYS2's MINGW64 environment with the llvm-mingw package.
    arm64ec-w64-mingw32-clang.exe -Wno-unknown-attributes -c *.c
    arm64ec-w64-mingw32-ar.exe r ../../source/WinARM64EC/lzma.a *.o

(Formerly) Compile Win64 with Visual Studio
    cl -c -nologo -GS- -Z7 -Gs32768 -Ox *.c

### Changes from upstream

Added bcc32 compatible no-op version of CpuArch.c::z7_x86_cpuid_subFunc
