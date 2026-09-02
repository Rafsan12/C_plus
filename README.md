# Phitron C++

Practice code and notes from the Phitron C++ course. Each module folder holds the
programs written for that module, plus the `input.txt` / `output.txt` files used to
run them with file redirection.

## Repository Structure

| Folder | Contents |
| --- | --- |
| `setup/` | Environment check - a "Hello world" program to verify the compiler and editor setup |
| `Module_1/` | C++ basics: input/output, typecasting, conditions, `setprecision`, reading until EOF |
| `Module_2/` | Dynamic memory: dynamic arrays with `new`, `delete[]`, and pointer behavior |
| `Module_3/` | Practice problems and class/object basics |
| `Module_4/` | String constructors, sorting, range loops, string streams, and class constructors |
| `Module_5/` | Arrays of objects |

### Module_1

| File | Topic |
| --- | --- |
| `output.cpp` | Printing with `std::cout` |
| `input.cpp` | Reading with `cin`, char-to-int typecasting |
| `condition_1.cpp`, `condition_2.cpp` | Even/odd check with the ternary operator |
| `Setprecision.cpp` | Fixed-point output with `<iomanip>` |
| `EOF_.cpp` | Reading pairs of values until end of input |

### Module_2

| File | Topic |
| --- | --- |
| `dynamic-array.cpp` | Allocating an array of size `n` at runtime with `new` |
| `increase.cpp` | Allocating and deleting a dynamic array |

### Module_3

| File | Topic |
| --- | --- |
| `claa_object.cpp` | Creating `Student` objects and reading names with `getline` |
| `G_Palindrome_Array.cpp` | Checking whether an integer array is a palindrome |
| `W_Mathematical_Expression.cpp` | Validating arithmetic expressions and printing the corrected result |

### Module_4

| File | Topic |
| --- | --- |
| `class_string.cpp` | Class constructor using `std::string` fields |
| `String_Constructor.cpp` | Creating strings with constructor syntax |
| `sort_string.cpp` | Sorting characters in a string with `sort` |
| `Reverse_string.cpp` | Printing words in reverse order using recursion and `stringstream` |
| `range.loop.cpp` | Iterating over string characters with a range-based loop |

### Module_5

| File | Topic |
| --- | --- |
| `array_of_object.cpp` | Reading and printing an array of `Student` objects |

## Building And Running

Compile a single file with g++:

```bash
g++ Module_1/input.cpp -o input
```

Run it, feeding input from `input.txt` and writing to `output.txt`:

```bash
./input < Module_1/input.txt > Module_1/output.txt
```

On Windows the compiled program is `input.exe`, so run `./input.exe` instead.

Compiled binaries (`*.exe`, `*.out`, `*.o`, `*.obj`) are ignored by git - see
[.gitignore](.gitignore).

## Notes

- Several examples use `#include <bits/stdc++.h>`, which is a GCC-specific header.
  It works with g++/MinGW but not with MSVC or Clang on macOS.
