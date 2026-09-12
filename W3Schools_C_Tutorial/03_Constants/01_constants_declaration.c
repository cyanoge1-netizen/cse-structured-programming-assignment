#include <stdio.h>

/**
 * W3Schools C Tutorial: Constants
 * Concept: Defining unchangeable read-only variables using 'const'.
 */
int main(void) {
    const int minutesPerHour = 60;
    const float PI = 3.14159f;

    printf("Minutes per hour : %d\n", minutesPerHour);
    printf("Value of PI      : %.5f\n", PI);

    // Note: Reassigning a constant like minutesPerHour = 50 will cause a compilation error.
    return 0;
}
