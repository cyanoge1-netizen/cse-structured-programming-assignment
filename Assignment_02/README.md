# <p align="center">W3Schools Advanced C Features<br><sub>Assignment 02 — CSE 1101 Structured Programming Language</sub></p>

<p align="center">
  <a href="https://www.w3schools.com/c/c_date_time.php"><img src="https://raw.githubusercontent.com/github/explore/main/topics/c/c.png" width="80" alt="ANSI C Logo"/></a>
</p>

<h1 align="center">Assignment 2: W3Schools "C More" Section</h1>
<p align="center">Full Topic Solutions, Practical Examples & Systems Programming Concepts</p>

<p align="center">
  <a href="https://www.w3schools.com/c/c_date_time.php"><img src="https://img.shields.io/badge/Tutorial-W3Schools%20C%20More-04AA6D?style=for-the-badge&logo=w3schools&logoColor=white" alt="W3Schools C More"/></a>
  <a href="https://en.cppreference.com/w/c"><img src="https://img.shields.io/badge/Language-ANSI%20C%20(C99)-00599C?style=for-the-badge&logo=c&logoColor=white" alt="ANSI C"/></a>
  <a href="https://gcc.gnu.org/"><img src="https://img.shields.io/badge/Compiler-GCC%2011%2B-brightgreen?style=for-the-badge&logo=gnu-bash&logoColor=white" alt="GCC"/></a>
  <a href="https://www.sec.ac.bd/"><img src="https://img.shields.io/badge/College-SEC%20Sylhet-E23D28?style=for-the-badge&logo=googlemaps&logoColor=white" alt="SEC Official Website"/></a>
  <a href="https://www.sust.edu/"><img src="https://img.shields.io/badge/Affiliation-SUST-006A4E?style=for-the-badge" alt="SUST Official Website"/></a>
  <a href="https://github.com/cyanoge1-netizen"><img src="https://img.shields.io/badge/Student-Roll%2043%20(CSE--19)-informational?style=for-the-badge&logo=github&logoColor=white" alt="GitHub Profile"/></a>
  <a href="https://opensource.org/licenses/MIT"><img src="https://img.shields.io/badge/License-MIT-orange?style=for-the-badge" alt="MIT License"/></a>
</p>

---

## 📑 Table of Contents

* [📌 What is in this Assignment?](#-what-is-in-this-assignment)
* [📑 Complete Problem Index](#-complete-problem-index)
* [💡 Notes on What I Learned](#-notes-on-what-i-learned)
  * [1. Working with Date and Time (`time.h`)](#1-working-with-date-and-time-timeh)
  * [2. Random Numbers in C (`stdlib.h`)](#2-random-numbers-in-c-stdlibh)
  * [3. Preprocessor Macros](#3-preprocessor-macros)
  * [4. Organizing Code into Multiple Files](#4-organizing-code-into-multiple-files)
  * [5. Storage Classes](#5-storage-classes)
  * [6. Bitwise Operators & Bitmasking](#6-bitwise-operators--bitmasking)
  * [7. Fixed-Width Integers (`stdint.h`)](#7-fixed-width-integers-stdinth)
* [💻 How to Compile](#-how-to-compile)
  * [Single File](#single-file)
  * [Multi-File Programs](#multi-file-programs)
  * [Test Everything at Once](#test-everything-at-once)
* [👨‍🎓 Student Info](#-student-info)

---

## 📌 What is in this Assignment?

This directory contains code and practical implementations for the entire **C More** section of the [W3Schools C Tutorial](https://www.w3schools.com/c/c_date_time.php).

Instead of copy-pasting small snippets, I went through each of the 7 chapters in order, turned them into full runnable programs, and added realistic use cases (like a dice rolling game, a multi-file calculator with include guards, a file permission system using bitmasks, and memory-saving structs for embedded sensors).

Every single file compiles cleanly with `gcc -Wall -Wextra -lm` with zero warnings or errors.

---

## 📑 Complete Problem Index

| # | File Name | Topic | What the Code Does | Status |
|---|---|---|---|:---:|
| **01** | [`01_current_time_calendar.c`](./01_current_time_calendar.c) | Date & Time | Gets raw epoch timestamp using `time()` and prints a human-readable date string with `ctime()`. | `PASS` |
| **02** | [`02_localtime_breakdown_tm_struct.c`](./02_localtime_breakdown_tm_struct.c) | `struct tm` | Breaks down the timestamp into individual fields (year `+1900`, month `+1`, day, hour, min, sec). | `PASS` |
| **03** | [`03_formatted_datetime_strftime.c`](./03_formatted_datetime_strftime.c) | String Formatting | Formats date/time safely with `strftime()` into standard ISO, 12-hour AM/PM, and locale strings. | `PASS` |
| **04** | [`04_execution_time_measurement.c`](./04_execution_time_measurement.c) | Benchmarking | Measures how many CPU clock ticks and seconds a math loop takes using `clock()` and `difftime()`. | `PASS` |
| **05** | [`05_basic_rand_generator.c`](./05_basic_rand_generator.c) | Random Numbers | Shows default `rand()` behavior and why unseeded random numbers repeat every run. | `PASS` |
| **06** | [`06_seeded_random_generator.c`](./06_seeded_random_generator.c) | Seeding `srand` | Uses `srand(time(NULL))` once at startup so you get different numbers each run. | `PASS` |
| **07** | [`07_bounded_range_random_numbers.c`](./07_bounded_range_random_numbers.c) | Custom Ranges | Generates random numbers in custom ranges (`[0, 9]`, `[1, 100]`, `[-20, 45]`) using `%`. | `PASS` |
| **08** | [`08_dice_roll_simulation.c`](./08_dice_roll_simulation.c) | Game Simulation | Rolls a pair of 6-sided dice over multiple rounds, sums the values, and checks for doubles. | `PASS` |
| **09** | [`09_object_like_macros_constants.c`](./09_object_like_macros_constants.c) | `#define` Constants | Defines constants (`PI`, buffer sizes) and calculates circle and cylinder measurements. | `PASS` |
| **10** | [`10_function_like_macros.c`](./10_function_like_macros.c) | Macros with Arguments | Shows why parentheses are necessary in macros (demonstrates the `SQUARE(2 + 3)` bug). | `PASS` |
| **11** | [`11_conditional_compilation_debug.c`](./11_conditional_compilation_debug.c) | Conditional Compilation | Uses `#ifdef DEBUG_MODE` and `#ifndef` to toggle debug logging without performance penalty. | `PASS` |
| **12a** | [`12_calculator_module.h`](./12_calculator_module.h) | Header File | Calculator function declarations with `#ifndef` include guards to avoid redefinition errors. | `PASS` |
| **12b** | [`12_calculator_module.c`](./12_calculator_module.c) | Module Code | Implements the actual arithmetic functions (`add`, `subtract`, `multiply`, `divide`, `power`). | `PASS` |
| **12c** | [`12_calculator_main.c`](./12_calculator_main.c) | Main Driver | Main program that includes `12_calculator_module.h` and runs arithmetic operations. | `PASS` |
| **12d** | [`12_modular_calculator_demo.c`](./12_modular_calculator_demo.c) | Standalone Demo | Single-file demonstration of modular code principles for quick compilation. | `PASS` |
| **13** | [`13_auto_storage_class.c`](./13_auto_storage_class.c) | `auto` Keyword | Demonstrates local stack variable lifetime, scope, and inner block variable shadowing. | `PASS` |
| **14** | [`14_static_local_storage_class.c`](./14_static_local_storage_class.c) | `static` Local Variables | Compares regular vs `static` variables; keeps a running bank account balance. | `PASS` |
| **15** | [`15_register_storage_class.c`](./15_register_storage_class.c) | `register` Keyword | Explains CPU register storage hints and why taking their memory address (`&`) fails. | `PASS` |
| **16a** | [`16_extern_storage_class_data.c`](./16_extern_storage_class_data.c) | Global Data File | Defines global variables and helper functions intended to be shared across files. | `PASS` |
| **16b** | [`16_extern_storage_class_main.c`](./16_extern_storage_class_main.c) | `extern` Keyword | Declares external variables from another file and modifies them across translation units. | `PASS` |
| **16c** | [`16_extern_storage_class_demo.c`](./16_extern_storage_class_demo.c) | Single-File Extern Demo | Explains external linkage in a single file for self-contained testing. | `PASS` |
| **17** | [`17_bitwise_and_or_xor.c`](./17_bitwise_and_or_xor.c) | Bitwise `&`, `\|`, `^` | Shows truth tables with a custom binary printer to see bit-level operations in action. | `PASS` |
| **18** | [`18_bitwise_not_and_twos_complement.c`](./18_bitwise_not_and_twos_complement.c) | Bitwise `~` & Sign | Flips all bits with NOT (`~`) and verifies two's complement behavior (`~x == -(x + 1)`). | `PASS` |
| **19** | [`19_bitwise_shift_operators.c`](./19_bitwise_shift_operators.c) | Left/Right Shifts | Fast multiplication with `<<` and division with `>>` by powers of two. | `PASS` |
| **20** | [`20_bitwise_flags_and_permissions.c`](./20_bitwise_flags_and_permissions.c) | Permission Flags | Real-life use case: Granting, revoking, toggling, and checking file permissions with bitmasks. | `PASS` |
| **21** | [`21_fixed_width_integer_types.c`](./21_fixed_width_integer_types.c) | `<stdint.h>` Types | Shows exact byte sizes and ranges for `int8_t` through `uint64_t`. | `PASS` |
| **22** | [`22_fixed_width_memory_optimization.c`](./22_fixed_width_memory_optimization.c) | Memory Optimization | Telemetry struct with battery meter; saves 62.5% memory compared to generic `int`. | `PASS` |

---

## 💡 Notes on What I Learned

### 1. Working with Date and Time (`time.h`)
* `time(NULL)` returns the number of seconds since January 1, 1970 (Unix epoch).
* To access human-friendly values like month, year, or day, pass it to `localtime()`. This fills a `struct tm`.
* Watch out for two common quirks:
  * `tm_year` is years *since 1900*, so you must add `1900` to get the current year.
  * `tm_mon` is 0-indexed (`0` = January, `11` = December), so add `1` for the normal month number.
* `strftime()` is much safer than `ctime()` because you give it a fixed buffer size, preventing buffer overflows.

### 2. Random Numbers in C (`stdlib.h`)
* By default, `rand()` uses a fixed seed (`1`), meaning it generates the exact same numbers every time you run the program.
* Calling `srand(time(NULL))` at the start of `main()` seeds the generator with the current time, giving different numbers on every run.
* **Important:** Don't call `srand()` inside a loop. If the loop runs within the same second, `time(NULL)` won't change, and `rand()` will keep resetting to the same value.
* To get a number in range `[min, max]`:
  ```c
  int random_val = min + rand() % (max - min + 1);
  ```

### 3. Preprocessor Macros
* Macros are simple text substitutions that happen before the code is compiled.
* When writing parameterized macros, **always wrap arguments and the whole expression in parentheses**:
  ```c
  #define SQUARE(x) ((x) * (x))
  ```
  If you wrote `#define SQUARE(x) x * x`, then `SQUARE(2 + 3)` would expand to `2 + 3 * 2 + 3 = 11`, which is completely wrong.
* Use `#ifdef DEBUG` to add debug print statements that can easily be turned off for release builds.

### 4. Organizing Code into Multiple Files
In real projects, you don't dump everything into one file:
* **Header file (`.h`):** Put function prototypes and `#define` constants here. Always wrap header files with include guards (`#ifndef HEADER_H ... #endif`) so the compiler doesn't throw redefinition errors if included more than once.
* **Source file (`.c`):** Contains the actual function definitions. Includes its own `.h` file.
* **Main file (`main.c`):** Contains `main()`, includes the `.h` file, and uses the functions.
* **Compile them together:**
  ```bash
  gcc main.c calc.c -o my_program
  ```

### 5. Storage Classes
* **`auto`**: The default for any local variable. It lives on the stack while its function or block is executing and disappears when done.
* **`static`**: When used inside a function, the variable keeps its value across multiple function calls. It's stored in the program's data segment, not on the stack.
* **`register`**: A suggestion to the compiler to store the variable in a CPU register for faster access. You cannot use the `&` address operator on a register variable because registers don't have memory addresses.
* **`extern`**: Lets you access a global variable or function that was defined in another `.c` file.

### 6. Bitwise Operators & Bitmasking
Computers store integers in binary. Bitwise operators let you manipulate individual bits:
* `&` (AND): 1 only if both bits are 1.
* `|` (OR): 1 if either bit is 1.
* `^` (XOR): 1 if the bits are different.
* `~` (NOT): Inverts all bits. In two's complement, `~x` equals `-(x + 1)`.
* `<<` (Left Shift): Shifts bits left, which multiplies by powers of 2.
* `>>` (Right Shift): Shifts bits right, which divides by powers of 2.

**Bitmask Permission Example:**
```c
#define READ  (1 << 0) // 0001
#define WRITE (1 << 1) // 0010
#define EXEC  (1 << 2) // 0100

int perms = READ | WRITE; // Grant READ and WRITE
perms |= EXEC;            // Add EXEC
perms &= ~WRITE;          // Revoke WRITE
if (perms & READ) { ... } // Check if READ is allowed
```

### 7. Fixed-Width Integers (`stdint.h`)
On some systems, an `int` might be 2 bytes, while on others it is 4 bytes. If you need exact sizes, `<stdint.h>` provides types with fixed widths:
* `int8_t` / `uint8_t` (1 byte, 8 bits: -128..127 or 0..255)
* `int16_t` / `uint16_t` (2 bytes, 16 bits)
* `int32_t` / `uint32_t` (4 bytes, 32 bits)
* `int64_t` / `uint64_t` (8 bytes, 64 bits)

In embedded systems or sensor devices (like the battery monitor in problem 22), using `uint8_t` instead of a 4-byte `int` for percentage (0–100) saves 75% memory on that field alone!

---

## 💻 How to Compile

### Single File
```bash
# Example: Compile formatted date time program
gcc -Wall -Wextra 03_formatted_datetime_strftime.c -lm -o 03_formatted_datetime_strftime
./03_formatted_datetime_strftime
```

### Multi-File Programs
```bash
# Problem 12: Modular Calculator
gcc -Wall -Wextra 12_calculator_main.c 12_calculator_module.c -lm -o 12_calculator
./12_calculator

# Problem 16: External Storage Class
gcc -Wall -Wextra 16_extern_storage_class_main.c 16_extern_storage_class_data.c -lm -o 16_extern_storage_class
./16_extern_storage_class
```

### Test Everything at Once
```bash
for f in [0-2]*.c; do
    if [ "$f" = "12_calculator_main.c" ]; then
        gcc -Wall -Wextra 12_calculator_main.c 12_calculator_module.c -lm -o test_bin && ./test_bin > /dev/null
    elif [ "$f" = "12_calculator_module.c" ] || [ "$f" = "16_extern_storage_class_data.c" ]; then
        gcc -Wall -Wextra -c "$f" -o /dev/null
        continue
    elif [ "$f" = "16_extern_storage_class_main.c" ]; then
        gcc -Wall -Wextra 16_extern_storage_class_main.c 16_extern_storage_class_data.c -lm -o test_bin && ./test_bin > /dev/null
    else
        gcc -Wall -Wextra "$f" -lm -o test_bin && ./test_bin > /dev/null
    fi
    rm -f test_bin
    echo "OK: $f"
done
```

---

## 👨‍🎓 Student Info

* **Student:** [Suleman Ahmed Shuvo](https://github.com/cyanoge1-netizen)
* **Roll:** 43
* **Batch:** CSE-19
* **Session:** 2025-26
* **Department:** [Computer Science & Engineering](https://www.sec.ac.bd/)
* **College:** [Sylhet Engineering College (SEC)](https://www.sec.ac.bd/)
* **Affiliation:** [Shahjalal University of Science & Technology (SUST)](https://www.sust.edu/)
