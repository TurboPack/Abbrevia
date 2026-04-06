WavPack v5.90.0

Compilation for Win32 and Win64 should be done using the "RAD Studio Command Prompt" with C++Builder installed.
It uses a for loop rather than compiling all of the .c files at once to add the "WavPack_" prefix to the object files.

### Win32

    for %f in (*.c) do bcc32 -c -q -u- -O2 -w-8004 -w-8012 -w-8057 -o "..\..\source\Win32\WavPack_%~nf.obj" "%f"

### Win64

    for %f in (*.c) do bcc64 -c -q -Wno-implicit-function-declaration -o "..\..\source\Win64\WavPack_%~nf.obj" "%f"

### WinARM64EC

  Compile in MSYS2's MINGW64 environment with the llvm-mingw package.

    arm64ec-w64-mingw32-clang -c *.c
    arm64ec-w64-mingw32-ar.exe r ../../source/WinARM64EC/wavpack.a *.o

  Requires adding the (new, non-standard) bitscan_reverse.h header to wavpack_local.h.
  
  Can be compiled using Visual Studio's "arm64 Tools Command Prompt for VS" environment, but that fails with "_fltused" linker errors.
  
    cl -c *.c /O2 /arm64EC /Zl
    link -lib -nologo -machine:arm64ec -out:..\..\source\WinARM64EC\wavpack.a *.obj