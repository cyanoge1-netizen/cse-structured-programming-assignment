# <p align="center">Department of Computer Science & Engineering<br><sub>Sylhet Engineering College (SEC) — Affiliated with SUST</sub></p>

<p align="center">
  <a href="https://en.cppreference.com/w/c"><img src="https://raw.githubusercontent.com/github/explore/main/topics/c/c.png" width="85" alt="ANSI C Logo"/></a>
</p>

<h1 align="center">Structured Programming Language (CSE 1101)</h1>
<p align="center">Course Assignments, Lab Exercises & Practice Problem Solutions in C</p>

<p align="center">
  <a href="https://en.cppreference.com/w/c"><img src="https://img.shields.io/badge/Language-ANSI%20C%20%2F%20C99-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C Standard"/></a>
  <a href="https://gcc.gnu.org/"><img src="https://img.shields.io/badge/Compiler-GCC%20%7C%20Clang-brightgreen?style=for-the-badge&logo=gnu-bash&logoColor=white" alt="GCC"/></a>
  <a href="https://www.sec.ac.bd/"><img src="https://img.shields.io/badge/College-Sylhet%20Engineering%20College-E23D28?style=for-the-badge&logo=googlemaps&logoColor=white" alt="SEC Official Website"/></a>
  <a href="https://www.sust.edu/"><img src="https://img.shields.io/badge/Affiliation-SUST-006A4E?style=for-the-badge" alt="SUST Official Website"/></a>
  <a href="https://www.w3schools.com/c/index.php"><img src="https://img.shields.io/badge/Curriculum-W3Schools%20C-04AA6D?style=for-the-badge&logo=w3schools&logoColor=white" alt="W3Schools C Tutorial"/></a>
  <a href="https://github.com/cyanoge1-netizen"><img src="https://img.shields.io/badge/Author-Suleman%20Ahmed%20Shuvo-informational?style=for-the-badge&logo=github&logoColor=white" alt="GitHub Profile"/></a>
  <a href="https://opensource.org/licenses/MIT"><img src="https://img.shields.io/badge/License-MIT-orange?style=for-the-badge" alt="License"/></a>
</p>

---

## 📌 About This Repository

This repository contains my C programming lab tasks, course assignments, and practice exercises for the **CSE 1101: Structured Programming Language** course at [Sylhet Engineering College (SEC)](https://www.sec.ac.bd/), under the [Department of Computer Science & Engineering](https://www.sec.ac.bd/). SEC is affiliated with [Shahjalal University of Science & Technology (SUST)](https://www.sust.edu/).

All programs are written in standard ANSI C (C99), kept clean and readable, and compile without any errors or warnings using `gcc -Wall -Wextra -lm`.

---

## 📂 Repository Structure

```text
cse-structured-programming-assignment/
├── README.md                                  # Repository overview and index
├── prime_checker.c                            # Lab exercise: efficient prime number check
│
├── Assignment_01/                             # Assignment 1: W3Schools Basics to Loops
│   ├── README.md                              # Dedicated index, notes, and compilation guide
│   └── [01-25]_*.c                            # 25 sequential problems covering basics up to loops
│
├── Assignment_02/                             # Assignment 2: W3Schools C More Section
│   ├── README.md                              # Detailed problem index & topic explanations
│   ├── 01_current_time_calendar.c             # Current time and epoch seconds with time() & ctime()
│   ├── 02_localtime_breakdown_tm_struct.c     # Breaking down date/time into struct tm fields
│   ├── 03_formatted_datetime_strftime.c       # Custom date/time formatting with strftime()
│   ├── 04_execution_time_measurement.c        # Measuring CPU execution time using clock()
│   ├── 05_basic_rand_generator.c              # Basic rand() and RAND_MAX behavior
│   ├── 06_seeded_random_generator.c           # Seeding random generator with srand(time(NULL))
│   ├── 07_bounded_range_random_numbers.c      # Generating random numbers in custom ranges
│   ├── 08_dice_roll_simulation.c              # Dice rolling simulation with double detection
│   ├── 09_object_like_macros_constants.c      # Constants with #define (PI, buffer sizes)
│   ├── 10_function_like_macros.c              # Function-like macros and parentheses safety
│   ├── 11_conditional_compilation_debug.c     # #ifdef and #ifndef for debug logs
│   ├── 12_calculator_module.h                 # Header file with prototypes & include guards
│   ├── 12_calculator_module.c                 # Function implementations for calculator
│   ├── 12_calculator_main.c                   # Main program calling calculator module
│   ├── 12_modular_calculator_demo.c           # All-in-one demo of modular C concepts
│   ├── 13_auto_storage_class.c                # auto storage class and block scope
│   ├── 14_static_local_storage_class.c        # static variables preserving state across calls
│   ├── 15_register_storage_class.c            # register keyword and address restrictions
│   ├── 16_extern_storage_class_data.c         # Data file with global variables
│   ├── 16_extern_storage_class_main.c         # Main file accessing extern variables
│   ├── 16_extern_storage_class_demo.c         # Single-file demo of external linkage
│   ├── 17_bitwise_and_or_xor.c                # Bitwise AND, OR, and XOR operations
│   ├── 18_bitwise_not_and_twos_complement.c   # Bitwise NOT (~) and two's complement
│   ├── 19_bitwise_shift_operators.c           # Left shift (<<) and right shift (>>)
│   ├── 20_bitwise_flags_and_permissions.c     # Managing file permissions using bitmasks
│   ├── 21_fixed_width_integer_types.c         # <stdint.h> types (int8_t, uint8_t, etc.)
│   └── 22_fixed_width_memory_optimization.c   # Saving memory with uint8_t in telemetry data
│
├── W3Schools_C_Tutorial/                       # Reference Manual: Core chapters (01 through 14)
│   ├── README.md                              # Chapter index up to pointers
│   └── [01-14]_*/                             # Folders for variables, loops, arrays, strings, etc.
│
└── Basic_Declarations_and_Expressions/         # w3resource problem set (01 to 20)
    ├── README.md                              # Problem descriptions
    └── [01-20]_*.c                            # Programs covering formulas, math, and conditionals
```

---

## 📑 Course Assignments & Practice Sections

### 1. [Assignment 1: W3Schools Basics to Loops (`Assignment_01/`)](./Assignment_01/)
A complete sequential set of 25 foundational problems covering syntax, variables, operators, conditionals, and loops:
* **Syntax, I/O & Types (Problems 01–07):** Program layout, newlines, format specifiers, variable reassignment, rectangle geometry, shopping receipts, and explicit casting (`(float)score / max`).
* **Constants & Operators (Problems 08–11):** `const` variables, circle formulas, compound arithmetic (`+=`), modulo `%`, relational comparisons, `sizeof`, and `<stdbool.h>`.
* **Conditionals & Branching (Problems 12–17):** 24-hour time greetings, security PIN verification, number parity, shorthand ternary `? :`, weekday `switch-case`, and an interactive calculator.
* **Loop Structures & Patterns (Problems 18–25):** `while` countdowns, Yatzy dice simulations, reversing digits mathematically, `do-while` menu loops, custom stride `for` loops (`i += 2`, `i *= 2`), multiplication tables, and nested loops for 2D grids and star patterns.

👉 See the complete problem index and notes in the [**Assignment 1 README**](./Assignment_01/README.md).

---

### 2. [Assignment 2: W3Schools Advanced Features (`Assignment_02/`)](./Assignment_02/)
Complete implementations covering all 7 chapters in the [W3Schools C More](https://www.w3schools.com/c/c_date_time.php) section:
* **Date & Time (`<time.h>`):** Epoch time retrieval, breaking it down into `struct tm` fields (year `+1900`, month `+1`, day, hour, min, sec), safe formatting with `strftime()`, and execution benchmarking with `clock()`.
* **Random Numbers (`<stdlib.h>`):** Pseudo-random generation with `rand()`, seeding with `srand(time(NULL))`, custom range formulas, and a multi-round dice game simulator.
* **Macros & Preprocessor:** Constants with `#define`, parameterized macros with defensive parenthesization to prevent precedence bugs, and `#ifdef DEBUG` build toggles.
* **Modular Code:** Splitting code into `.h` header files with include guards, `.c` implementation files, and a `main.c` driver program.
* **Storage Classes:** Differences between local `auto`, state-retaining `static`, CPU-hinted `register`, and multi-file shared `extern`.
* **Bitwise Operators:** Working directly with bits (`&`, `|`, `^`, `~`, `<<`, `>>`), and building a real-life POSIX file permission flag system (`READ`, `WRITE`, `EXEC`).
* **Fixed-Width Integers (`<stdint.h>`):** Platform-independent types (`int8_t` through `uint64_t`) and a telemetry struct demo showing 62.5% memory reduction with `uint8_t`.

👉 See the complete index and notes in the [**Assignment 2 README**](./Assignment_02/README.md).

---

### 3. [W3Schools C Tutorial: Chapter Guide (`W3Schools_C_Tutorial/`)](./W3Schools_C_Tutorial/)
A comprehensive textbook reference manual covering 14 core chapters from basic syntax up through memory pointers (`&`, `*`, array decay, and pointer arithmetic).

### 4. [Practice: Basic Declarations & Expressions (w3resource)](./Basic_Declarations_and_Expressions/)
Solutions to 20 foundational problems from w3resource covering basic arithmetic, quadratic equations (Bhaskara formula), coordinate Euclidean distance, and bank note breakdowns.

### 5. [Laboratory: Prime Checker (`prime_checker.c`)](./prime_checker.c)
A standalone laboratory task implementing an optimized $O(\sqrt{n})$ prime testing algorithm.

---

## 💻 How to Compile and Run

Make sure you have GCC installed:
```bash
gcc --version
```

### Compile Any Single File
```bash
# Example: Compile the strftime date/time program
gcc -Wall -Wextra Assignment_02/03_formatted_datetime_strftime.c -lm -o strftime_demo
./strftime_demo
```

### Compile Multi-File Programs
```bash
# Problem 12: Modular Calculator (Main + Module)
gcc -Wall -Wextra Assignment_02/12_calculator_main.c Assignment_02/12_calculator_module.c -lm -o calculator_app
./calculator_app

# Problem 16: External Storage Class (Main + Data)
gcc -Wall -Wextra Assignment_02/16_extern_storage_class_main.c Assignment_02/16_extern_storage_class_data.c -lm -o extern_demo
./extern_demo
```

### Batch Verify All Programs
To quickly check that every program compiles and runs with zero issues:
```bash
cd Assignment_02
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

## 👨‍🎓 Student Details

| Information | Details |
| :--- | :--- |
| **Name** | [Suleman Ahmed Shuvo](https://github.com/cyanoge1-netizen) |
| **Roll** | 43 |
| **Batch** | CSE-19 |
| **Session** | 2025-26 |
| **Department** | [Computer Science & Engineering](https://www.sec.ac.bd/) |
| **College** | [Sylhet Engineering College (SEC)](https://www.sec.ac.bd/) |
| **University** | [Shahjalal University of Science & Technology (SUST)](https://www.sust.edu/) |
| **Course** | CSE 1101: Structured Programming Language |

---

## 📄 License

This repository is maintained for academic coursework, lab submissions, and study reference under the [MIT License](https://opensource.org/licenses/MIT).
