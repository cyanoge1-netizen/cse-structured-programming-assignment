# <p align="center">Organisation Record Management System<br><sub>Assignment 03 — CSE 1101 Structured Programming Language</sub></p>

<p align="center">
  <a href="https://en.cppreference.com/w/c"><img src="https://raw.githubusercontent.com/github/explore/main/topics/c/c.png" width="80" alt="ANSI C Logo"/></a>
</p>

<h1 align="center">Assignment 3: Organisation Management System</h1>
<p align="center">Comprehensive Record Management Project Using Nested Structures in C</p>

<p align="center">
  <a href="https://en.cppreference.com/w/c"><img src="https://img.shields.io/badge/Language-ANSI%20C%20(C99)-00599C?style=for-the-badge&logo=c&logoColor=white" alt="ANSI C"/></a>
  <a href="https://gcc.gnu.org/"><img src="https://img.shields.io/badge/Compiler-GCC%2011%2B-brightgreen?style=for-the-badge&logo=gnu-bash&logoColor=white" alt="GCC"/></a>
  <a href="https://www.sec.ac.bd/"><img src="https://img.shields.io/badge/College-SEC%20Sylhet-E23D28?style=for-the-badge&logo=googlemaps&logoColor=white" alt="SEC Official Website"/></a>
  <a href="https://www.sust.edu/"><img src="https://img.shields.io/badge/Affiliation-SUST-006A4E?style=for-the-badge" alt="SUST Official Website"/></a>
  <a href="https://github.com/cyanoge1-netizen"><img src="https://img.shields.io/badge/Student-Roll%2043%20(CSE--19)-informational?style=for-the-badge&logo=github&logoColor=white" alt="GitHub Profile"/></a>
  <a href="https://opensource.org/licenses/MIT"><img src="https://img.shields.io/badge/License-MIT-orange?style=for-the-badge" alt="MIT License"/></a>
</p>

---

## 📑 Table of Contents

* [📌 Project Overview](#-project-overview)
* [🏗️ Data Structures Architecture](#-data-structures-architecture)
* [📋 Core Features & Menu](#-core-features--menu)
* [💡 Notes on What I Learned](#-notes-on-what-i-learned)
  * [1. Why Use Structures (`struct`)?](#1-why-use-structures-struct)
  * [2. Nested Structures for Hierarchical Data](#2-nested-structures-for-hierarchical-data)
  * [3. Arrays of Structures](#3-arrays-of-structures)
  * [4. Sorting Records with `qsort()`](#4-sorting-records-with-qsort)
  * [5. File Persistence for Long-Term Storage](#5-file-persistence-for-long-term-storage)
* [💻 How to Compile and Run](#-how-to-compile-and-run)
* [👨‍🎓 About Me](#about-me)

---

## 📌 Project Overview

This project is developed for **Assignment 03** of the **CSE 1101: Structured Programming Language** course. 

The task requires creating an interactive, real-world **Organisation Management System** using **C structures (`struct`)**. The program models an entire organization, manages employee rosters, performs complex search and filter queries, computes analytics/payroll statistics, and saves/loads records from disk files.

---

## 🏗️ Data Structures Architecture

The program uses hierarchical structures to organize data cleanly:

```c
// 1. Nested Date structure
struct Date {
    int day;
    int month;
    int year;
};

// 2. Individual Employee record
struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
    struct Date joinDate;
};

// 3. Main Organisation structure encapsulating an array of Employees
struct Organisation {
    char name[100];
    char location[100];
    char regNo[30];
    int estYear;
    float annualBudget;
    int totalEmployees;
    struct Employee employees[MAX_EMPLOYEES];
};
```

---

## 📋 Core Features & Menu

The program provides a clean, user-friendly interactive menu:

* **1. Input / Update Organisation Details:** Sets company name, location, registration number, establishment year, and budget.
* **2. Add New Employee:** Registers an employee with duplicate ID protection and formatted date input.
* **3. Display Organisation & All Employees:** Formats and prints a clean ASCII table of all staff members.
* **4. View Statistical Summary & Payroll:** Computes total monthly/annual payroll, average salary, highest/lowest earners, and payroll budget percentage.
* **5. Search Employee:** Supports exact ID search, case-insensitive substring name search, and designation search.
* **6. Filter by Department:** Displays only staff in a given department and gives a headcount.
* **7. Sort Employees:** Multi-criteria sorting using standard C `qsort()` (by salary ascending/descending, alphabetical by name, or by ID).
* **8. Update Employee Details:** In-place modifications for salary, designation, or department.
* **9. Remove Employee:** Removes an employee by ID and shifts remaining records cleanly.
* **10 & 11. Save & Load File I/O:** Complete disk persistence so records are not lost upon exit.
* **12. Load Sample Demo Data:** Loads a sample organisation with 6 realistic staff members for quick testing and grading.

---

## 💡 Notes on What I Learned

### 1. Why Use Structures (`struct`)?
Instead of managing multiple parallel arrays (`names[100]`, `salaries[100]`, `ids[100]`), a `struct` bundles related variables under a single user-defined data type. This keeps data tightly coupled and prevents synchronization bugs when sorting or deleting entries.

### 2. Nested Structures for Hierarchical Data
Embedding `struct Date` inside `struct Employee` demonstrates composition in C. It makes the code modular, reusable, and much easier to read.

### 3. Arrays of Structures
Using `struct Employee employees[MAX_EMPLOYEES]` inside `struct Organisation` simulates a database table in memory, allowing quick lookups, updates, and linear iterations.

### 4. Sorting Records with `qsort()`
Instead of writing manual bubble sort loops, utilizing standard library `<stdlib.h>` `qsort()` with custom comparator functions (`compareSalaryDesc`, `compareName`, etc.) produces fast $O(n \log n)$ sorting with clean callback architecture.

### 5. File Persistence for Long-Term Storage
Formatted file I/O with `fprintf()` and `fgets()`/`fscanf()` ensures organizational data survives between terminal sessions.

---

## 💻 How to Compile and Run

Compile and run with `gcc`:
```bash
gcc -Wall -Wextra organisation.c -o organisation
./organisation
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
