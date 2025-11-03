# C Programming Learning Notes

### 1. Introduction to C
- **Definition**: C is a general-purpose, procedural, compiled programming language.
- **Key Characteristics**:
  - Low-level access to memory (through pointers).
  - Fast and efficient — minimal runtime overhead.
  - Portable — same code can run on many systems with minor changes.
  - Foundation language — many modern languages (C++, Java, Rust, Go) are built upon C’s core ideas.
  - Compiled — C code is converted into machine code before running.
- **C Compilation Process**:
  | Stage             | Tool  | Description                                   |
  | ----------------- | ----- | --------------------------------------------- |
  | 1️⃣ Preprocessing | `cpp` | Handles `#include`, `#define`, macros.        |
  | 2️⃣ Compilation   | `cc`  | Converts C code → assembly.                   |
  | 3️⃣ Assembly      | `as`  | Converts assembly → object code (.o).         |
  | 4️⃣ Linking       | `ld`  | Combines all object files → final executable. |
  - Commands to manually execute step by step:
    - `gcc -E hello.c -o hello.i`   # Preprocessed file
    - `gcc -S hello.c -o hello.s`   # Assembly code
    - `gcc -c hello.c -o hello.o`   # Object file
- **Structure of a C Program**:

  #include <stdio.h> // Standard input/output library

  int main(){
      printf("Hello Som");
      return 0;
  }
  

### 2. Data Types and Constants
- C is a statically typed language; every variable must have a type before use.
- **Data Types**:
  | Type     | Size (typical) | Example   | Format Specifier |
  | -------- | -------------- | --------- | ---------------- |
  | `int`    | 4 bytes        | `42`      | `%d`             |
  | `float`  | 4 bytes        | `3.14`    | `%f`             |
  | `double` | 8 bytes        | `3.14159` | `%lf`            |
  | `char`   | 1 byte         | `'A'`     | `%c`             |
- **Constants**:
  - A value that does not change during program execution.
  - Two ways:
    1. Using `#define`: Preprocessor constant, text substitution, no runtime memory.
       - Format: `#define NAME value`
    2. Using `const` keyword: Read-only variable, uses memory, can get address.
  - Example:
    
    #define APPLE 9.99
    const int DAYS_IN_WEEK = 7;
    

### 3. Mini Project: Student Grade Calculator
- **Problem Statement**: Write a program that asks for student name, roll number, marks in 3 subjects, calculates total, average percentage, and CGPA, then displays neatly.
- **Code Example**:

  #include <stdio.h>

  int main(){
      const float conversionValue = 9.8;
      char name[20];
      int rollNo, maths, sci, art;

      printf("Welcome to the Student grade Calculator\n");
      scanf("%s %d %d %d %d", &name, &rollNo, &maths, &sci, &art);

      int total = maths + sci + art;
      int average = total / 3;
      int cgpa = (average * conversionValue) / 100;

      printf("Total: %d, Average: %d, CGPA: %d\n", total, average, cgpa);
      return 0;
  }
  

### 4. Operators and Expressions
- **Expression**: Valid combo of operands (variables/constants) + operators.
- **Operators**:
  - Arithmetic: +, -, *, /, %
  - Relational: ==, !=, >, <, >=, <=
  - Logical: && (and), || (or), ! (not)
  - Assignment: =, +=, -=, *=, /=, %=
  - Increment/Decrement: ++, --
  - Bitwise: &, ^, ~, <<, >>
  - Conditional (Ternary): ? :
  - Comma: ,
  - sizeof: Returns size in bytes
  - Pointer: * (dereference), & (address-of)
- **Example**:
  ```c
  int age;
  scanf("%d", &age);
  char *msg = (age >= 18) ? "Adult" : "Minor";
  printf("%s\n", msg);
  ```

### 5. Control Flow
- Determines the order of statement execution.
- **If-Else**:
  ```c
  if (condition) {
      // code
  } else if (condition) {
      // code
  } else {
      // code
  }
  ```
- **Switch**:
  ```c
  switch (day) {
      case 1: printf("Monday\n"); break;
      case 2: printf("Tuesday\n"); break;
      default: printf("Invalid\n");
  }
  ```
- **Loops**:
  - While: `while (condition) { code }`
  - For: `for (int i = 0; i < 10; i++) { code }`
  - Continue: Skip iteration
  - Break: Exit loop

### 6. Functions
- Block of code for a specific task.
- **Syntax**: `return_type function_name(parameter_list) { body }`
- C uses **Call by Value**: Copies arguments; originals not modified.
- **Pass by Reference**: Use pointers to modify originals.
- **Stack Memory**: Arguments and locals stored on stack; return address saved.
- **Example**:
  ```c
  void swap(int *x, int *y) {
      int temp = *x;
      *x = *y;
      *y = temp;
  }
  ```

### 7. Storage Classes and Variable Lifetime
- Decides where, how long, and how variables live in memory.
- **Keywords**:
  | Keyword  | Scope       | Lifetime          | Storage       | Default Value |
  | -------- | ----------- | ----------------- | ------------- | ------------- |
  | auto     | Local       | Function block    | Stack         | Garbage       |
  | register | Local       | Function block    | CPU Register  | Garbage       |
  | static   | Local/Global| Entire program    | Data Segment  | 0             |
  | extern   | Global      | Entire program    | Data Segment  | 0             |
- **Memory Layout**:
  ```
  | Code Segment (Functions)           |
  |------------------------------------|
  | Data Segment (static, extern vars) |
  |------------------------------------|
  | Stack (auto, register vars)        |
  |------------------------------------|
  | Heap (malloc/free)                 |
  ```

## Common Libraries
- Libraries are collections of precompiled functions, macros, and definitions.
- **Common Ones**:
  - `<stdio.h>`: Standard I/O (printf, scanf, fopen)
  - `<stdlib.h>`: Utilities (malloc, exit, rand)
  - `<string.h>`: String handling (strlen, strcpy)
  - `<math.h>`: Math functions (sin, sqrt, pow)
  - `<ctype.h>`: Character handling (isalpha, tolower)
  - `<time.h>`: Time and date (time, clock)
  - `<stdbool.h>`: Boolean type (bool, true, false)
  - `<stdint.h>`: Fixed-width integers (int8_t, uint32_t)
  - `<limits.h>`: Integer limits
  - `<float.h>`: Floating-point limits
  - `<assert.h>`: Diagnostics (assert)
  - `<errno.h>`: Error codes (errno, perror)
  - `<signal.h>`: Signal handling (signal, raise)
  - `<setjmp.h>`: Jump context (setjmp, longjmp)
  - `<stdarg.h>`: Variable arguments (va_start, va_arg)

