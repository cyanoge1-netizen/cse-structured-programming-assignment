# W3Schools C Tutorial - Example Problems & Concepts

This directory contains clean, structured, and modular C implementations covering fundamental C programming concepts from the [W3Schools C Tutorial](https://www.w3schools.com/c/c_intro.php), spanning from basic syntax up to pointers and pointer arithmetic.

---

## 📚 Curriculum & Topic Index

### 1. [Syntax & Output](./01_Syntax_and_Output/)
* [`01_hello_world.c`](./01_Syntax_and_Output/01_hello_world.c) - Basic program structure, `#include <stdio.h>`, `main()`, and string output.
* [`02_print_multiple_lines.c`](./01_Syntax_and_Output/02_print_multiple_lines.c) - Printing on multiple lines using `\n` vs printing on the same line.
* [`03_escape_sequences.c`](./01_Syntax_and_Output/03_escape_sequences.c) - Common escape characters: `\n`, `\t`, `\\`, and `\"`.
* [`04_comments_usage.c`](./01_Syntax_and_Output/04_comments_usage.c) - Single-line (`//`) and multi-line (`/* ... */`) comments.

### 2. [Variables & Data Types](./02_Variables_and_Data_Types/)
* [`01_variable_declaration.c`](./02_Variables_and_Data_Types/01_variable_declaration.c) - Declaring `int`, `float`, `double`, and `char`.
* [`02_format_specifiers.c`](./02_Variables_and_Data_Types/02_format_specifiers.c) - Displaying variables with `%d`, `%f`, `%c`, etc.
* [`03_changing_values.c`](./02_Variables_and_Data_Types/03_changing_values.c) - Reassigning and overwriting variable values.
* [`04_multiple_variables.c`](./02_Variables_and_Data_Types/04_multiple_variables.c) - Declaring multiple variables and chained assignment.
* [`05_data_type_sizes.c`](./02_Variables_and_Data_Types/05_data_type_sizes.c) - Determining data type memory footprint with `sizeof`.
* [`06_decimal_precision.c`](./02_Variables_and_Data_Types/06_decimal_precision.c) - Precision formatting (`%.1f`, `%.2f`, `%.4f`).
* [`07_type_conversion.c`](./02_Variables_and_Data_Types/07_type_conversion.c) - Implicit casting vs. explicit type casting `(float)a / b`.
* [`08_reallife_student_data.c`](./02_Variables_and_Data_Types/08_reallife_student_data.c) - Real-life model for student information and fee calculations.

### 3. [Constants](./03_Constants/)
* [`01_constants_declaration.c`](./03_Constants/01_constants_declaration.c) - Defining read-only values with the `const` keyword.
* [`02_circle_area_with_const.c`](./03_Constants/02_circle_area_with_const.c) - Calculating circle area and circumference using `const float PI`.

### 4. [Operators](./04_Operators/)
* [`01_arithmetic_operators.c`](./04_Operators/01_arithmetic_operators.c) - Arithmetic operations (`+`, `-`, `*`, `/`, `%`, `++`, `--`).
* [`02_assignment_operators.c`](./04_Operators/02_assignment_operators.c) - Compound assignment operators (`+=`, `-=`, `*=`, `/=`, `%=`).
* [`03_comparison_operators.c`](./04_Operators/03_comparison_operators.c) - Relational comparison returning `1` (true) or `0` (false).
* [`04_logical_operators.c`](./04_Operators/04_logical_operators.c) - Logical operators: AND (`&&`), OR (`||`), and NOT (`!`).
* [`05_operator_precedence.c`](./04_Operators/05_operator_precedence.c) - Operator precedence and grouping expressions with parentheses.

### 5. [Booleans](./05_Booleans/)
* [`01_boolean_basics.c`](./05_Booleans/01_boolean_basics.c) - Using `<stdbool.h>`, `true`, and `false`.
* [`02_boolean_expressions.c`](./05_Booleans/02_boolean_expressions.c) - Evaluating condition expressions into boolean truth values.
* [`03_reallife_voting_age.c`](./05_Booleans/03_reallife_voting_age.c) - Real-life voting eligibility validation.

### 6. [If...Else Conditions](./06_If_Else_Conditions/)
* [`01_simple_if.c`](./06_If_Else_Conditions/01_simple_if.c) - Simple `if` branch.
* [`02_if_else.c`](./06_If_Else_Conditions/02_if_else.c) - Two-way `if...else` decision making.
* [`03_else_if_ladder.c`](./06_If_Else_Conditions/03_else_if_ladder.c) - Multi-branch `else if` ladder.
* [`04_ternary_operator.c`](./06_If_Else_Conditions/04_ternary_operator.c) - Ternary conditional operator `(condition) ? exp1 : exp2`.
* [`05_nested_if.c`](./06_If_Else_Conditions/05_nested_if.c) - Conditions placed inside other conditional blocks.
* [`06_reallife_passcode_and_numbers.c`](./06_If_Else_Conditions/06_reallife_passcode_and_numbers.c) - Real-life door passcode check and number sign detection.

### 7. [Switch Statement](./07_Switch_Statement/)
* [`01_day_of_week.c`](./07_Switch_Statement/01_day_of_week.c) - Mapping numeric days to weekday names with `default`.
* [`02_grade_evaluator.c`](./07_Switch_Statement/02_grade_evaluator.c) - Academic grade classification with case fallthrough grouping.

### 8. [While Loops](./08_While_Loops/)
* [`01_while_loop_counter.c`](./08_While_Loops/01_while_loop_counter.c) - Basic while loop iteration with counter variable.
* [`02_do_while_loop.c`](./08_While_Loops/02_do_while_loop.c) - Post-test loop guaranteed to execute at least once.
* [`03_reallife_countdown_and_dice.c`](./08_While_Loops/03_reallife_countdown_and_dice.c) - Countdown timer and even number traversal.

### 9. [For Loops](./09_For_Loops/)
* [`01_for_loop_basics.c`](./09_For_Loops/01_for_loop_basics.c) - Standard counting and stepping loops.
* [`02_nested_for_loops.c`](./09_For_Loops/02_nested_for_loops.c) - 2D matrix coordinate iteration and star pattern generation.
* [`03_reallife_multiplication_table.c`](./09_For_Loops/03_reallife_multiplication_table.c) - Dynamic multiplication table generator.

### 10. [Break & Continue](./10_Break_and_Continue/)
* [`01_break_in_loops.c`](./10_Break_and_Continue/01_break_in_loops.c) - Terminating loops early with `break`.
* [`02_continue_in_loops.c`](./10_Break_and_Continue/02_continue_in_loops.c) - Skipping specific iterations with `continue`.
* [`03_break_continue_while.c`](./10_Break_and_Continue/03_break_continue_while.c) - Correct counter management with `continue` in `while` loops.

### 11. [Arrays](./11_Arrays/)
* [`01_array_basics.c`](./11_Arrays/01_array_basics.c) - Indexing, accessing, and modifying 1D arrays.
* [`02_array_size_and_length.c`](./11_Arrays/02_array_size_and_length.c) - Dynamically computing array length via `sizeof`.
* [`03_array_average.c`](./11_Arrays/03_array_average.c) - Computing summation and arithmetic mean of array data.
* [`04_lowest_highest_element.c`](./11_Arrays/04_lowest_highest_element.c) - Searching minimum and maximum values in an array dataset.
* [`05_multidimensional_arrays.c`](./11_Arrays/05_multidimensional_arrays.c) - 2D array representation and nested matrix traversal.

### 12. [Strings](./12_Strings/)
* [`01_string_basics.c`](./12_Strings/01_string_basics.c) - Character arrays, null-terminator (`\0`), and `%s`.
* [`02_modify_strings.c`](./12_Strings/02_modify_strings.c) - Modifying string characters by index and manual character traversal.
* [`03_special_characters.c`](./12_Strings/03_special_characters.c) - Escape sequences within strings (`\"`, `\'`, `\\`).
* [`04_string_functions.c`](./12_Strings/04_string_functions.c) - Standard library functions: `strlen()`, `strcat()`, `strcpy()`, and `strcmp()`.

### 13. [User Input](./13_User_Input/)
* [`01_single_and_multiple_input.c`](./13_User_Input/01_single_and_multiple_input.c) - Reading single and multiple values via `scanf()`.
* [`02_string_input_scanf_vs_fgets.c`](./13_User_Input/02_string_input_scanf_vs_fgets.c) - Comparing `scanf()` (whitespace-delimited) vs `fgets()` (full-line reading).
* [`03_reallife_user_profile.c`](./13_User_Input/03_reallife_user_profile.c) - Multi-field student user profile input simulation.

### 14. [Memory Addresses & Pointers](./14_Memory_Addresses_and_Pointers/)
* [`01_memory_address.c`](./14_Memory_Addresses_and_Pointers/01_memory_address.c) - Memory address reference operator (`&`) and `%p`.
* [`02_pointer_declaration_and_dereference.c`](./14_Memory_Addresses_and_Pointers/02_pointer_declaration_and_dereference.c) - Declaring pointers (`*ptr = &var`) and dereferencing (`*ptr`).
* [`03_modify_value_via_pointer.c`](./14_Memory_Addresses_and_Pointers/03_modify_value_via_pointer.c) - Modifying variable values directly through pointer memory reference.
* [`04_pointers_and_arrays.c`](./14_Memory_Addresses_and_Pointers/04_pointers_and_arrays.c) - Relationship between array names and pointers (`*(arr + i)`).
* [`05_pointer_arithmetic.c`](./14_Memory_Addresses_and_Pointers/05_pointer_arithmetic.c) - Navigating memory using pointer increment (`ptr++`).

---

## 🚀 How to Compile and Run

To compile any program using standard GCC:

```bash
# Example: Compile and run a pointer program
gcc 14_Memory_Addresses_and_Pointers/02_pointer_declaration_and_dereference.c -o pointer_demo
./pointer_demo

# Example: Compile with strict ANSI/C99 compliance
gcc -Wall -Wextra -std=c99 11_Arrays/04_lowest_highest_element.c -o min_max_demo
./min_max_demo
```
