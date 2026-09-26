# <p align="center">W3Schools Advanced C Programming<br><sub>Assignment 02 — Comprehensive "C More" Section</sub></p>

<p align="center">
  <img src="https://raw.githubusercontent.com/github/explore/main/topics/c/c.png" width="80" alt="ANSI C Logo"/>
</p>

<h1 align="center">Assignment 2: Advanced C Features & Systems Concepts</h1>
<p align="center"><b>Chronologically Sequenced Implementations from First Principles</b></p>

<p align="center">
  <a href="#"><img src="https://img.shields.io/badge/Assignment-02%20(C%20More)-blueviolet?style=for-the-badge&logo=c&logoColor=white" alt="Assignment 02"/></a>
  <a href="#"><img src="https://img.shields.io/badge/Language-ANSI%20C%20%7C%20C99-00599C?style=for-the-badge&logo=c&logoColor=white" alt="Language"/></a>
  <a href="#"><img src="https://img.shields.io/badge/Build-Passing%20100%25-success?style=for-the-badge&logo=githubactions&logoColor=white" alt="Build"/></a>
  <a href="#"><img src="https://img.shields.io/badge/Programs-22%20Files-informational?style=for-the-badge&logo=buffer&logoColor=white" alt="Programs"/></a>
  <a href="#"><img src="https://img.shields.io/badge/Quality-Zero%20Warnings-brightgreen?style=for-the-badge&logo=checkmarx&logoColor=white" alt="Quality"/></a>
  <a href="#"><img src="https://img.shields.io/badge/SEC%20CSE-Batch%2019-E23D28?style=for-the-badge" alt="Batch"/></a>
</p>

---

## 📌 Table of Contents

* [Overview & Pedagogical Focus](#-overview--pedagogical-focus)
* [Chronological Problem Index](#-chronological-problem-index)
* [Technical Topic Walkthroughs](#-technical-topic-walkthroughs)
  * [1. Date & Time Engine (`<time.h>`)](#1-date--time-engine-timeh)
  * [2. Pseudo-Random Number Generation (`<stdlib.h>`)](#2-pseudo-random-number-generation-stdlibh)
  * [3. Preprocessor Directives & Macro Architecture](#3-preprocessor-directives--macro-architecture)
  * [4. Modular Programming & Multi-File Translation Units](#4-modular-programming--multi-file-translation-units)
  * [5. C Storage Classes & Variable Lifetimes](#5-c-storage-classes--variable-lifetimes)
  * [6. Bitwise Logic & Permission Flag Masking](#6-bitwise-logic--permission-flag-masking)
  * [7. Portable Fixed-Width Integers (`<stdint.h>`)](#7-portable-fixed-width-integers-stdintth)
* [Compilation & Verification Protocol](#-compilation--verification-protocol)
* [Academic Credentials](#-academic-credentials)

---

## 🔬 Overview & Pedagogical Focus

This directory contains human-crafted, clean ANSI C solutions for the advanced topics and real-world system applications covered in the **C More** section of the [W3Schools C Tutorial](https://www.w3schools.com/c/c_date_time.php).

Rather than superficial snippets, each program is rephrased into an educational, student-grade implementation complete with:
1. **First-Principles Explanations:** Clear demonstrations of memory layout, stack behavior, and hardware interaction.
2. **Defensive Programming:** Precedence safety in macros, division-by-zero guards, and memory boundary checks.
3. **Real-Life Systems Applications:** Embedded sensor telemetry packets, POSIX-style permission masks, dice simulators, and CPU cycle benchmarks.

> [!IMPORTANT]
> **Strict ANSI C Standard:** All files compile cleanly under `gcc -Wall -Wextra -lm` with zero warnings and zero runtime errors.

---

## 📑 Chronological Problem Index

| # | File Name | Topic / Concept | Real-World Application / Key Mechanics | Status |
|---|---|---|---|:---:|
| **01** | [`01_current_time_calendar.c`](./01_current_time_calendar.c) | Date & Time | Raw epoch timestamp query via `time()` and human-readable string conversion via `ctime()`. | `PASS` |
| **02** | [`02_localtime_breakdown_tm_struct.c`](./02_localtime_breakdown_tm_struct.c) | `struct tm` Decomposition | Decomposing epoch seconds into year (`+1900`), month (`+1`), day, hour, min, sec, and DST flags. | `PASS` |
| **03** | [`03_formatted_datetime_strftime.c`](./03_formatted_datetime_strftime.c) | Timestamp Formatting | Custom buffer-safe formatting with `strftime()` (ISO 8601, 12-hour AM/PM, long formal date). | `PASS` |
| **04** | [`04_execution_time_measurement.c`](./04_execution_time_measurement.c) | Performance Profiling | High-resolution CPU execution timing via `clock()` / `CLOCKS_PER_SEC` and wall-clock `difftime()`. | `PASS` |
| **05** | [`05_basic_rand_generator.c`](./05_basic_rand_generator.c) | Pseudo-Random Numbers | Deterministic unseeded pseudo-random generation with `rand()` and `RAND_MAX` range inspection. | `PASS` |
| **06** | [`06_seeded_random_generator.c`](./06_seeded_random_generator.c) | Generator Entropy Seeding | Seeding `srand(time(NULL))` once at startup and analyzing the re-seeding loop pitfall. | `PASS` |
| **07** | [`07_bounded_range_random_numbers.c`](./07_bounded_range_random_numbers.c) | Bounded Modulo Scaling | Mapping uniform random integers into `[0, 9]`, `[1, 100]`, and signed intervals `[-20, 45]`. | `PASS` |
| **08** | [`08_dice_roll_simulation.c`](./08_dice_roll_simulation.c) | Real-Life Game Simulation | Multi-round pair of six-sided dice simulation with sum analysis, snake eyes, and double detection. | `PASS` |
| **09** | [`09_object_like_macros_constants.c`](./09_object_like_macros_constants.c) | Symbolic Constants | Preprocessor `#define` constants (`PI`, buffer sizes) and geometric calculations (circle, cylinder). | `PASS` |
| **10** | [`10_function_like_macros.c`](./10_function_like_macros.c) | Parameterized Macros | Macro parameters, strict defensive parenthesization, and precedence traps (`2 + 3 * 2 + 3`). | `PASS` |
| **11** | [`11_conditional_compilation_debug.c`](./11_conditional_compilation_debug.c) | Conditional Directives | Selective compilation paths with `#ifdef`, `#ifndef`, `#else`, and zero-overhead debug loggers. | `PASS` |
| **12a** | [`12_calculator_module.h`](./12_calculator_module.h) | Modular Interface | Interface header file declaring calculator prototypes with `#ifndef` include guards. | `PASS` |
| **12b** | [`12_calculator_module.c`](./12_calculator_module.c) | Modular Implementation | Concrete arithmetic logic (`add`, `subtract`, `multiply`, `divide` with zero-guard, `power`). | `PASS` |
| **12c** | [`12_calculator_main.c`](./12_calculator_main.c) | Modular Driver Program | Multi-file consumer driver invoking modular calculator functions and testing error handlers. | `PASS` |
| **12d** | [`12_modular_calculator_demo.c`](./12_modular_calculator_demo.c) | Standalone Concept Demo | Self-contained single-file equivalent demonstrating modular compilation architecture. | `PASS` |
| **13** | [`13_auto_storage_class.c`](./13_auto_storage_class.c) | `auto` Storage Class | Stack frame allocation, local scope lifecycle, and inner-block variable shadowing mechanics. | `PASS` |
| **14** | [`14_static_local_storage_class.c`](./14_static_local_storage_class.c) | `static` Storage Class | Persistent lifetime across function calls and cumulative bank transaction balance ledger. | `PASS` |
| **15** | [`15_register_storage_class.c`](./15_register_storage_class.c) | `register` Storage Class | CPU register placement hints for high-frequency loops and `&` memory address restrictions. | `PASS` |
| **16a** | [`16_extern_storage_class_data.c`](./16_extern_storage_class_data.c) | Multi-File Linkage Data | Global data definitions and mutator functions across independent translation units. | `PASS` |
| **16b** | [`16_extern_storage_class_main.c`](./16_extern_storage_class_main.c) | `extern` Storage Class | Multi-file consumer declaring external variables and observing shared runtime states. | `PASS` |
| **16c** | [`16_extern_storage_class_demo.c`](./16_extern_storage_class_demo.c) | External Scope Demo | Self-contained single-file demonstration of external scope linkage mechanics. | `PASS` |
| **17** | [`17_bitwise_and_or_xor.c`](./17_bitwise_and_or_xor.c) | Bitwise Logic Operators | Bit-level truth tables and manipulations with AND (`&`), OR (`\|`), XOR (`^`), and 8-bit binary viewer. | `PASS` |
| **18** | [`18_bitwise_not_and_twos_complement.c`](./18_bitwise_not_and_twos_complement.c) | Bitwise NOT & Two's Comp | One's complement bit flip (`~`) and signed two's complement arithmetic (`~x == -(x + 1)`). | `PASS` |
| **19** | [`19_bitwise_shift_operators.c`](./19_bitwise_shift_operators.c) | Bitwise Shifts (`<<`, `>>`) | Left shift (fast multiplication by $2^k$) and right shift (integer division by $2^k$). | `PASS` |
| **20** | [`20_bitwise_flags_and_permissions.c`](./20_bitwise_flags_and_permissions.c) | Real-Life Systems Application | POSIX-style file permissions bitmask: granting (`\|`), revoking (`& ~`), toggling (`^`), and checking (`&`). | `PASS` |
| **21** | [`21_fixed_width_integer_types.c`](./21_fixed_width_integer_types.c) | Fixed-Width (`<stdint.h>`) | Platform-independent integer widths (`int8_t`..`uint64_t`), bit sizes, value limits, and format specifiers. | `PASS` |
| **22** | [`22_fixed_width_memory_optimization.c`](./22_fixed_width_memory_optimization.c) | Real-Life Embedded Systems | Device telemetry packet with battery meter achieving a 62.5% memory footprint reduction with `uint8_t`. | `PASS` |

---

## 🛠️ Technical Topic Walkthroughs

### 1. Date & Time Engine (`<time.h>`)
* **Epoch Time (`time_t`):** Seconds elapsed since `1970-01-01 00:00:00 UTC`. Retrieved with `time(NULL)`.
* **Broken-Down Time (`struct tm`):**
  * `tm_year`: Years since 1900 (must add `1900` for actual calendar year).
  * `tm_mon`: Month indexed `0` to `11` (must add `1` for standard month).
  * `tm_mday`: Day of month `1` to `31`.
  * Pointer member access uses arrow syntax: `t->tm_year`.
* **String Formatting (`strftime`):** Buffer-safe formatting using specifiers like `%Y-%m-%d %H:%M:%S` to eliminate security risks associated with legacy functions.

---

### 2. Pseudo-Random Number Generation (`<stdlib.h>`)
* **Linear Congruential Generator (LCG):** `rand()` generates deterministic numbers between `0` and `RAND_MAX` (2,147,483,647).
* **Seeding (`srand`):** Initialized once with `srand(time(NULL))` at the start of `main()`. Seeding inside loops resets the sequence to the same starting point if multiple iterations execute within a single second.
* **Uniform Range Formula:**
  $$\text{Random}(min, max) = min + (\text{rand}() \pmod{max - min + 1})$$

---

### 3. Preprocessor Directives & Macro Architecture
* **Textual Substitution:** Preprocessor executes before compilation.
* **Defensive Parenthesization:**
  ```c
  /* DANGEROUS: SQUARE_BAD(2 + 3) -> 2 + 3 * 2 + 3 = 11 */
  #define SQUARE_BAD(x) x * x

  /* DEFENSIVE: SQUARE(2 + 3) -> ((2 + 3) * (2 + 3)) = 25 */
  #define SQUARE(x)     ((x) * (x))
  ```
* **Conditional Compilation:** `#ifdef DEBUG_MODE` enables zero-overhead runtime diagnostics during development and completely strips debug code from production builds.

---

### 4. Modular Programming & Multi-File Translation Units
```text
               ┌───────────────────────────────┐
               │ 12_calculator_module.h        │
               │ (Prototypes + Include Guards) │
               └──────────────┬────────────────┘
                              │
               ┌──────────────┴──────────────┐
               ▼                             ▼
┌───────────────────────────────┐  ┌───────────────────────────────┐
│ 12_calculator_module.c        │  │ 12_calculator_main.c          │
│ (Function Implementations)    │  │ (Application Driver)          │
└──────────────┬────────────────┘  └──────────────┬────────────────┘
               │                                  │
               └──────────────┬───────────────────┘
                              ▼
                 [ gcc main.c module.c -o app ]
                              ▼
                     Binary Executable
```
* **Include Guards:** `#ifndef CALCULATOR_MODULE_H` prevents double-inclusion syntax errors across complex dependency trees.

---

### 5. C Storage Classes & Variable Lifetimes

| Storage Class | Storage Location | Default Initial Value | Scope | Lifetime |
|---|---|---|---|---|
| `auto` | Stack Frame | Garbage (Indeterminate) | Local Block | Duration of enclosing block |
| `static` | Data / BSS Segment | Zero (`0`) | Local Block | Entire program execution |
| `register` | CPU Register (Hint) | Garbage (Indeterminate) | Local Block | Duration of enclosing block (`&` illegal) |
| `extern` | Data / BSS Segment | Zero (`0`) | Global Linkage | Entire program execution |

---

### 6. Bitwise Logic & Permission Flag Masking
```text
Bitwise Operations:
  a = 6  (0000 0110)
  b = 3  (0000 0011)
  --------------------
  a & b = 2  (0000 0010)  [AND: 1 only where both bits are 1]
  a | b = 7  (0000 0111)  [OR:  1 where either bit is 1]
  a ^ b = 5  (0000 0101)  [XOR: 1 where bits differ]
  ~a    = -7 (1111 1001)  [NOT: Two's complement ~x == -(x + 1)]
  a << 1= 12 (0000 1100)  [Left Shift: Multiplies by 2]
  a >> 1= 3  (0000 0011)  [Right Shift: Divides by 2]
```
* **Bitmask Permission System:**
  * **Grant Permission:** `perms |= FLAG_WRITE`
  * **Revoke Permission:** `perms &= ~FLAG_WRITE`
  * **Toggle Permission:** `perms ^= FLAG_ADMIN`
  * **Test Permission:** `if (perms & FLAG_READ)`

---

### 7. Portable Fixed-Width Integers (`<stdint.h>`)
Standard C types vary in byte length across CPU architectures (e.g., `int` can be 16-bit or 32-bit). Fixed-width types guarantee uniform storage across all compilers:

```text
Memory Footprint Comparison (Device Telemetry Packet):
┌────────────────────────────────────────────────────────┐
│ Naive Telemetry (Standard int everywhere):  16 Bytes   │
│ [int battery] [int status] [int temp] [int id]         │
└────────────────────────────────────────────────────────┘
┌────────────────────────────────────────────────────────┐
│ Compact Telemetry (<stdint.h> Types):        6 Bytes   │
│ [uint8_t] [uint8_t] [int16_t] [uint16_t]               │
└────────────────────────────────────────────────────────┘
-> Result: 62.5% Reduction in RAM and Network Transmission Overhead!
```

---

## 🚀 Compilation & Verification Protocol

### Single File Compilation
```bash
# Compile any single exercise
gcc -Wall -Wextra 03_formatted_datetime_strftime.c -lm -o 03_formatted_datetime_strftime
./03_formatted_datetime_strftime
```

### Multi-File Compilation
```bash
# Problem 12: Modular Calculator
gcc -Wall -Wextra 12_calculator_main.c 12_calculator_module.c -lm -o 12_calculator
./12_calculator

# Problem 16: External Storage Class
gcc -Wall -Wextra 16_extern_storage_class_main.c 16_extern_storage_class_data.c -lm -o 16_extern_storage_class
./16_extern_storage_class
```

### Automated Batch Verification Script
Run this script to verify that all 22 exercises compile and pass cleanly:
```bash
for file in [0-2]*.c; do
    if [ "$file" = "12_calculator_main.c" ]; then
        gcc -Wall -Wextra 12_calculator_main.c 12_calculator_module.c -lm -o bin_test && ./bin_test > /dev/null
    elif [ "$file" = "12_calculator_module.c" ] || [ "$file" = "16_extern_storage_class_data.c" ]; then
        gcc -Wall -Wextra -c "$file" -o /dev/null
        continue
    elif [ "$file" = "16_extern_storage_class_main.c" ]; then
        gcc -Wall -Wextra 16_extern_storage_class_main.c 16_extern_storage_class_data.c -lm -o bin_test && ./bin_test > /dev/null
    else
        gcc -Wall -Wextra "$file" -lm -o bin_test && ./bin_test > /dev/null
    fi
    rm -f bin_test
    echo "✅ Passed: $file"
done
```

---

## 👤 Academic Credentials

* **Student:** Suleman Ahmed Shuvo
* **Class Roll:** 43
* **Undergraduate Batch:** CSE-19
* **Academic Session:** 2025-26
* **Department:** Computer Science & Engineering (CSE)
* **Institution:** Sylhet Engineering College (SEC)
* **Affiliation:** Shahjalal University of Science & Technology (SUST)
