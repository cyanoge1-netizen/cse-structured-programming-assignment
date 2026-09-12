#include <stdio.h>

/**
 * W3Schools C Tutorial: Do/While Loop
 * Concept: Executing the loop body at least once before evaluating condition.
 */
int main(void) {
    int i = 0;

    do {
        printf("Do-While iteration: %d\n", i);
        i++;
    } while (i < 5);

    // Demonstration when condition is initially false
    int x = 10;
    do {
        printf("Executes once even though x (=%d) is not less than 5.\n", x);
    } while (x < 5);

    return 0;
}
