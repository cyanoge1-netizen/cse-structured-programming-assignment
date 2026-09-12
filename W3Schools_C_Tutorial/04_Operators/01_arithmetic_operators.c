#include <stdio.h>

/**
 * W3Schools C Tutorial: Arithmetic Operators
 * Concept: Basic arithmetic operations (+, -, *, /, %, ++, --).
 */
int main(void) {
    int a = 14, b = 4;

    printf("a = %d, b = %d\n", a, b);
    printf("Addition (a + b)       : %d\n", a + b);
    printf("Subtraction (a - b)    : %d\n", a - b);
    printf("Multiplication (a * b) : %d\n", a * b);
    printf("Division (a / b)       : %d\n", a / b);
    printf("Modulus (a %% b)        : %d\n", a % b);

    int count = 5;
    printf("Original count: %d\n", count);
    printf("Post-increment: %d (now %d)\n", count++, count);
    printf("Pre-increment : %d\n", ++count);

    return 0;
}
