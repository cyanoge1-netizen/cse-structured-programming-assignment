#include <stdio.h>
#include <stdbool.h>

/**
 * W3Schools C Tutorial: Real-Life Example - Voting Eligibility
 * Concept: Using boolean conditions to evaluate real-world criteria.
 */
int main(void) {
    int myAge = 20;
    int votingAge = 18;

    printf("Current Age : %d\n", myAge);
    printf("Voting Age  : %d\n", votingAge);

    if (myAge >= votingAge) {
        printf("Eligible to vote: Yes (Condition is true)\n");
    } else {
        printf("Eligible to vote: No (Condition is false)\n");
    }

    return 0;
}
