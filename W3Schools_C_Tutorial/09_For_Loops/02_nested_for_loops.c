#include <stdio.h>

/**
 * W3Schools C Tutorial: Nested Loops
 * Concept: Inner loop executing completely for every single iteration of outer loop.
 */
int main(void) {
    // 2D grid coordinates
    for (int i = 1; i <= 2; ++i) {
        printf("Outer loop iteration: %d\n", i);
        for (int j = 1; j <= 3; ++j) {
            printf("   Inner: %d\n", j);
        }
    }

    // Pattern printing
    printf("\nRight triangle pattern:\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
