WavPack v5.90.0

Compilation for Win32 and Win64 should be done using the "RAD Studio Command Prompt" with C++Builder installed.
It uses a for loop rather than compiling all of the .c files at once to add the "WavPack_" prefix to the object files.

### Win32

  for %f in (*.c) do bcc32 -c -q -u- -O2 -w-8004 -w-8012 -w-8057 -o "..\..\source\Win32\WavPack_%~nf.obj" "%f"

### Win64

  for %f in (*.c) do bcc64 -c -q -Wno-implicit-function-declaration -o "..\..\source\Win64\WavPack_%~nf.obj" "%f"
