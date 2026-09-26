# <p align="center">W3Schools Core C Practice<br><sub>Foundational Exercises — Basics to Loops</sub></p>

<p align="center">
  <a href="https://www.w3schools.com/c/index.php"><img src="https://raw.githubusercontent.com/github/explore/main/topics/c/c.png" width="80" alt="ANSI C Logo"/></a>
</p>

<h1 align="center">W3Schools Practice: Basics to Loops</h1>
<p align="center">Sequential Solutions for Fundamental Syntax, Operators, Branching & Loops (Problems 01–25)</p>

<p align="center">
  <a href="https://www.w3schools.com/c/index.php"><img src="https://img.shields.io/badge/Tutorial-W3Schools%20C-04AA6D?style=for-the-badge&logo=w3schools&logoColor=white" alt="W3Schools C Tutorial"/></a>
  <a href="https://en.cppreference.com/w/c"><img src="https://img.shields.io/badge/Language-ANSI%20C%20(C99)-00599C?style=for-the-badge&logo=c&logoColor=white" alt="ANSI C"/></a>
  <a href="https://gcc.gnu.org/"><img src="https://img.shields.io/badge/Compiler-GCC%2011%2B-brightgreen?style=for-the-badge&logo=gnu-bash&logoColor=white" alt="GCC"/></a>
  <a href="https://www.sec.ac.bd/"><img src="https://img.shields.io/badge/College-SEC%20Sylhet-E23D28?style=for-the-badge&logo=googlemaps&logoColor=white" alt="SEC Official Website"/></a>
  <a href="https://www.sust.edu/"><img src="https://img.shields.io/badge/Affiliation-SUST-006A4E?style=for-the-badge" alt="SUST Official Website"/></a>
  <a href="https://github.com/cyanoge1-netizen"><img src="https://img.shields.io/badge/Student-Roll%2043%20(CSE--19)-informational?style=for-the-badge&logo=github&logoColor=white" alt="GitHub Profile"/></a>
  <a href="https://opensource.org/licenses/MIT"><img src="https://img.shields.io/badge/License-MIT-orange?style=for-the-badge" alt="MIT License"/></a>
</p>

---

## 📌 About This Practice Set

This directory contains standalone, clean ANSI C practice solutions for the core foundational topics from the [W3Schools C Tutorial](https://www.w3schools.com/c/index.php), ranging from fundamental syntax, data types, and arithmetic operators up through conditionals, switch statements, and loop structures.

All 25 programs compile cleanly with `gcc -Wall -Wextra -lm` with zero warnings or errors.

---

## 📑 Complete Problem Index

| # | File Name | Topic | Description | Status |
|---|---|---|---|:---:|
| **01** | [`01_hello_world_and_newlines.c`](./01_hello_world_and_newlines.c) | Syntax & Output | Basic program structure, formatted text, tabs, and newlines | `PASS` |
| **02** | [`02_comments_and_code_structure.c`](./02_comments_and_code_structure.c) | Comments & Structure | Single-line (`//`) and multi-line (`/* */`) code documentation | `PASS` |
| **03** | [`03_variable_types_and_specifiers.c`](./03_variable_types_and_specifiers.c) | Variables & Specifiers | Integer, float, double, and character output formatting | `PASS` |
| **04** | [`04_variable_reassignment_and_addition.c`](./04_variable_reassignment_and_addition.c) | Variables & Arithmetic | Overwriting values, variable addition, and expression evaluation | `PASS` |
| **05** | [`05_rectangle_area_and_perimeter.c`](./05_rectangle_area_and_perimeter.c) | Real-Life Application | Calculating area and perimeter of a rectangle | `PASS` |
| **06** | [`06_item_cost_and_receipt.c`](./06_item_cost_and_receipt.c) | Real-Life Application | Shopping receipt computation with mixed data types and currency | `PASS` |
| **07** | [`07_score_percentage_type_conversion.c`](./07_score_percentage_type_conversion.c) | Type Conversion | Explicit type casting preventing integer division truncation | `PASS` |
| **08** | [`08_constants_and_circle_math.c`](./08_constants_and_circle_math.c) | Constants (`const`) | Read-only variables, circle circumference, and area calculation | `PASS` |
| **09** | [`09_arithmetic_and_compound_operators.c`](./09_arithmetic_and_compound_operators.c) | Operators | Modulus, integer division, increment, and compound assignments | `PASS` |
| **10** | [`10_comparison_and_sizeof_operators.c`](./10_comparison_and_sizeof_operators.c) | Comparison & Memory | Relational operators (`==`, `<`, `>=`) and `sizeof` byte queries | `PASS` |
| **11** | [`11_booleans_and_voting_check.c`](./11_booleans_and_voting_check.c) | Booleans (`stdbool.h`) | Boolean data type, logical evaluation, and voting eligibility | `PASS` |
| **12** | [`12_if_else_time_greeting.c`](./12_if_else_time_greeting.c) | Conditionals (`if-else`) | 24-hour time greeting logic using conditional branching | `PASS` |
| **13** | [`13_door_access_code_verification.c`](./13_door_access_code_verification.c) | Real-Life Application | Security door PIN verification with access grant/denial | `PASS` |
| **14** | [`14_number_sign_and_parity.c`](./14_number_sign_and_parity.c) | Multi-Way Branching | Determining if an integer is positive/negative/zero and even/odd | `PASS` |
| **15** | [`15_ternary_operator_short_hand.c`](./15_ternary_operator_short_hand.c) | Shorthand Conditional | Ternary operator (`? :`) for pass/fail check and maximum finder | `PASS` |
| **16** | [`16_switch_day_of_week.c`](./16_switch_day_of_week.c) | Switch-Case | Mapping day index (1–7) to weekday names with `default` handling | `PASS` |
| **17** | [`17_switch_simple_calculator.c`](./17_switch_simple_calculator.c) | Switch-Case | Arithmetic calculator with division-by-zero validation | `PASS` |
| **18** | [`18_while_loop_countdown.c`](./18_while_loop_countdown.c) | While Loop | Rocket launch / New Year countdown loop ending in greeting | `PASS` |
| **19** | [`19_while_loop_dice_simulation.c`](./19_while_loop_dice_simulation.c) | While Loop | Simulating a dice progression game until reaching target (Yatzy) | `PASS` |
| **20** | [`20_while_loop_reverse_digits.c`](./20_while_loop_reverse_digits.c) | Algorithmic Loop | Reversing the digits of an integer using arithmetic decomposition | `PASS` |
| **21** | [`21_do_while_counter_and_menu.c`](./21_do_while_counter_and_menu.c) | Do-While Loop | Guaranteed first execution pass and loop condition validation | `PASS` |
| **22** | [`22_for_loop_even_numbers.c`](./22_for_loop_even_numbers.c) | For Loop | Iterating with custom step size (`i += 2`) to print even numbers | `PASS` |
| **23** | [`23_for_loop_step_by_tens_and_powers.c`](./23_for_loop_step_by_tens_and_powers.c) | For Loop | Counting by tens to 100 and generating powers of 2 up to 1024 | `PASS` |
| **24** | [`24_for_loop_multiplication_table.c`](./24_for_loop_multiplication_table.c) | Real-Life Application | Formatted single-column multiplication table generator | `PASS` |
| **25** | [`25_nested_for_loops_patterns_and_break.c`](./25_nested_for_loops_patterns_and_break.c) | Nested Loops | 2D coordinate grid, asterisk triangle, and `break`/`continue` flow | `PASS` |

---

## 💻 How to Compile and Run

All programs compile cleanly under `gcc -Wall -Wextra -lm`:

```bash
# Compile any program
gcc -Wall -Wextra 01_hello_world_and_newlines.c -lm -o 01_hello_world_and_newlines

# Run executable
./01_hello_world_and_newlines
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
