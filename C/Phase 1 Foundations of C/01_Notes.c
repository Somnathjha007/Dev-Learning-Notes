/* 
Def : C is a general-purpose, procedural, compiled programming language

⚙️ Key Characteristics
Low-level access to memory (through pointers).
Fast and efficient — minimal runtime overhead.
Portable — same code can run on many systems with minor changes.
Foundation language — many modern languages (C++, Java, Rust, Go) are built upon C’s core ideas.
Compiled — C code is converted into machine code before running.
*/

/*
The C Compilation Process
| Stage             | Tool  | Description                                   |
| ----------------- | ----- | --------------------------------------------- |
| 1️⃣ Preprocessing | `cpp` | Handles `#include`, `#define`, macros.        |
| 2️⃣ Compilation   | `cc`  | Converts C code → assembly.                   |
| 3️⃣ Assembly      | `as`  | Converts assembly → object code (.o).         |
| 4️⃣ Linking       | `ld`  | Combines all object files → final executable. |

Commands to manually execute step byt step
gcc -E hello.c -o hello.i   # Preprocessed file
gcc -S hello.c -o hello.s   # Assembly code
gcc -c hello.c -o hello.o   # Object file

*/

// Structure of C program

#include <stdio.h> // Standard input/output library

// void main(){
//     printf("Hello Som");
// }

// Or Int main with a return integer value

int main(){
    printf("Hello Som");
    return 0;
}