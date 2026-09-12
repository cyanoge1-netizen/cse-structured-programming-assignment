#include <stdio.h>

/**
 * W3Schools C Tutorial: For Loop Real-Life Example
 * Concept: Generating mathematical tables using for loops.
 */
int main(void) {
    int number = 7;

    printf("Multiplication Table for %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %2d = %2d\n", number, i, number * i);
    }

    return 0;
}
