/*
 * CSE 1101: Structured Programming Language
 * Assignment 03: Organisation Management System
 *
 * Topic: Structures in C (Nested structs, arrays of structs, records)
 * Author: Suleman Ahmed Shuvo
 * Roll: 43 | Batch: CSE-19 | Session: 2025-26
 * Department of Computer Science & Engineering
 * Sylhet Engineering College (SEC)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_EMPLOYEES 100

// Structure to store dates (e.g. employee joining date)
struct Date {
    int day;
    int month;
    int year;
};

// Structure to store individual employee details
struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
    struct Date joinDate;
};

// Structure to store organisation information and its staff
struct Organisation {
    char name[100];
    char location[100];
    char regNo[30];
    int estYear;
    float annualBudget;
    int totalEmployees;
    struct Employee employees[MAX_EMPLOYEES];
};

// Helper function to remove trailing newline from fgets
void removeNewline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

// Case-insensitive substring comparison for search
int matchesQuery(const char *text, const char *query) {
    char t[100], q[100];
    size_t i;

    for (i = 0; i < sizeof(t) - 1 && text[i] != '\0'; i++) {
        t[i] = (char)tolower((unsigned char)text[i]);
    }
    t[i] = '\0';

    for (i = 0; i < sizeof(q) - 1 && query[i] != '\0'; i++) {
        q[i] = (char)tolower((unsigned char)query[i]);
    }
    q[i] = '\0';

    return (strstr(t, q) != NULL);
}

// Find employee index by ID (returns -1 if not found)
int findEmployeeIndex(const struct Organisation *org, int id) {
    for (int i = 0; i < org->totalEmployees; i++) {
        if (org->employees[i].id == id) {
            return i;
        }
    }
    return -1;
}

// Input or update organisation details
void inputOrganisationDetails(struct Organisation *org) {
    printf("\n--- Enter Organisation Profile ---\n");
    printf("Organisation Name: ");
    fgets(org->name, sizeof(org->name), stdin);
    removeNewline(org->name);

    printf("Location (City, Country): ");
    fgets(org->location, sizeof(org->location), stdin);
    removeNewline(org->location);

    printf("Registration / Trade License No: ");
    fgets(org->regNo, sizeof(org->regNo), stdin);
    removeNewline(org->regNo);

    printf("Year of Establishment: ");
    scanf("%d", &org->estYear);

    printf("Annual Budget (in USD / BDT): ");
    scanf("%f", &org->annualBudget);
    getchar(); // Clear trailing newline

    printf("Organisation information updated successfully!\n");
}

// Add a new employee
void addEmployee(struct Organisation *org) {
    if (org->totalEmployees >= MAX_EMPLOYEES) {
        printf("\nError: Organisation staff limit reached (%d max).\n", MAX_EMPLOYEES);
        return;
    }

    struct Employee emp;
    printf("\n--- Add New Employee ---\n");

    while (1) {
        printf("Enter Employee ID: ");
        if (scanf("%d", &emp.id) != 1) {
            while (getchar() != '\n');
            printf("Invalid ID. Please enter an integer.\n");
            continue;
        }
        getchar(); // consume newline

        if (findEmployeeIndex(org, emp.id) != -1) {
            printf("An employee with ID %d already exists. Try a unique ID.\n", emp.id);
        } else {
            break;
        }
    }

    printf("Full Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    removeNewline(emp.name);

    printf("Designation / Role: ");
    fgets(emp.designation, sizeof(emp.designation), stdin);
    removeNewline(emp.designation);

    printf("Department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    removeNewline(emp.department);

    printf("Monthly Salary: ");
    scanf("%f", &emp.salary);

    printf("Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joinDate.day, &emp.joinDate.month, &emp.joinDate.year);
    getchar(); // consume newline

    org->employees[org->totalEmployees] = emp;
    org->totalEmployees++;

    printf("Employee '%s' (ID: %d) added successfully!\n", emp.name, emp.id);
}

// Helper to print a single employee row
void printEmployeeRow(const struct Employee *e) {
    printf("| %-5d | %-20s | %-18s | %-15s | %10.2f | %02d/%02d/%04d |\n",
           e->id, e->name, e->designation, e->department, e->salary,
           e->joinDate.day, e->joinDate.month, e->joinDate.year);
}

// Helper to print table headers
void printTableHeader(void) {
    printf("+-------+----------------------+--------------------+-----------------+------------+------------+\n");
    printf("| %-5s | %-20s | %-18s | %-15s | %-10s | %-10s |\n",
           "ID", "Name", "Designation", "Department", "Salary", "Join Date");
    printf("+-------+----------------------+--------------------+-----------------+------------+------------+\n");
}

void printTableFooter(void) {
    printf("+-------+----------------------+--------------------+-----------------+------------+------------+\n");
}

// Display complete organization profile and all employees
void displayOrganisation(const struct Organisation *org) {
    printf("\n=========================================================================================\n");
    printf("                              ORGANISATION PROFILE & ROSTER                              \n");
    printf("=========================================================================================\n");
    printf("Name            : %s\n", org->name);
    printf("Location        : %s\n", org->location);
    printf("Registration No : %s\n", org->regNo);
    printf("Established     : %d\n", org->estYear);
    printf("Annual Budget   : %.2f\n", org->annualBudget);
    printf("Total Employees : %d / %d\n", org->totalEmployees, MAX_EMPLOYEES);
    printf("=========================================================================================\n");

    if (org->totalEmployees == 0) {
        printf("No employees added yet.\n");
        return;
    }

    printf("\nEmployee List:\n");
    printTableHeader();
    for (int i = 0; i < org->totalEmployees; i++) {
        printEmployeeRow(&org->employees[i]);
    }
    printTableFooter();
}

// Display statistics and payroll analytics
void displayStatistics(const struct Organisation *org) {
    printf("\n=====================================================================\n");
    printf("                  ORGANISATION ANALYTICS & SUMMARY                   \n");
    printf("=====================================================================\n");
    printf("Organisation : %s\n", org->name);
    printf("Location     : %s\n", org->location);
    printf("Total Staff  : %d\n", org->totalEmployees);

    if (org->totalEmployees == 0) {
        printf("No employee records to calculate statistics.\n");
        return;
    }

    float totalMonthlySalary = 0.0f;
    int maxIdx = 0;
    int minIdx = 0;

    for (int i = 0; i < org->totalEmployees; i++) {
        float sal = org->employees[i].salary;
        totalMonthlySalary += sal;

        if (sal > org->employees[maxIdx].salary) {
            maxIdx = i;
        }
        if (sal < org->employees[minIdx].salary) {
            minIdx = i;
        }
    }

    float avgSalary = totalMonthlySalary / org->totalEmployees;
    float annualPayroll = totalMonthlySalary * 12.0f;

    printf("Total Monthly Payroll : %.2f\n", totalMonthlySalary);
    printf("Total Annual Payroll  : %.2f\n", annualPayroll);
    printf("Average Salary        : %.2f\n", avgSalary);
    printf("Highest Paid Employee : %s (%.2f - %s)\n",
           org->employees[maxIdx].name, org->employees[maxIdx].salary, org->employees[maxIdx].designation);
    printf("Lowest Paid Employee  : %s (%.2f - %s)\n",
           org->employees[minIdx].name, org->employees[minIdx].salary, org->employees[minIdx].designation);

    if (org->annualBudget > 0.0f) {
        printf("Payroll %% of Budget   : %.2f%%\n", (annualPayroll / org->annualBudget) * 100.0f);
    }
    printf("=====================================================================\n");
}

// Search employee by ID, Name, or Designation
void searchEmployee(const struct Organisation *org) {
    if (org->totalEmployees == 0) {
        printf("\nNo employees in the organisation to search.\n");
        return;
    }

    printf("\nSearch Options:\n");
    printf("1. By ID\n");
    printf("2. By Name\n");
    printf("3. By Designation\n");
    printf("Enter choice (1-3): ");

    int choice;
    if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        printf("Invalid input.\n");
        return;
    }
    getchar(); // consume newline

    if (choice == 1) {
        int id;
        printf("Enter Employee ID: ");
        scanf("%d", &id);
        getchar();

        int idx = findEmployeeIndex(org, id);
        if (idx != -1) {
            printf("\nEmployee Found:\n");
            printTableHeader();
            printEmployeeRow(&org->employees[idx]);
            printTableFooter();
        } else {
            printf("No employee found with ID %d.\n", id);
        }
    } else if (choice == 2 || choice == 3) {
        char query[50];
        printf("Enter search keyword: ");
        fgets(query, sizeof(query), stdin);
        removeNewline(query);

        int count = 0;
        for (int i = 0; i < org->totalEmployees; i++) {
            const char *field = (choice == 2) ? org->employees[i].name : org->employees[i].designation;
            if (matchesQuery(field, query)) {
                if (count == 0) {
                    printf("\nMatching Results:\n");
                    printTableHeader();
                }
                printEmployeeRow(&org->employees[i]);
                count++;
            }
        }
        if (count > 0) {
            printTableFooter();
            printf("Total matches: %d\n", count);
        } else {
            printf("No employees found matching '%s'.\n", query);
        }
    } else {
        printf("Invalid choice.\n");
    }
}

// Filter employees by department
void filterByDepartment(const struct Organisation *org) {
    if (org->totalEmployees == 0) {
        printf("\nNo employees in the organisation.\n");
        return;
    }

    char dept[50];
    printf("\nEnter Department name to filter by: ");
    fgets(dept, sizeof(dept), stdin);
    removeNewline(dept);

    int count = 0;
    for (int i = 0; i < org->totalEmployees; i++) {
        if (matchesQuery(org->employees[i].department, dept)) {
            if (count == 0) {
                printf("\nEmployees in '%s':\n", dept);
                printTableHeader();
            }
            printEmployeeRow(&org->employees[i]);
            count++;
        }
    }

    if (count > 0) {
        printTableFooter();
        printf("Total staff in '%s': %d\n", dept, count);
    } else {
        printf("No employees found in department '%s'.\n", dept);
    }
}

// Comparison functions for qsort
int compareSalaryDesc(const void *a, const void *b) {
    float diff = ((const struct Employee *)b)->salary - ((const struct Employee *)a)->salary;
    if (diff > 0.0f) return 1;
    if (diff < 0.0f) return -1;
    return 0;
}

int compareSalaryAsc(const void *a, const void *b) {
    float diff = ((const struct Employee *)a)->salary - ((const struct Employee *)b)->salary;
    if (diff > 0.0f) return 1;
    if (diff < 0.0f) return -1;
    return 0;
}

int compareName(const void *a, const void *b) {
    return strcmp(((const struct Employee *)a)->name, ((const struct Employee *)b)->name);
}

int compareId(const void *a, const void *b) {
    return ((const struct Employee *)a)->id - ((const struct Employee *)b)->id;
}

// Sort employees
void sortEmployees(struct Organisation *org) {
    if (org->totalEmployees < 2) {
        printf("\nNeed at least 2 employees to sort.\n");
        return;
    }

    printf("\nSort Options:\n");
    printf("1. Salary: High to Low\n");
    printf("2. Salary: Low to High\n");
    printf("3. Alphabetical by Name\n");
    printf("4. Numerical by ID\n");
    printf("Enter choice (1-4): ");

    int choice;
    if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        printf("Invalid choice.\n");
        return;
    }
    getchar();

    switch (choice) {
        case 1: qsort(org->employees, org->totalEmployees, sizeof(struct Employee), compareSalaryDesc); break;
        case 2: qsort(org->employees, org->totalEmployees, sizeof(struct Employee), compareSalaryAsc); break;
        case 3: qsort(org->employees, org->totalEmployees, sizeof(struct Employee), compareName); break;
        case 4: qsort(org->employees, org->totalEmployees, sizeof(struct Employee), compareId); break;
        default: printf("Invalid option.\n"); return;
    }

    printf("Employees sorted successfully!\n");
    printTableHeader();
    for (int i = 0; i < org->totalEmployees; i++) {
        printEmployeeRow(&org->employees[i]);
    }
    printTableFooter();
}

// Update existing employee
void updateEmployee(struct Organisation *org) {
    if (org->totalEmployees == 0) {
        printf("\nNo employees in the organisation.\n");
        return;
    }

    int id;
    printf("\nEnter ID of employee to update: ");
    if (scanf("%d", &id) != 1) {
        while (getchar() != '\n');
        return;
    }
    getchar();

    int idx = findEmployeeIndex(org, id);
    if (idx == -1) {
        printf("Employee with ID %d not found.\n", id);
        return;
    }

    struct Employee *e = &org->employees[idx];
    printf("\nEditing %s (ID: %d):\n", e->name, e->id);
    printf("1. Update Designation (Current: %s)\n", e->designation);
    printf("2. Update Department  (Current: %s)\n", e->department);
    printf("3. Update Salary      (Current: %.2f)\n", e->salary);
    printf("4. Update All Fields\n");
    printf("Choice (1-4): ");

    int opt;
    if (scanf("%d", &opt) != 1) {
        while (getchar() != '\n');
        return;
    }
    getchar();

    if (opt == 1 || opt == 4) {
        printf("New Designation: ");
        fgets(e->designation, sizeof(e->designation), stdin);
        removeNewline(e->designation);
    }
    if (opt == 2 || opt == 4) {
        printf("New Department: ");
        fgets(e->department, sizeof(e->department), stdin);
        removeNewline(e->department);
    }
    if (opt == 3 || opt == 4) {
        printf("New Salary: ");
        scanf("%f", &e->salary);
        getchar();
    }

    printf("Employee details updated successfully!\n");
}

// Remove employee by ID
void removeEmployee(struct Organisation *org) {
    if (org->totalEmployees == 0) {
        printf("\nNo employees to remove.\n");
        return;
    }

    int id;
    printf("\nEnter ID of employee to remove: ");
    if (scanf("%d", &id) != 1) {
        while (getchar() != '\n');
        return;
    }
    getchar();

    int idx = findEmployeeIndex(org, id);
    if (idx == -1) {
        printf("Employee with ID %d not found.\n", id);
        return;
    }

    printf("Are you sure you want to remove %s? (y/n): ", org->employees[idx].name);
    char confirm = (char)getchar();
    getchar(); // consume newline

    if (confirm == 'y' || confirm == 'Y') {
        for (int i = idx; i < org->totalEmployees - 1; i++) {
            org->employees[i] = org->employees[i + 1];
        }
        org->totalEmployees--;
        printf("Employee ID %d removed successfully.\n", id);
    } else {
        printf("Removal cancelled.\n");
    }
}

// Save records to text file
void saveToFile(const struct Organisation *org) {
    char filename[100];
    printf("\nEnter filename to save (e.g. data.txt): ");
    fgets(filename, sizeof(filename), stdin);
    removeNewline(filename);

    if (strlen(filename) == 0) {
        strcpy(filename, "organisation_data.txt");
    }

    FILE *fp = fopen(filename, "w");
    if (!fp) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    fprintf(fp, "%s\n%s\n%s\n%d\n%.2f\n%d\n",
            org->name, org->location, org->regNo,
            org->estYear, org->annualBudget, org->totalEmployees);

    for (int i = 0; i < org->totalEmployees; i++) {
        const struct Employee *e = &org->employees[i];
        fprintf(fp, "%d\n%s\n%s\n%s\n%.2f\n%d %d %d\n",
                e->id, e->name, e->designation, e->department, e->salary,
                e->joinDate.day, e->joinDate.month, e->joinDate.year);
    }

    fclose(fp);
    printf("Saved organisation and %d employees to '%s'.\n", org->totalEmployees, filename);
}

// Load records from text file
void loadFromFile(struct Organisation *org) {
    char filename[100];
    printf("\nEnter filename to load: ");
    fgets(filename, sizeof(filename), stdin);
    removeNewline(filename);

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Error: File '%s' not found.\n", filename);
        return;
    }

    if (!fgets(org->name, sizeof(org->name), fp)) { fclose(fp); return; }
    removeNewline(org->name);

    if (!fgets(org->location, sizeof(org->location), fp)) { fclose(fp); return; }
    removeNewline(org->location);

    if (!fgets(org->regNo, sizeof(org->regNo), fp)) { fclose(fp); return; }
    removeNewline(org->regNo);

    if (fscanf(fp, "%d\n", &org->estYear) != 1) { fclose(fp); return; }
    if (fscanf(fp, "%f\n", &org->annualBudget) != 1) { fclose(fp); return; }
    if (fscanf(fp, "%d\n", &org->totalEmployees) != 1) { fclose(fp); return; }

    for (int i = 0; i < org->totalEmployees; i++) {
        struct Employee *e = &org->employees[i];
        if (fscanf(fp, "%d\n", &e->id) != 1) break;

        if (!fgets(e->name, sizeof(e->name), fp)) break;
        removeNewline(e->name);

        if (!fgets(e->designation, sizeof(e->designation), fp)) break;
        removeNewline(e->designation);

        if (!fgets(e->department, sizeof(e->department), fp)) break;
        removeNewline(e->department);

        if (fscanf(fp, "%f\n", &e->salary) != 1) break;
        if (fscanf(fp, "%d %d %d\n", &e->joinDate.day, &e->joinDate.month, &e->joinDate.year) != 3) break;
    }

    fclose(fp);
    printf("Loaded '%s' with %d employee records.\n", org->name, org->totalEmployees);
}

// Load sample records for quick demo/testing
void loadSampleData(struct Organisation *org) {
    strcpy(org->name, "Sylhet Tech Solutions Ltd.");
    strcpy(org->location, "Sylhet, Bangladesh");
    strcpy(org->regNo, "SEC-CSE-2026-03");
    org->estYear = 2020;
    org->annualBudget = 5500000.0f; // BDT
    org->totalEmployees = 0;

    struct Employee samples[] = {
        {101, "Amina Begum",      "Lead Software Eng",   "Engineering",  95000.0f, {15, 1, 2021}},
        {102, "Tanvir Hasan",     "Full Stack Dev",      "Engineering",  70000.0f, {10, 6, 2022}},
        {103, "Sadia Khanam",     "UI/UX Designer",      "Product",      55000.0f, {1,  3, 2023}},
        {104, "Rafiqul Islam",    "Network Admin",       "IT Support",   48000.0f, {20, 8, 2023}},
        {105, "Nusrat Jahan",     "HR Executive",        "Human Res",    42000.0f, {5,  2, 2024}},
        {106, "Farhan Chowdhury", "Intern Developer",    "Engineering",  25000.0f, {1,  9, 2024}}
    };

    int count = sizeof(samples) / sizeof(samples[0]);
    for (int i = 0; i < count; i++) {
        org->employees[i] = samples[i];
    }
    org->totalEmployees = count;

    printf("Sample organisation data loaded (%d employees)!\n", org->totalEmployees);
}

void printMenu(void) {
    printf("\n===================================================\n");
    printf("         ORGANISATION MANAGEMENT SYSTEM            \n");
    printf("===================================================\n");
    printf("  1. Input / Update Organisation Details           \n");
    printf("  2. Add New Employee                              \n");
    printf("  3. Display Organisation & All Employees          \n");
    printf("  4. View Statistical Summary & Payroll Analytics  \n");
    printf("  5. Search Employee (ID / Name / Designation)     \n");
    printf("  6. Filter Employees by Department                \n");
    printf("  7. Sort Employees (Salary / Name / ID)           \n");
    printf("  8. Update Employee Details                       \n");
    printf("  9. Remove an Employee                            \n");
    printf("  10. Save Records to File                         \n");
    printf("  11. Load Records from File                       \n");
    printf("  12. Load Sample Demo Data                        \n");
    printf("  0.  Exit                                         \n");
    printf("===================================================\n");
    printf("Enter your choice (0-12): ");
}

int main(void) {
    struct Organisation org;
    strcpy(org.name, "Not Configured");
    strcpy(org.location, "N/A");
    strcpy(org.regNo, "N/A");
    org.estYear = 2024;
    org.annualBudget = 0.0f;
    org.totalEmployees = 0;

    printf("===================================================\n");
    printf("  CSE 1101: Structured Programming Language Lab    \n");
    printf("       Assignment 03: Structures in C              \n");
    printf("===================================================\n");

    int choice;
    while (1) {
        printMenu();
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number between 0 and 12.\n");
            continue;
        }
        getchar(); // consume newline

        switch (choice) {
            case 1:  inputOrganisationDetails(&org); break;
            case 2:  addEmployee(&org); break;
            case 3:  displayOrganisation(&org); break;
            case 4:  displayStatistics(&org); break;
            case 5:  searchEmployee(&org); break;
            case 6:  filterByDepartment(&org); break;
            case 7:  sortEmployees(&org); break;
            case 8:  updateEmployee(&org); break;
            case 9:  removeEmployee(&org); break;
            case 10: saveToFile(&org); break;
            case 11: loadFromFile(&org); break;
            case 12: loadSampleData(&org); break;
            case 0:
                printf("\nExiting program. Thank you!\n");
                return 0;
            default:
                printf("Invalid option. Please choose between 0 and 12.\n");
                break;
        }
    }

    return 0;
}
