# <p align="center">W3Schools Core C Practice<br><sub>Assignment 01 — CSE 1101 Structured Programming Language</sub></p>

<p align="center">
  <a href="https://www.w3schools.com/c/index.php"><img src="https://raw.githubusercontent.com/github/explore/main/topics/c/c.png" width="80" alt="ANSI C Logo"/></a>
</p>

<h1 align="center">Assignment 1: W3Schools Basics to Loops</h1>
<p align="center">Foundational Syntax, Data Types, Conditionals & Loop Structures (Problems 01–25)</p>

<p align="center">
  <a href="https://www.w3schools.com/c/index.php"><img src="https://img.shields.io/badge/Tutorial-W3Schools%20C%20Core-04AA6D?style=for-the-badge&logo=w3schools&logoColor=white" alt="W3Schools C Tutorial"/></a>
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
  * [1. Variables, Data Types & Format Specifiers](#1-variables-data-types--format-specifiers)
  * [2. Constants & Good Practices](#2-constants--good-practices)
  * [3. Decisions & Branching](#3-decisions--branching)
  * [4. Choosing the Right Loop](#4-choosing-the-right-loop)
* [💻 How to Compile and Run](#-how-to-compile-and-run)
  * [Single File Compilation](#single-file-compilation)
  * [Batch Verify All 25 Programs](#batch-verify-all-25-programs)
* [👨‍🎓 About Me](#about-me)

---

## 📌 What is in this Assignment?

This directory contains standalone, student-crafted C implementations for the core foundational topics from the [W3Schools C Tutorial](https://www.w3schools.com/c/index.php).

The problems are organized sequentially from 01 through 25, covering basic syntax, data types, type conversion, constants, compound operators, booleans, conditional branching (`if-else` and `switch`), and all loop variants (`while`, `do-while`, `for`, and nested patterns).

All 25 programs compile cleanly under `gcc -Wall -Wextra -lm` with zero warnings or errors.

---

## 📑 Complete Problem Index

| # | File Name | Topic / Concept | Description & Key Logic | Status |
|---|---|---|---|:---:|
| **01** | [`01_hello_world_and_newlines.c`](./01_hello_world_and_newlines.c) | Syntax & Output | Program entry point with `main()`, formatted text, tabs (`\t`), and newlines (`\n`). | `PASS` |
| **02** | [`02_comments_and_code_structure.c`](./02_comments_and_code_structure.c) | Comments & Style | Single-line (`//`) and multi-line (`/* */`) code documentation. | `PASS` |
| **03** | [`03_variable_types_and_specifiers.c`](./03_variable_types_and_specifiers.c) | Variables & Specifiers | Declaring `int`, `float`, `double`, `char` and printing with `%d`, `%f`, `%c`. | `PASS` |
| **04** | [`04_variable_reassignment_and_addition.c`](./04_variable_reassignment_and_addition.c) | Reassignment & Math | Overwriting existing variable values, variable addition, and expression evaluation. | `PASS` |
| **05** | [`05_rectangle_area_and_perimeter.c`](./05_rectangle_area_and_perimeter.c) | Real-Life Application | Computing area (`length * width`) and perimeter (`2 * (length + width)`). | `PASS` |
| **06** | [`06_item_cost_and_receipt.c`](./06_item_cost_and_receipt.c) | Shopping Receipt | Shopping total calculation with mixed data types, unit prices, and currency output. | `PASS` |
| **07** | [`07_score_percentage_type_conversion.c`](./07_score_percentage_type_conversion.c) | Type Conversion | Explicit casting `(float)score / max * 100` preventing integer truncation. | `PASS` |
| **08** | [`08_constants_and_circle_math.c`](./08_constants_and_circle_math.c) | Constants (`const`) | Read-only variables, circle circumference, and area calculation using `PI`. | `PASS` |
| **09** | [`09_arithmetic_and_compound_operators.c`](./09_arithmetic_and_compound_operators.c) | Operators & Modulo | Modulo `%`, integer division `/`, increment `++`, and compound assignments (`+=`). | `PASS` |
| **10** | [`10_comparison_and_sizeof_operators.c`](./10_comparison_and_sizeof_operators.c) | Relational & `sizeof` | Comparison operators (`==`, `<`, `>=`) and memory byte queries with `sizeof`. | `PASS` |
| **11** | [`11_booleans_and_voting_check.c`](./11_booleans_and_voting_check.c) | Booleans (`stdbool.h`) | Boolean data type, truth evaluations, and real-life voting eligibility check. | `PASS` |
| **12** | [`12_if_else_time_greeting.c`](./12_if_else_time_greeting.c) | Conditionals (`if-else`) | 24-hour time greeting logic (Morning, Afternoon, Evening) using branch ladders. | `PASS` |
| **13** | [`13_door_access_code_verification.c`](./13_door_access_code_verification.c) | Access Control | Security door PIN verification with conditional access grant or denial. | `PASS` |
| **14** | [`14_number_sign_and_parity.c`](./14_number_sign_and_parity.c) | Multi-Way Branching | Determining if an integer is positive/negative/zero and even/odd simultaneously. | `PASS` |
| **15** | [`15_ternary_operator_short_hand.c`](./15_ternary_operator_short_hand.c) | Ternary Operator (`? :`) | Shorthand conditional evaluation for pass/fail classification and maximum finder. | `PASS` |
| **16** | [`16_switch_day_of_week.c`](./16_switch_day_of_week.c) | Switch-Case | Mapping day index (1–7) to weekday names with `default` error handling. | `PASS` |
| **17** | [`17_switch_simple_calculator.c`](./17_switch_simple_calculator.c) | Interactive Calculator | Arithmetic calculator using `switch` on operator `char` with division-by-zero check. | `PASS` |
| **18** | [`18_while_loop_countdown.c`](./18_while_loop_countdown.c) | While Loop | Rocket launch / New Year countdown loop counting down to greeting. | `PASS` |
| **19** | [`19_while_loop_dice_simulation.c`](./19_while_loop_dice_simulation.c) | Loop Simulation | Dice progression simulator iterating until a target value (Yatzy roll) is reached. | `PASS` |
| **20** | [`20_while_loop_reverse_digits.c`](./20_while_loop_reverse_digits.c) | Algorithmic Loop | Mathematically reversing the digits of an integer using `% 10` and `/= 10`. | `PASS` |
| **21** | [`21_do_while_counter_and_menu.c`](./21_do_while_counter_and_menu.c) | Do-While Loop | Guaranteed first execution pass and menu condition validation. | `PASS` |
| **22** | [`22_for_loop_even_numbers.c`](./22_for_loop_even_numbers.c) | For Loop | Stepping with custom stride (`i += 2`) to print positive even numbers up to 20. | `PASS` |
| **23** | [`23_for_loop_step_by_tens_and_powers.c`](./23_for_loop_step_by_tens_and_powers.c) | Stride & Powers | Counting by tens to 100 and generating powers of 2 up to 1024 (`i *= 2`). | `PASS` |
| **24** | [`24_for_loop_multiplication_table.c`](./24_for_loop_multiplication_table.c) | Math Tables | Formatted single-column multiplication table generator for a given integer. | `PASS` |
| **25** | [`25_nested_for_loops_patterns_and_break.c`](./25_nested_for_loops_patterns_and_break.c) | Nested Loops & Break | 2D coordinate grid, asterisk triangle pattern, and `break`/`continue` control. | `PASS` |

---

## 💡 Notes on What I Learned

### 1. Variables, Data Types & Format Specifiers
* **Specifier Matching:** Always match the specifier to the type (`%d` for `int`, `%.2f` for `float`, `%lf` for `double`, `%c` for `char`).
* **Memory Sizes:** An `int` is typically 4 bytes, `float` is 4 bytes, `double` is 8 bytes, and `char` is 1 byte. You can confirm this on any machine using `sizeof(type)`.
* **Explicit Casting:** Dividing two integers always throws away the fractional part (`5 / 2 = 2`). If you need the decimal value (like calculating a test score percentage in problem 07), cast at least one operand: `(float)score / max`.

### 2. Constants & Good Practices
* Use `const` when a value shouldn't be altered after initialization (like `const float PI = 3.14159f`).
* Any accidental reassignment (`PI = 3.0;`) is caught immediately at compile-time instead of causing silent runtime bugs.

### 3. Decisions & Branching
* **`if...else` ladders:** Best for checking ranges or multi-condition logic (like checking whether a number is positive, negative, or zero).
* **Ternary operator (`? :`):** Great for simple inline assignments:
  ```c
  int max = (a > b) ? a : b;
  ```
* **`switch-case`:** Ideal for matching a single variable against discrete constant values (like days of the week or menu options). Always include `break;` at the end of each case unless you intentionally want fallthrough, and always include a `default:` case for unexpected inputs.

### 4. Choosing the Right Loop
* **`for` loop:** Use when you know in advance how many iterations you need (e.g. counting from 1 to 10, or stepping by tens).
* **`while` loop:** Use when the number of iterations depends on a condition that changes dynamically inside the loop (e.g. reversing digits with `n /= 10` until `n == 0`).
* **`do-while` loop:** Use when the code block must execute at least once before checking the condition (e.g. displaying an interactive menu or validating user input).
* **`break` vs `continue`:** `break` completely exits the loop; `continue` skips the rest of the current iteration and jumps directly to the next pass.

---

## 💻 How to Compile and Run

### Single File Compilation
```bash
# Example: Compile rectangle area program
gcc -Wall -Wextra 05_rectangle_area_and_perimeter.c -lm -o 05_rectangle_area_and_perimeter
./05_rectangle_area_and_perimeter

# Example: Compile multiplication table program
gcc -Wall -Wextra 24_for_loop_multiplication_table.c -lm -o 24_for_loop_multiplication_table
./24_for_loop_multiplication_table
```

### Batch Verify All 25 Programs
To verify that all 25 programs compile and execute without any issues:
```bash
for f in [0-2]*.c; do
    gcc -Wall -Wextra "$f" -lm -o test_bin && ./test_bin > /dev/null
    rm -f test_bin
    echo "✅ Passed: $f"
done
```

---

## 👨‍🎓 About Me <a id="about-me"></a>

* **Name:** [Suleman Ahmed Shuvo](https://github.com/cyanoge1-netizen)
* **Roll:** 43
* **Batch:** CSE-19
* **Session:** 2025-26
* **Department:** [Computer Science & Engineering](https://www.sec.ac.bd/)
* **College:** [Sylhet Engineering College (SEC)](https://www.sec.ac.bd/)
* **Affiliation:** [Shahjalal University of Science & Technology (SUST)](https://www.sust.edu/)
