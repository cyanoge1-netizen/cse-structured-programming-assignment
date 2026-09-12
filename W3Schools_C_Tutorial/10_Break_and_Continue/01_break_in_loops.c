#include <stdio.h>

/**
 * W3Schools C Tutorial: Break Statement
 * Concept: Jumping immediately out of a loop.
 */
int main(void) {
    printf("Loop breaks when i == 4:\n");
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
