#include <stdio.h>

/**
 * W3Schools C Tutorial: Change Variable Values
 * Concept: Reassigning and copying values between variables.
 */
int main(void) {
    int myNum = 15;
    printf("Initial value: %d\n", myNum);

    myNum = 20; // myNum is now 20
    printf("Updated value: %d\n", myNum);

    int otherNum = 35;
    myNum = otherNum; // Assign value of otherNum to myNum
    printf("Value copied from otherNum: %d\n", myNum);

    return 0;
}
