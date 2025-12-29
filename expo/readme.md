# Using Multiple C Files (Beginner Guide)

This project demonstrates how to reuse code across multiple C files.
C does not have imports like Python — instead it uses **header files** and
**compile-time linking**.


## Project Structure

project/
│
├── main.c
├── math_utils.c
└── math_utils.h



## File Explanation

### math_utils.h
- Contains **function declarations**
- Acts as an interface
- Included using `#include`

```c
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

int add(int a, int b);
int multiply(int a, int b);

#endif
```

### math_utils.c

- Contains function definitions
- Implements logic declared in the header

```c
#include "math_utils.h"

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
```

### main.c
- Uses functions from math_utils.c
- Includes the header file

```c
#include <stdio.h>
#include "math_utils.h"

int main() {
    printf("%d\n", add(3, 4));
    printf("%d\n", multiply(3, 4));
    return 0;
}
```

### Compile and Run
```bash
gcc main.c math_utils.c -o program
./program
```

## Common Mistakes

- ❌ Including `.c` files directly using `#include`
- ❌ Forgetting to compile all `.c` files together
- ❌ Writing function implementations inside `.h` files
- ❌ Missing header guards in `.h` files
- ❌ Mismatched function declarations and definitions
- ❌ Assuming `#include` works like Python imports



## Key Rules to Remember

- `.h` files contain **function declarations**
- `.c` files contain **function definitions**
- `#include` only copies text (declarations)
- Actual code linking happens during compilation
- Every function must be defined exactly once
- Header files should never contain `main()`


## How Compilation Works in C

1. **Preprocessing**
   - Handles `#include`, `#define`, and macros
   - Header files are textually copied into `.c` files

2. **Compilation**
   - Each `.c` file is compiled separately into object files (`.o`)
   - Syntax and type checking happens here

3. **Linking**
   - All object files are linked together
   - Function calls are connected to their definitions
   - Final executable is created

---


