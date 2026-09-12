#include <stdio.h>

/**
 * W3Schools C Tutorial: Else If Ladder
 * Concept: Checking multiple mutually exclusive conditions.
 */
int main(void) {
    int time = 14;

    if (time < 10) {
        printf("Good morning.\n");
    } else if (time < 20) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }

    return 0;
}
