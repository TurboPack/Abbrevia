7-zip SDK v26.0 PPMd
https://7-zip.org/
Public Domain

### Win32

  Compile using the "RAD Studio Command Prompt" with C++Builder installed:
    bcc32 -w-8012 -w-8004 -u- -c -n..\..\source\Win32 *.c

  Compiling requires setting these macros to empty values:

    7zTypes.h: MY_ALIGN(n)
    CpuArch.h: MY_CPU_pragma_pack_push_1, MY_CPU_pragma_pop

### Win64
    
  Compile using the "RAD Studio Command Prompt" with C++Builder installed:
    bcc64 -c -q -output-dir ..\..\source\Win64 *.c

### WinARM64EC

  Compile in MSYS2's MINGW64 environment with the llvm-mingw package.
    arm64ec-w64-mingw32-clang -c *.c
    arm64ec-w64-mingw32-ar.exe r ../../source/WinARM64EC/ppmd.a *.o
