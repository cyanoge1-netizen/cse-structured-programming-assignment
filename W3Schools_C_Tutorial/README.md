# <p align="center">W3Schools Core C Programming<br><sub>Reference Manual — CSE 1101 Structured Programming Language</sub></p>

<p align="center">
  <a href="https://www.w3schools.com/c/index.php"><img src="https://raw.githubusercontent.com/github/explore/main/topics/c/c.png" width="80" alt="ANSI C Logo"/></a>
</p>

<h1 align="center">W3Schools C Tutorial: Chapter Guide</h1>
<p align="center">Comprehensive Topic Implementations from Syntax to Pointers (Chapters 01–14)</p>

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

## 📌 What is in this Assignment?

This directory contains complete, working C implementations covering the core foundational half of the [W3Schools C Tutorial](https://www.w3schools.com/c/index.php) (Chapters 01 through 14).

It builds up C programming concepts step by step: starting from basic program structure and data types, moving through conditionals and loop controls, and finishing with arrays, strings, buffer input, and memory pointers.

All 57 programs are organized into dedicated chapter folders and compile cleanly using `gcc -Wall -Wextra -lm` with zero warnings or errors.

---

## 📑 Complete Chapter & Problem Index

### 1. Syntax & Output ([`01_Syntax_and_Output/`](./01_Syntax_and_Output/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_hello_world.c`](./01_Syntax_and_Output/01_hello_world.c) | Hello World | Basic C program skeleton, `#include <stdio.h>`, and `printf()` text output. | `PASS` |
| [`02_print_multiple_lines.c`](./01_Syntax_and_Output/02_print_multiple_lines.c) | Newlines | Printing on separate lines using `\n` vs. same-line output without `\n`. | `PASS` |
| [`03_escape_sequences.c`](./01_Syntax_and_Output/03_escape_sequences.c) | Escape Characters | Practical examples of `\n` (newline), `\t` (tab), `\\` (backslash), and `\"` (quotes). | `PASS` |
| [`04_comments_usage.c`](./01_Syntax_and_Output/04_comments_usage.c) | Code Comments | Single-line (`//`) and multi-line (`/* */`) comments for documenting code. | `PASS` |

### 2. Variables & Data Types ([`02_Variables_and_Data_Types/`](./02_Variables_and_Data_Types/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_variable_declaration.c`](./02_Variables_and_Data_Types/01_variable_declaration.c) | Declarations | Declaring and initializing `int`, `float`, `double`, and `char` variables. | `PASS` |
| [`02_format_specifiers.c`](./02_Variables_and_Data_Types/02_format_specifiers.c) | Format Specifiers | Printing different types with `%d`, `%f`, `%lf`, `%c`, and `%s`. | `PASS` |
| [`03_changing_values.c`](./02_Variables_and_Data_Types/03_changing_values.c) | Reassignment | Overwriting existing variable values and copying values between variables. | `PASS` |
| [`04_multiple_variables.c`](./02_Variables_and_Data_Types/04_multiple_variables.c) | Multi-Declaration | Declaring and assigning multiple variables of the same type in one statement. | `PASS` |
| [`05_data_type_sizes.c`](./02_Variables_and_Data_Types/05_data_type_sizes.c) | `sizeof` Operator | Querying exact memory size in bytes for each fundamental C data type. | `PASS` |
| [`06_decimal_precision.c`](./02_Variables_and_Data_Types/06_decimal_precision.c) | Float Precision | Controlling digits after the decimal point with `%.1f`, `%.2f`, and `%.4f`. | `PASS` |
| [`07_type_conversion.c`](./02_Variables_and_Data_Types/07_type_conversion.c) | Type Casting | Implicit conversion vs explicit casting `(float)a / b` to stop integer truncation. | `PASS` |
| [`08_reallife_student_data.c`](./02_Variables_and_Data_Types/08_reallife_student_data.c) | Student Record | Real-life student fee and score computation using mixed types. | `PASS` |

### 3. Constants ([`03_Constants/`](./03_Constants/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_constants_declaration.c`](./03_Constants/01_constants_declaration.c) | `const` Keyword | Declaring read-only variables that cannot be accidentally modified. | `PASS` |
| [`02_circle_area_with_const.c`](./03_Constants/02_circle_area_with_const.c) | Circle Math | Calculating circumference and area using `const float PI = 3.14159f`. | `PASS` |

### 4. Operators ([`04_Operators/`](./04_Operators/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_arithmetic_operators.c`](./04_Operators/01_arithmetic_operators.c) | Basic Arithmetic | Addition, subtraction, multiplication, integer division, modulo `%`, and increment `++`. | `PASS` |
| [`02_assignment_operators.c`](./04_Operators/02_assignment_operators.c) | Compound Assignment | In-place operators: `+=`, `-=`, `*=`, `/=`, and `%=`. | `PASS` |
| [`03_comparison_operators.c`](./04_Operators/03_comparison_operators.c) | Relational Ops | Comparing values (`==`, `!=`, `<`, `>`, `<=`, `>=`) returning boolean `1` or `0`. | `PASS` |
| [`04_logical_operators.c`](./04_Operators/04_logical_operators.c) | Logical Ops | Boolean logic: AND (`&&`), OR (`\|\|`), and NOT (`!`). | `PASS` |
| [`05_operator_precedence.c`](./04_Operators/05_operator_precedence.c) | Precedence | Order of evaluation and using parentheses `()` to avoid calculation mistakes. | `PASS` |

### 5. Booleans ([`05_Booleans/`](./05_Booleans/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_boolean_basics.c`](./05_Booleans/01_boolean_basics.c) | `<stdbool.h>` | Using `bool`, `true` (1), and `false` (0) in standard C99. | `PASS` |
| [`02_boolean_expressions.c`](./05_Booleans/02_boolean_expressions.c) | Truth Evaluation | Evaluating relational expressions directly into boolean values. | `PASS` |
| [`03_reallife_voting_age.c`](./05_Booleans/03_reallife_voting_age.c) | Eligibility Check | Real-life check validating citizen voting eligibility based on age. | `PASS` |

### 6. If...Else Conditions ([`06_If_Else_Conditions/`](./06_If_Else_Conditions/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_simple_if.c`](./06_If_Else_Conditions/01_simple_if.c) | Simple `if` | Executing a code block only when a given condition evaluates to true. | `PASS` |
| [`02_if_else.c`](./06_If_Else_Conditions/02_if_else.c) | Two-Way Branch | Providing an alternate `else` path when the condition evaluates to false. | `PASS` |
| [`03_else_if_ladder.c`](./06_If_Else_Conditions/03_else_if_ladder.c) | Multi-Way Ladder | Evaluating multiple mutually exclusive conditions in sequence. | `PASS` |
| [`04_ternary_operator.c`](./06_If_Else_Conditions/04_ternary_operator.c) | Ternary `? :` | Compact shorthand conditional expression `(condition) ? true_val : false_val`. | `PASS` |
| [`05_nested_if.c`](./06_If_Else_Conditions/05_nested_if.c) | Nested Decisions | Placing `if` statements inside another `if` block for multi-layer validation. | `PASS` |
| [`06_reallife_passcode_and_numbers.c`](./06_If_Else_Conditions/06_reallife_passcode_and_numbers.c) | Security PIN Check | Validating door passcode and checking whether a number is positive/negative/even/odd. | `PASS` |

### 7. Switch Statement ([`07_Switch_Statement/`](./07_Switch_Statement/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_day_of_week.c`](./07_Switch_Statement/01_day_of_week.c) | Day Lookup | Mapping integer day numbers (1–7) to weekday names with a `default` case. | `PASS` |
| [`02_grade_evaluator.c`](./07_Switch_Statement/02_grade_evaluator.c) | Letter Grades | Grouping multiple letter grades using switch fallthrough without duplicate code. | `PASS` |

### 8. While Loops ([`08_While_Loops/`](./08_While_Loops/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_while_loop_counter.c`](./08_While_Loops/01_while_loop_counter.c) | Basic While | Repeating a block of statements while the test condition remains true. | `PASS` |
| [`02_do_while_loop.c`](./08_While_Loops/02_do_while_loop.c) | Do-While | Post-tested loop guaranteed to execute at least once before checking condition. | `PASS` |
| [`03_reallife_countdown_and_dice.c`](./08_While_Loops/03_reallife_countdown_and_dice.c) | Countdown Loop | Simulating a rocket launch countdown timer and even-number traversal. | `PASS` |

### 9. For Loops ([`09_For_Loops/`](./09_For_Loops/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_for_loop_basics.c`](./09_For_Loops/01_for_loop_basics.c) | For Loop | Counting up, stepping by increments (`i += 2`), and counting down. | `PASS` |
| [`02_nested_for_loops.c`](./09_For_Loops/02_nested_for_loops.c) | 2D Coordinates | Nested loop iteration generating 2D grid coordinates and star triangles. | `PASS` |
| [`03_reallife_multiplication_table.c`](./09_For_Loops/03_reallife_multiplication_table.c) | Math Table | Formatted single-column multiplication table generator for any integer. | `PASS` |

### 10. Break & Continue ([`10_Break_and_Continue/`](./10_Break_and_Continue/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_break_in_loops.c`](./10_Break_and_Continue/01_break_in_loops.c) | `break` Keyword | Immediately exiting a loop when an early termination condition is met. | `PASS` |
| [`02_continue_in_loops.c`](./10_Break_and_Continue/02_continue_in_loops.c) | `continue` Keyword | Skipping the remainder of the current loop pass and jumping to the next iteration. | `PASS` |
| [`03_break_continue_while.c`](./10_Break_and_Continue/03_break_continue_while.c) | Loop Safety | Managing loop counters correctly with `continue` inside `while` loops to avoid infinite loops. | `PASS` |

### 11. Arrays ([`11_Arrays/`](./11_Arrays/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_array_basics.c`](./11_Arrays/01_array_basics.c) | Array Indexing | Declaring, initializing, accessing (0-indexed), and updating 1D array elements. | `PASS` |
| [`02_array_size_and_length.c`](./11_Arrays/02_array_size_and_length.c) | Array Length | Dynamically computing number of elements using `sizeof(arr) / sizeof(arr[0])`. | `PASS` |
| [`03_array_average.c`](./11_Arrays/03_array_average.c) | Math Averages | Summing array values and calculating the exact floating-point average. | `PASS` |
| [`04_lowest_highest_element.c`](./11_Arrays/04_lowest_highest_element.c) | Min & Max | Linear scan algorithm finding the lowest and highest number in a dataset. | `PASS` |
| [`05_multidimensional_arrays.c`](./11_Arrays/05_multidimensional_arrays.c) | 2D Arrays | Declaring matrices, accessing rows/columns `matrix[i][j]`, and nested traversal. | `PASS` |

### 12. Strings ([`12_Strings/`](./12_Strings/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_string_basics.c`](./12_Strings/01_string_basics.c) | Character Arrays | Null-terminated string anatomy (`\0`), declaring string literals, and `%s`. | `PASS` |
| [`02_modify_strings.c`](./12_Strings/02_modify_strings.c) | Modifying Text | Updating individual characters by index and looping through strings until `\0`. | `PASS` |
| [`03_special_characters.c`](./12_Strings/03_special_characters.c) | String Escapes | Handling quotes, newlines, and backslashes cleanly inside string literals. | `PASS` |
| [`04_string_functions.c`](./12_Strings/04_string_functions.c) | `<string.h>` | Standard library string tools: `strlen()`, `strcpy()`, `strcat()`, and `strcmp()`. | `PASS` |

### 13. User Input ([`13_User_Input/`](./13_User_Input/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_single_and_multiple_input.c`](./13_User_Input/01_single_and_multiple_input.c) | `scanf()` Basics | Reading integer and character values from standard input with address `&`. | `PASS` |
| [`02_string_input_scanf_vs_fgets.c`](./13_User_Input/02_string_input_scanf_vs_fgets.c) | Safe Line Input | Comparing `scanf()` (stops at spaces) vs `fgets()` (reads full lines safely). | `PASS` |
| [`03_reallife_user_profile.c`](./13_User_Input/03_reallife_user_profile.c) | User Profile | Prompting and reading multiple user attributes in a clean command-line form. | `PASS` |

### 14. Memory Addresses & Pointers ([`14_Memory_Addresses_and_Pointers/`](./14_Memory_Addresses_and_Pointers/))
| File | Topic | What the Code Does | Status |
|---|---|---|:---:|
| [`01_memory_address.c`](./14_Memory_Addresses_and_Pointers/01_memory_address.c) | Address Operator | Inspecting hexadecimal RAM memory addresses using `&` and `%p`. | `PASS` |
| [`02_pointer_declaration_and_dereference.c`](./14_Memory_Addresses_and_Pointers/02_pointer_declaration_and_dereference.c) | Dereferencing | Declaring pointers (`int *ptr = &val;`) and reading values through `*ptr`. | `PASS` |
| [`03_modify_value_via_pointer.c`](./14_Memory_Addresses_and_Pointers/03_modify_value_via_pointer.c) | Indirect Mutation | Modifying a variable's value indirectly in memory using its pointer address. | `PASS` |
| [`04_pointers_and_arrays.c`](./14_Memory_Addresses_and_Pointers/04_pointers_and_arrays.c) | Pointer & Array Decay | Demonstrating that array names act as pointers: `*(arr + i)` equals `arr[i]`. | `PASS` |
| [`05_pointer_arithmetic.c`](./14_Memory_Addresses_and_Pointers/05_pointer_arithmetic.c) | Pointer Arithmetic | Moving pointers in memory using `ptr++` (steps forward by `sizeof(type)` bytes). | `PASS` |

---

## 💡 Notes on What I Learned

### 1. Variables, Data Types & Casting
* Integer division in C truncates the decimal portion (e.g. `5 / 2 = 2`). If you need the decimal result, explicitly cast at least one operand: `(float)5 / 2 = 2.5`.
* `sizeof` gives the size in bytes. An `int` is typically 4 bytes, `float` is 4 bytes, `double` is 8 bytes, and `char` is 1 byte.
* Floats can be formatted precisely: `%.2f` rounds to 2 decimal places.

### 2. Loops and Flow Control
* **`for` vs `while`:** Use `for` when you know how many times you need to loop (like iterating through an array). Use `while` when looping depends on a condition (like waiting for valid user input).
* **`do-while`:** Runs the loop body first, then checks the condition. Useful for interactive menus where you need to display choices at least once.
* **`continue` in `while` loops:** If you use `continue` inside a `while` loop, make sure the loop counter (`i++`) increments *before* calling `continue`, otherwise it loops infinitely!

### 3. Arrays & Strings
* In C, arrays are zero-indexed (`arr[0]` to `arr[size - 1]`).
* You can get the number of elements in an array using:
  ```c
  int length = sizeof(arr) / sizeof(arr[0]);
  ```
* A string in C is simply an array of `char` ending with a special null-terminator byte (`'\0'`).
* **`scanf("%s", ...)` vs `fgets()`:** `scanf("%s")` stops reading as soon as it hits a space, so you can't read a full name like `"Suleman Shuvo"`. Always use `fgets(buffer, sizeof(buffer), stdin)` to read entire lines with spaces safely.

### 4. Pointers & Memory
* Every variable lives at a specific address in your computer's RAM. You get this address using the `&` operator (`&x`), and print it with `%p`.
* A pointer is a variable that stores another variable's memory address:
  ```c
  int age = 20;
  int *ptr = &age; // ptr holds the address of age
  ```
* To access or modify the value stored at that address, use the dereference operator `*`:
  ```c
  *ptr = 21; // age is now 21
  ```
* In C, an array's name is actually a pointer to its first element: `*arr` is the same as `arr[0]`, and `*(arr + i)` is the exact same as `arr[i]`. When you increment a pointer (`ptr++`), it advances by `sizeof(type)` bytes, automatically pointing to the next element!

---

## 💻 How to Compile and Run

### Compile Any Single File
```bash
# Example: Compile array lowest/highest finder
gcc -Wall -Wextra 11_Arrays/04_lowest_highest_element.c -o min_max_demo
./min_max_demo

# Example: Compile pointer program
gcc -Wall -Wextra 14_Memory_Addresses_and_Pointers/02_pointer_declaration_and_dereference.c -o pointer_demo
./pointer_demo
```

### Batch Verify All 14 Chapters
Run this loop in your terminal to compile and test every program in the assignment:
```bash
for dir in [0-1]*; do
    if [ -d "$dir" ]; then
        echo "=== Testing $dir ==="
        for f in "$dir"/*.c; do
            gcc -Wall -Wextra "$f" -lm -o test_bin && ./test_bin > /dev/null
            rm -f test_bin
            echo "  OK: $(basename "$f")"
        done
    fi
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
