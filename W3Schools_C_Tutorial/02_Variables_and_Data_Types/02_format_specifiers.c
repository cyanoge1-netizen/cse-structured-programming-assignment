#include <stdio.h>

/**
 * W3Schools C Tutorial: Format Specifiers
 * Concept: Displaying multiple variables with appropriate format specifiers.
 */
int main(void) {
    int myNum = 100;
    char myGrade = 'A';
    float myScore = 95.5f;

    printf("Student Grade: %c, Score: %.1f%%, Student ID: %d\n", myGrade, myScore, myNum);
    return 0;
}
