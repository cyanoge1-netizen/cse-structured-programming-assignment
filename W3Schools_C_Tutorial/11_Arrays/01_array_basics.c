#include <stdio.h>

/**
 * W3Schools C Tutorial: Arrays
 * Concept: Declaring, initializing, accessing, and modifying array elements.
 */
int main(void) {
    int myNumbers[] = {25, 50, 75, 100};

    // Accessing elements (0-indexed)
    printf("First element  : %d\n", myNumbers[0]);
    printf("Second element : %d\n", myNumbers[1]);

    // Modifying element
    myNumbers[0] = 33;
    printf("Modified first element: %d\n", myNumbers[0]);

    return 0;
}
