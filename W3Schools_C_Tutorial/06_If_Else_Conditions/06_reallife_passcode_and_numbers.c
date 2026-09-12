#include <stdio.h>

/**
 * W3Schools C Tutorial: Real-Life Example - Door Code & Number Signs
 * Concept: Real-world security lock check and sign evaluation.
 */
int main(void) {
    int doorCode = 1337;

    if (doorCode == 1337) {
        printf("Correct code. The door is now open.\n");
    } else {
        printf("Wrong code. The door remains locked.\n");
    }

    int myNum = -10;
    if (myNum > 0) {
        printf("The value %d is positive.\n", myNum);
    } else if (myNum < 0) {
        printf("The value %d is negative.\n", myNum);
    } else {
        printf("The value is zero.\n");
    }

    return 0;
}
