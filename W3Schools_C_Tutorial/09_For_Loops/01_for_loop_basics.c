#include <stdio.h>

/**
 * W3Schools C Tutorial: For Loop
 * Concept: Standard counting loop with initialization, condition, and increment.
 */
int main(void) {
    printf("Counting 0 to 4:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Counting by evens up to 10:\n");
    for (int i = 0; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
