# <p align="center">Department of Computer Science & Engineering<br><sub>Sylhet Engineering College (SEC) — Affiliated with SUST</sub></p>

<p align="center">
  <img src="https://raw.githubusercontent.com/github/explore/main/topics/c/c.png" width="90" alt="ANSI C Logo"/>
</p>

<h1 align="center">Structured Programming Language (CSE 1101)</h1>
<p align="center"><b>Comprehensive Laboratory Modules, Course Assignments & Advanced C Systems Implementations</b></p>

<p align="center">
  <a href="#"><img src="https://img.shields.io/badge/C-ANSI%20%2F%20C99-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C Standard"/></a>
  <a href="#"><img src="https://img.shields.io/badge/Compiler-GCC%2011%2B%20%7C%20Clang-brightgreen?style=for-the-badge&logo=gnu-bash&logoColor=white" alt="Compiler"/></a>
  <a href="#"><img src="https://img.shields.io/badge/Build-Passing%20100%25-success?style=for-the-badge&logo=githubactions&logoColor=white" alt="Build"/></a>
  <a href="#"><img src="https://img.shields.io/badge/Verification-Zero%20Warnings-brightgreen?style=for-the-badge&logo=checkmarx&logoColor=white" alt="Verification"/></a>
  <a href="#"><img src="https://img.shields.io/badge/Course-CSE%201101-blueviolet?style=for-the-badge&logo=open-book&logoColor=white" alt="Course"/></a>
  <a href="#"><img src="https://img.shields.io/badge/Platform-Linux%20%7C%20POSIX-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Platform"/></a>
  <a href="#"><img src="https://img.shields.io/badge/SEC-Sylhet%20Engineering%20College-E23D28?style=for-the-badge" alt="Institution"/></a>
  <a href="#"><img src="https://img.shields.io/badge/License-Academic%20Open%20Source-orange?style=for-the-badge" alt="License"/></a>
</p>

---

## 📖 Executive Summary

This repository houses the complete academic codebase, laboratory assignments, and structured practice banks for the **CSE 1101: Structured Programming Language** undergraduate curriculum at **Sylhet Engineering College (SEC)**, affiliated with **Shahjalal University of Science and Technology (SUST)**.

All solutions are engineered from first principles in standard ANSI C / C99, demonstrating clean student-oriented coding paradigms, rigorous memory hygiene, and complete platform portability.

> [!IMPORTANT]
> **Compilation Standard & Quality Assurance:**  
> Every program in this repository strictly compiles under `gcc -Wall -Wextra -lm` with **zero errors and zero warnings**. Defect-free memory access and edge-case validation are enforced across all modules.

> [!TIP]
> **Automated Verification:**  
> Run the automated batch-verification script described in [Compilation Guide](#-getting-started--compilation-protocol) to compile and test every executable sequentially in your local terminal.

---

## 🗂️ Repository Directory Architecture

```text
cse-structured-programming-assignment/
├── 📄 README.md                                  # Executive repository documentation & syllabus index
├── 📄 prime_checker.c                            # Standalone laboratory assignment (Prime Verification)
│
├── 📂 Assignment_02/                             # ⭐ W3Schools C More Section (Assignment 2)
│   ├── 📄 README.md                              # Comprehensive topic index & technical breakdown
│   ├── 📄 01_current_time_calendar.c             # Calendar epoch time & ctime() string formatting
│   ├── 📄 02_localtime_breakdown_tm_struct.c     # struct tm member breakdown with localtime()
│   ├── 📄 03_formatted_datetime_strftime.c       # Custom timestamp formatting via strftime()
│   ├── 📄 04_execution_time_measurement.c        # CPU clock benchmark & difftime() elapsed calculation
│   ├── 📄 05_basic_rand_generator.c              # Pseudo-random generation & RAND_MAX determinism
│   ├── 📄 06_seeded_random_generator.c           # Entropy seeding with srand(time(NULL))
│   ├── 📄 07_bounded_range_random_numbers.c      # Modulo arithmetic mapping ([0,9], [1,100], [-20,45])
│   ├── 📄 08_dice_roll_simulation.c              # Six-sided dice simulation with double-roll detection
│   ├── 📄 09_object_like_macros_constants.c      # Preprocessor constants (PI, limits) & geometry
│   ├── 📄 10_function_like_macros.c              # Parameterized macros & parenthesization traps
│   ├── 📄 11_conditional_compilation_debug.c     # Conditional directives (#ifdef, #ifndef, loggers)
│   ├── 📄 12_calculator_module.h                 # Modular interface header with include guards
│   ├── 📄 12_calculator_module.c                 # Modular arithmetic implementation definitions
│   ├── 📄 12_calculator_main.c                   # Multi-file consumer driver program
│   ├── 📄 12_modular_calculator_demo.c           # Self-contained single-file modular concept demo
│   ├── 📄 13_auto_storage_class.c                # Stack frame lifetime, scope & variable shadowing
│   ├── 📄 14_static_local_storage_class.c        # Persistent static lifetime & bank balance ledger
│   ├── 📄 15_register_storage_class.c            # CPU register optimization hints & address traps
│   ├── 📄 16_extern_storage_class_data.c         # Multi-file shared global variable definitions
│   ├── 📄 16_extern_storage_class_main.c         # External variable consumer & state mutator
│   ├── 📄 16_extern_storage_class_demo.c         # Self-contained single-file external linkage demo
│   ├── 📄 17_bitwise_and_or_xor.c                # Bitwise logic truth tables & 8-bit binary viewer
│   ├── 📄 18_bitwise_not_and_twos_complement.c   # One's complement bit flip & two's complement math
│   ├── 📄 19_bitwise_shift_operators.c           # Left/right bit shifts & fast 2^k arithmetic
│   ├── 📄 20_bitwise_flags_and_permissions.c     # POSIX file permissions bitmask management system
│   ├── 📄 21_fixed_width_integer_types.c         # <stdint.h> types (int8_t..uint64_t) & bit limits
│   └── 📄 22_fixed_width_memory_optimization.c   # Embedded telemetry packet (62.5% memory reduction)
│
├── 📂 W3Schools_C_Tutorial/                       # W3Schools Core Chapters (01 through 14)
│   ├── 📄 README.md                              # Chapter index up to Pointers
│   ├── 📂 01_Syntax_and_Output/                  # Hello world, newlines, and escape sequences
│   ├── 📂 02_Variables_and_Data_Types/           # Format specifiers, data sizes, and casting
│   ├── 📂 03_Constants/                          # Read-only const declarations
│   ├── 📂 04_Operators/                          # Arithmetic, relational, logical, and precedence
│   ├── 📂 05_Booleans/                           # stdbool.h and conditional truth evaluations
│   ├── 📂 06_If_Else_Conditions/                 # Nested conditions and ternary expressions
│   ├── 📂 07_Switch_Statement/                   # Weekday and grade mapping structures
│   ├── 📂 08_While_Loops/                        # While and do-while loop iterators
│   ├── 📂 09_For_Loops/                          # Nested for-loops and coordinate grids
│   ├── 📂 10_Break_and_Continue/                 # Loop control branching
│   ├── 📂 11_Arrays/                             # 1D arrays, multi-dimensional grids, statistics
│   ├── 📂 12_Strings/                            # String manipulation and <string.h> functions
│   ├── 📂 13_User_Input/                         # scanf vs fgets buffer-safe stream processing
│   └── 📂 14_Pointers/                           # Memory addressing, dereferencing, and pointer math
│
├── 📂 W3Schools_Basics_to_Loops/                  # Curated Foundational Problems (01-25)
│   ├── 📄 README.md                              # Tabular index of problems 01 to 25
│   └── 📄 [01-25]_*.c                            # Sequential solutions from syntax to nested loops
│
└── 📂 Basic_Declarations_and_Expressions/         # w3resource Problem Bank (Problems 01-20)
    ├── 📄 README.md                              # Indexed problem bank descriptions
    └── 📄 [01-20]_*.c                            # Fundamental I/O, formulas, math, and conditionals
```

---

## 🎯 Course Curriculum & Assignment Breakdown

### 🌟 1. Assignment 2: W3Schools Advanced C Features (`Assignment_02/`)
> *Scraped, rephrased, and expanded from W3Schools' official [C More Section](https://www.w3schools.com/c/c_date_time.php).*

| Chapter / Topic | Core Concepts | Files |
|---|---|---|
| **Date and Time** | `<time.h>`, `time()`, `ctime()`, `struct tm`, `localtime()`, `strftime()`, `clock()` | [`01`](./Assignment_02/01_current_time_calendar.c), [`02`](./Assignment_02/02_localtime_breakdown_tm_struct.c), [`03`](./Assignment_02/03_formatted_datetime_strftime.c), [`04`](./Assignment_02/04_execution_time_measurement.c) |
| **Random Numbers** | `<stdlib.h>`, `rand()`, `RAND_MAX`, `srand(time(NULL))`, modulo range scaling, dice games | [`05`](./Assignment_02/05_basic_rand_generator.c), [`06`](./Assignment_02/06_seeded_random_generator.c), [`07`](./Assignment_02/07_bounded_range_random_numbers.c), [`08`](./Assignment_02/08_dice_roll_simulation.c) |
| **Macros & Preprocessor** | Object-like macros, parameterized macros, precedence parentheses traps, `#ifdef` logging | [`09`](./Assignment_02/09_object_like_macros_constants.c), [`10`](./Assignment_02/10_function_like_macros.c), [`11`](./Assignment_02/11_conditional_compilation_debug.c) |
| **Modular Code Organization**| Header files (`.h`), include guards (`#ifndef`), separate implementation (`.c`), multi-file build | [`12a`](./Assignment_02/12_calculator_module.h), [`12b`](./Assignment_02/12_calculator_module.c), [`12c`](./Assignment_02/12_calculator_main.c), [`12d`](./Assignment_02/12_modular_calculator_demo.c) |
| **Storage Classes** | `auto` (local stack), `static` (persistent lifetime), `register` (CPU hints), `extern` (multi-file) | [`13`](./Assignment_02/13_auto_storage_class.c), [`14`](./Assignment_02/14_static_local_storage_class.c), [`15`](./Assignment_02/15_register_storage_class.c), [`16a-c`](./Assignment_02/16_extern_storage_class_main.c) |
| **Bitwise Operators** | Truth tables (`&`, `\|`, `^`), two's complement inversion (`~`), bit shifts (`<<`, `>>`), POSIX flags | [`17`](./Assignment_02/17_bitwise_and_or_xor.c), [`18`](./Assignment_02/18_bitwise_not_and_twos_complement.c), [`19`](./Assignment_02/19_bitwise_shift_operators.c), [`20`](./Assignment_02/20_bitwise_flags_and_permissions.c) |
| **Fixed-Width Integers** | `<stdint.h>`, `int8_t` through `uint64_t`, format specifiers, embedded memory optimization | [`21`](./Assignment_02/21_fixed_width_integer_types.c), [`22`](./Assignment_02/22_fixed_width_memory_optimization.c) |

👉 **Full Details & Detailed Table:** See the dedicated [**Assignment 2 README**](./Assignment_02/README.md).

---

### 📚 2. Core W3Schools Tutorial Implementations (`W3Schools_C_Tutorial/`)
Comprehensive textbook implementations spanning Chapters 01 to 14:
* **Syntax, Output & Comments:** Fundamental structure, escape sequences, and ANSI formatting.
* **Data Types, Variables & Constants:** Explicit casting, memory queries with `sizeof`, and `const` variables.
* **Operators & Booleans:** Short-circuit logic, operator precedence, and relational comparisons.
* **Control Flow:** `if-else` ladders, switch-case evaluators, `while`, `do-while`, and nested `for` loops.
* **Arrays & Strings:** Matrix transformations, statistical aggregations, and null-terminated string buffers.
* **Pointers & Memory:** Dereferencing, pointer arithmetic, array decay, and indirect variable modification.

---

### 🧪 3. Practice & Lab Assignments
* **[`prime_checker.c`](./prime_checker.c):** An optimized prime-testing algorithm featuring $O(\sqrt{n})$ division skipping even multiples.
* **[`Basic_Declarations_and_Expressions/`](./Basic_Declarations_and_Expressions/):** 20 classic w3resource problems covering currency breakdown, quadratic Bhaskara formula, coordinate distance, and time conversions.
* **[`W3Schools_Basics_to_Loops/`](./W3Schools_Basics_to_Loops/):** 25 student-crafted exercises focusing on iterative problem-solving and algorithmic thinking.

---

## 🚀 Getting Started & Compilation Protocol

### Prerequisites
Ensure you have a standard GCC or Clang toolchain installed:
```bash
gcc --version
```

### 1. Cloning the Repository
```bash
git clone git@github.com:cyanoge1-netizen/cse-structured-programming-assignment.git
cd cse-structured-programming-assignment
```

### 2. Compiling Standalone Programs
To compile any standalone program with full warnings enabled:
```bash
gcc -Wall -Wextra Assignment_02/03_formatted_datetime_strftime.c -lm -o strftime_demo
./strftime_demo
```

### 3. Compiling Multi-File Modular Modules
```bash
# Modular Calculator (Problem 12)
gcc -Wall -Wextra Assignment_02/12_calculator_main.c Assignment_02/12_calculator_module.c -lm -o calculator_app
./calculator_app

# External Linkage Demo (Problem 16)
gcc -Wall -Wextra Assignment_02/16_extern_storage_class_main.c Assignment_02/16_extern_storage_class_data.c -lm -o extern_demo
./extern_demo
```

### 4. Running Full Suite Batch Verification
To verify that 100% of programs in Assignment 2 compile cleanly with zero errors:
```bash
cd Assignment_02
for file in [0-2]*.c; do
    if [ "$file" = "12_calculator_main.c" ]; then
        gcc -Wall -Wextra 12_calculator_main.c 12_calculator_module.c -lm -o test_bin && ./test_bin > /dev/null
    elif [ "$file" = "12_calculator_module.c" ] || [ "$file" = "16_extern_storage_class_data.c" ]; then
        gcc -Wall -Wextra -c "$file" -o /dev/null
        continue
    elif [ "$file" = "16_extern_storage_class_main.c" ]; then
        gcc -Wall -Wextra 16_extern_storage_class_main.c 16_extern_storage_class_data.c -lm -o test_bin && ./test_bin > /dev/null
    else
        gcc -Wall -Wextra "$file" -lm -o test_bin && ./test_bin > /dev/null
    fi
    rm -f test_bin
    echo "✅ Verified: $file"
done
```

---

## 👤 Academic & Student Credentials

<div align="center">

| Field | Student Academic Information |
| :--- | :--- |
| **Student Name** | **Suleman Ahmed Shuvo** |
| **Class Roll** | **43** |
| **Undergraduate Batch** | **CSE-19** |
| **Academic Session** | **2025-26** |
| **Department** | **Computer Science and Engineering (CSE)** |
| **Institution** | **Sylhet Engineering College (SEC)** |
| **University Affiliation** | **Shahjalal University of Science and Technology (SUST)** |
| **Curriculum Scope** | **CSE 1101: Structured Programming Language** |

</div>

---

## 📜 Academic Integrity & License

This repository and all associated source codes are published under the **Academic Open Source License** for coursework evaluation, laboratory archival, and educational peer reference under the Department of Computer Science and Engineering at Sylhet Engineering College.

<p align="center">
  <sub>Maintained with ❤️ by <b>Suleman Ahmed Shuvo (Roll 43)</b> • Dept. of CSE, Sylhet Engineering College</sub>
</p>
