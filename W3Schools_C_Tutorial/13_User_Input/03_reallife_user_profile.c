#include <stdio.h>

/**
 * W3Schools C Tutorial: Real-Life User Profile Simulation
 * Concept: Storing multiple fields captured from user input.
 */
int main(void) {
    char userName[] = "Suleman";
    int userAge = 20;
    float userGpa = 3.85f;

    printf("=== User Profile Record ===\n");
    printf("Name : %s\n", userName);
    printf("Age  : %d\n", userAge);
    printf("GPA  : %.2f\n", userGpa);

    return 0;
}
