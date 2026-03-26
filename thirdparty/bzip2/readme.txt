bzip2 SDK v1.0.8

Original download available from https://sourceware.org/pub/bzip2/bzip2-latest.tar.gz

### Win32
  Compile in the "RAD Studio Command Prompt" environment using:
    bcc32 -q -c -u- -w-8004 -w-8008 -w-8057 -w-8066 -w-8068 -DBZ_NO_STDIO -n..\..\source\Win32 *.c

### Win64
  Compile in the "x64 Tools Command Prompt for VS" environment using:
    cl -DWIN32 -Ox -D_FILE_OFFSET_BITS=64 -nologo -DBZ_NO_STDIO -GS- -Z7 -Gs32768 -Fo..\..\source\Win64\ -c *.c 

### WinARM64EC
  Compile in MSYS2's MINGW64 environment with the llvm-mingw package.
    1. Launch the MSYS2 MINGW64 environment
    2. $ export PATH=/c/llvm-mingw/bin:$PATH
    3. $ arm64ec-w64-mingw32-clang.exe -D_FILE_OFFSET_BITS=64 -Wall -Winline -O2 -g -DBZ_NO_STDIO -c -Wno-unused-but-set-variable *.c
    4. $ arm64ec-w64-mingw32-ar.exe r ../../source/WinARM64EC/bz2.a *.o
