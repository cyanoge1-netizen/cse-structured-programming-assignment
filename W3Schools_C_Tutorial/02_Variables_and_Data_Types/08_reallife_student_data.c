#include <stdio.h>

/**
 * W3Schools C Tutorial: Real-Life Example - Student Data & Fees
 * Concept: Combining multiple variable types to model real-world business logic.
 */
int main(void) {
    int studentID = 43;
    int studentAge = 20;
    float studentFee = 750.50f;
    char studentGrade = 'A';

    printf("--- Student Information ---\n");
    printf("Student ID   : %d\n", studentID);
    printf("Student Age  : %d\n", studentAge);
    printf("Student Fee  : $%.2f\n", studentFee);
    printf("Student Grade: %c\n", studentGrade);

    return 0;
}
