#include <stdio.h>

/**
 * W3Schools C Tutorial: Break and Continue in While Loop
 * Concept: Proper counter incrementing to avoid infinite loops when continuing.
 */
int main(void) {
    int i = 0;
    printf("While loop with continue (skips 4):\n");
    while (i < 10) {
        if (i == 4) {
            i++; // Increment before continue to prevent infinite loop
            continue;
        }
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}
