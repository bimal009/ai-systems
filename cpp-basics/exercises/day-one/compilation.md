# How C++ Compiles Code

1. Each C++ source file (`.cpp`) is processed separately.

2. First, the **preprocessor** handles directives such as:

   - `#include`
   - `#define`
   - `#if`
   - `#ifdef`
   - `#elif`

   For `#include`, you can roughly think of it as copying the contents of the included header into the current source file.

3. Then the **compiler** translates the preprocessed C++ code into assembly code.

4. The **assembler** converts the assembly code into machine code, which is ultimately represented as binary bits (`0` and `1`).

5. That machine code is stored inside an object file such as `.o` or `.obj`.

6. The **linker** combines the object files and required libraries into one executable file.

7. The operating system then runs the executable.

## Compilation Flow

```text
C++ Source
   ↓
Preprocessor
   ↓
Compiler
   ↓
Assembly
   ↓
Assembler
   ↓
Object File
   ↓
Linker
   ↓
Executable
   ↓
Run
```