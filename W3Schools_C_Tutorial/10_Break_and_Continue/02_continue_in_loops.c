#include <stdio.h>

/**
 * W3Schools C Tutorial: Continue Statement
 * Concept: Skipping current iteration and jumping to the next.
 */
int main(void) {
    printf("Loop skips iteration 4:\n");
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
