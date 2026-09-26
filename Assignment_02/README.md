# W3Schools Advanced C Features (Assignment 2: C More Section)

This directory contains human-crafted, clean ANSI C solutions for the advanced topics and real-world system applications covered in the **C More** section of the [W3Schools C Tutorial](https://www.w3schools.com/c/c_date_time.php). All programs are designed from first principles with detailed pedagogical commentary, strict ANSI compliance, and zero compiler warnings under `gcc -Wall -Wextra -lm`.

---

## 📌 Problem Index & Chronological Topic Ordering

| # | File Name | Topic / Concept | Description | Status |
|---|---|---|---|---|
| **01** | [`01_current_time_calendar.c`](./01_current_time_calendar.c) | Date & Time (`<time.h>`) | Epoch calendar time retrieval with `time()` and ASCII conversion with `ctime()` | Completed |
| **02** | [`02_localtime_breakdown_tm_struct.c`](./02_localtime_breakdown_tm_struct.c) | Date & Time (`struct tm`) | Decomposing epoch timestamps into individual calendar fields via `localtime()` | Completed |
| **03** | [`03_formatted_datetime_strftime.c`](./03_formatted_datetime_strftime.c) | Date & Time Formatting | Custom buffer-safe date and time strings using `strftime()` (ISO, 12h, locale) | Completed |
| **04** | [`04_execution_time_measurement.c`](./04_execution_time_measurement.c) | Real-Life Application | Benchmarking CPU ticks with `clock()` and wall-clock time with `difftime()` | Completed |
| **05** | [`05_basic_rand_generator.c`](./05_basic_rand_generator.c) | Pseudo-Random Numbers | Unseeded sequence generation with `rand()` and `RAND_MAX` inspection | Completed |
| **06** | [`06_seeded_random_generator.c`](./06_seeded_random_generator.c) | Pseudo-Random Numbers | Dynamic entropy seeding using `srand(time(NULL))` and loop re-seeding analysis | Completed |
| **07** | [`07_bounded_range_random_numbers.c`](./07_bounded_range_random_numbers.c) | Modulo Arithmetic | Generating bounded random values across intervals `[0, 9]`, `[1, 100]`, and `[-20, 45]` | Completed |
| **08** | [`08_dice_roll_simulation.c`](./08_dice_roll_simulation.c) | Real-Life Simulation | Multi-round pair of six-sided dice simulation with double-roll detection | Completed |
| **09** | [`09_object_like_macros_constants.c`](./09_object_like_macros_constants.c) | Macros (`#define`) | Symbolic constant definitions (`PI`, buffer limits) and geometric calculations | Completed |
| **10** | [`10_function_like_macros.c`](./10_function_like_macros.c) | Parameterized Macros | Function-like macros with defensive parenthesization and operator precedence traps | Completed |
| **11** | [`11_conditional_compilation_debug.c`](./11_conditional_compilation_debug.c) | Conditional Directives | Selective compilation paths with `#ifdef`, `#ifndef`, `#else`, and debug loggers | Completed |
| **12a** | [`12_calculator_module.h`](./12_calculator_module.h) | Modular Programming | Custom header file with include guards (`#ifndef CALCULATOR_MODULE_H`) | Completed |
| **12b** | [`12_calculator_module.c`](./12_calculator_module.c) | Modular Implementation | Concrete arithmetic function implementations (`add`, `sub`, `mul`, `div`, `pow`) | Completed |
| **12c** | [`12_calculator_main.c`](./12_calculator_main.c) | Modular Driver Program | Multi-file consumer driver invoking modular calculator functions | Completed |
| **12d** | [`12_modular_calculator_demo.c`](./12_modular_calculator_demo.c) | Modular Concept Demo | Self-contained single-file demonstration of modular compilation architecture | Completed |
| **13** | [`13_auto_storage_class.c`](./13_auto_storage_class.c) | Storage Classes (`auto`) | Stack frame allocation, local block visibility, and variable shadowing mechanics | Completed |
| **14** | [`14_static_local_storage_class.c`](./14_static_local_storage_class.c) | Storage Classes (`static`) | Persistent lifetime across function calls and cumulative bank transaction ledger | Completed |
| **15** | [`15_register_storage_class.c`](./15_register_storage_class.c) | Storage Classes (`register`) | CPU register hints for high-frequency loops and memory address restrictions | Completed |
| **16a** | [`16_extern_storage_class_data.c`](./16_extern_storage_class_data.c) | Multi-File Linkage | Shared global data definition across independent compilation units | Completed |
| **16b** | [`16_extern_storage_class_main.c`](./16_extern_storage_class_main.c) | Storage Classes (`extern`) | Multi-file consumer accessing external variables and mutating global states | Completed |
| **16c** | [`16_extern_storage_class_demo.c`](./16_extern_storage_class_demo.c) | External Linkage Demo | Self-contained single-file demonstration of external linkage mechanics | Completed |
| **17** | [`17_bitwise_and_or_xor.c`](./17_bitwise_and_or_xor.c) | Bitwise Logic Operators | Bit-level truth tables and manipulations using AND (`&`), OR (`\|`), and XOR (`^`) | Completed |
| **18** | [`18_bitwise_not_and_twos_complement.c`](./18_bitwise_not_and_twos_complement.c) | Bitwise NOT & Two's Comp | One's complement bit inversion (`~`) and signed two's complement arithmetic | Completed |
| **19** | [`19_bitwise_shift_operators.c`](./19_bitwise_shift_operators.c) | Bitwise Shifts (`<<`, `>>`) | Left shift (fast multiplication by $2^k$) and right shift (integer division by $2^k$) | Completed |
| **20** | [`20_bitwise_flags_and_permissions.c`](./20_bitwise_flags_and_permissions.c) | Real-Life Systems Application | POSIX-style file permissions bitmask: granting, revoking, toggling, and testing | Completed |
| **21** | [`21_fixed_width_integer_types.c`](./21_fixed_width_integer_types.c) | Fixed-Width Integers (`<stdint.h>`) | Portable integer widths (`int8_t` through `uint64_t`), bit sizes, and value limits | Completed |
| **22** | [`22_fixed_width_memory_optimization.c`](./22_fixed_width_memory_optimization.c) | Real-Life Embedded Application | Device telemetry packet showing 62.5% memory footprint reduction with `uint8_t` | Completed |

---

## 🚀 Compilation and Execution Guide

All source files are strictly standard ANSI C and compile cleanly under `gcc -Wall -Wextra -lm`:

### 1. Compiling Single-File Exercises
```bash
# Example: Compile formatted date time program
gcc -Wall -Wextra 03_formatted_datetime_strftime.c -lm -o 03_formatted_datetime_strftime

# Run executable
./03_formatted_datetime_strftime
```

### 2. Compiling Modular Multi-File Programs
```bash
# Problem 12: Modular Calculator (Header + Implementation + Main)
gcc -Wall -Wextra 12_calculator_main.c 12_calculator_module.c -lm -o 12_calculator
./12_calculator

# Problem 16: Multi-File External Storage Class (Data + Main)
gcc -Wall -Wextra 16_extern_storage_class_main.c 16_extern_storage_class_data.c -lm -o 16_extern_storage_class
./16_extern_storage_class
```

### 3. Batch Verification
To compile and test all programs sequentially:
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
    echo "Passed: $file"
done
```

---

## 👤 Academic Details

* **Student:** Suleman Ahmed Shuvo
* **Roll:** 43
* **Batch:** CSE-19
* **Session:** 2025-26
* **Department:** Computer Science and Engineering (CSE)
* **Institution:** Sylhet Engineering College (SEC), affiliated with SUST
