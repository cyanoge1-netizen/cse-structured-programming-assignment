#include <stdio.h>

/**
 * W3Schools C Tutorial: Variables
 * Concept: Declaring, initializing, and printing basic data types.
 */
int main(void) {
    int myNum = 15;             // Integer (whole number)
    float myFloatNum = 5.99f;   // Floating point number
    double myDoubleNum = 19.99; // Double precision float
    char myLetter = 'D';        // Single character

    printf("myNum = %d\n", myNum);
    printf("myFloatNum = %f\n", myFloatNum);
    printf("myDoubleNum = %lf\n", myDoubleNum);
    printf("myLetter = %c\n", myLetter);

    return 0;
}
