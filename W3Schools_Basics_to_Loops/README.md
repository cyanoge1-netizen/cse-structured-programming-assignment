# W3Schools Core C Practice (Basics to Loops)

This directory contains human-crafted, clean ANSI C solutions for the core foundational topics and practical examples from the [W3Schools C Tutorial](https://www.w3schools.com/c/index.php), ranging from fundamental syntax up through loops and control statements.

---

## 📌 Problem Index

| # | File Name | Topic / Concept | Description | Status |
|---|---|---|---|---|
| 01 | [`01_hello_world_and_newlines.c`](./01_hello_world_and_newlines.c) | Syntax & Output | Basic program structure, formatted text, tabs, and newlines | Completed |
| 02 | [`02_comments_and_code_structure.c`](./02_comments_and_code_structure.c) | Comments & Structure | Single-line (`//`) and multi-line (`/* */`) code documentation | Completed |
| 03 | [`03_variable_types_and_specifiers.c`](./03_variable_types_and_specifiers.c) | Variables & Format Specifiers | Integer, float, double, and character output formatting | Completed |
| 04 | [`04_variable_reassignment_and_addition.c`](./04_variable_reassignment_and_addition.c) | Variables & Arithmetic | Overwriting values, variable addition, and expression evaluation | Completed |
| 05 | [`05_rectangle_area_and_perimeter.c`](./05_rectangle_area_and_perimeter.c) | Real-Life Application | Calculating area and perimeter of a rectangle | Completed |
| 06 | [`06_item_cost_and_receipt.c`](./06_item_cost_and_receipt.c) | Real-Life Application | Shopping receipt computation with mixed data types and currency | Completed |
| 07 | [`07_score_percentage_type_conversion.c`](./07_score_percentage_type_conversion.c) | Type Conversion | Explicit type casting preventing integer division truncation | Completed |
| 08 | [`08_constants_and_circle_math.c`](./08_constants_and_circle_math.c) | Constants (`const`) | Read-only variables, circle circumference, and area calculation | Completed |
| 09 | [`09_arithmetic_and_compound_operators.c`](./09_arithmetic_and_compound_operators.c) | Operators | Modulus, integer division, increment, and compound assignments | Completed |
| 10 | [`10_comparison_and_sizeof_operators.c`](./10_comparison_and_sizeof_operators.c) | Comparison & Memory | Relational operators (`==`, `<`, `>=`) and `sizeof` byte queries | Completed |
| 11 | [`11_booleans_and_voting_check.c`](./11_booleans_and_voting_check.c) | Booleans (`stdbool.h`) | Boolean data type, logical evaluation, and voting eligibility | Completed |
| 12 | [`12_if_else_time_greeting.c`](./12_if_else_time_greeting.c) | Conditionals (`if-else`) | 24-hour time greeting logic using conditional branching | Completed |
| 13 | [`13_door_access_code_verification.c`](./13_door_access_code_verification.c) | Real-Life Application | Security door PIN verification with access grant/denial | Completed |
| 14 | [`14_number_sign_and_parity.c`](./14_number_sign_and_parity.c) | Multi-way Branching | Determining if an integer is positive/negative/zero and even/odd | Completed |
| 15 | [`15_ternary_operator_short_hand.c`](./15_ternary_operator_short_hand.c) | Shorthand Conditional | Ternary operator (`? :`) for pass/fail check and maximum finder | Completed |
| 16 | [`16_switch_day_of_week.c`](./16_switch_day_of_week.c) | Switch-Case | Mapping day index (1–7) to weekday names with `default` handling | Completed |
| 17 | [`17_switch_simple_calculator.c`](./17_switch_simple_calculator.c) | Switch-Case | Arithmetic calculator with division-by-zero validation | Completed |
| 18 | [`18_while_loop_countdown.c`](./18_while_loop_countdown.c) | While Loop | Rocket launch / New Year countdown loop ending in greeting | Completed |
| 19 | [`19_while_loop_dice_simulation.c`](./19_while_loop_dice_simulation.c) | While Loop | Simulating a dice progression game until reaching target (Yatzy) | Completed |
| 20 | [`20_while_loop_reverse_digits.c`](./20_while_loop_reverse_digits.c) | Algorithmic While Loop | Reversing the digits of an integer using arithmetic decomposition | Completed |
| 21 | [`21_do_while_counter_and_menu.c`](./21_do_while_counter_and_menu.c) | Do-While Loop | Guaranteed first execution pass and loop condition validation | Completed |
| 22 | [`22_for_loop_even_numbers.c`](./22_for_loop_even_numbers.c) | For Loop | Iterating with custom step size (`i += 2`) to print even numbers | Completed |
| 23 | [`23_for_loop_step_by_tens_and_powers.c`](./23_for_loop_step_by_tens_and_powers.c) | For Loop | Counting by tens to 100 and generating powers of 2 up to 1024 | Completed |
| 24 | [`24_for_loop_multiplication_table.c`](./24_for_loop_multiplication_table.c) | Real-Life Application | Formatted single-column multiplication table generator | Completed |
| 25 | [`25_nested_for_loops_patterns_and_break.c`](./25_nested_for_loops_patterns_and_break.c) | Nested Loops & Control | 2D coordinate grid, asterisk triangle, and `break`/`continue` flow | Completed |

---

## 🚀 How to Compile and Run

All programs are written in standard ANSI C and compile cleanly with zero warnings or errors:

```bash
# Compile any program with strict warnings and math linkage
gcc -Wall -Wextra -lm 01_hello_world_and_newlines.c -o 01_hello_world_and_newlines

# Run the compiled binary
./01_hello_world_and_newlines
```
