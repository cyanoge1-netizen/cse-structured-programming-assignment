#include <stdio.h>

/*
 * Educational Self-Contained Demonstration:
 * In production C projects, code is separated into:
 *   1. Interface Header (*.h) with #ifndef include guards
 *   2. Implementation File (*.c) containing function logic
 *   3. Application Driver (main.c) calling the public functions
 *
 * Below is a unified demonstration showing the mechanics of modular design.
 */

/* 1. Interface Prototypes */
int demo_add(int a, int b);
int demo_subtract(int a, int b);
long demo_multiply(int a, int b);

/* 2. Implementation Definitions */
int demo_add(int a, int b) {
    return a + b;
}

int demo_subtract(int a, int b) {
    return a - b;
}

long demo_multiply(int a, int b) {
    return (long)a * (long)b;
}

/* 3. Driver Program */
int main(void) {
    int val1 = 30;
    int val2 = 12;

    printf("=== Modular Code Organization Principles ===\n\n");
    printf("1. Header Files (.h) define interfaces, types, and prototypes.\n");
    printf("2. Source Files (.c) provide concrete function implementations.\n");
    printf("3. Include Guards (#ifndef / #define / #endif) prevent redefinition.\n\n");

    printf("Executing Modular Operations (val1 = %d, val2 = %d):\n", val1, val2);
    printf("  Addition       : %d + %d = %d\n", val1, val2, demo_add(val1, val2));
    printf("  Subtraction    : %d - %d = %d\n", val1, val2, demo_subtract(val1, val2));
    printf("  Multiplication : %d * %d = %ld\n", val1, val2, demo_multiply(val1, val2));

    return 0;
}
