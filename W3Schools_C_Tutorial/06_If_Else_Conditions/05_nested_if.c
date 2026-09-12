#include <stdio.h>

/**
 * W3Schools C Tutorial: Nested If
 * Concept: Conditions placed inside other conditional blocks.
 */
int main(void) {
    int age = 22;
    int weight = 65;

    if (age >= 18) {
        if (weight >= 50) {
            printf("Eligible to donate blood.\n");
        } else {
            printf("Not eligible: Minimum weight requirement not met.\n");
        }
    } else {
        printf("Not eligible: Must be at least 18 years old.\n");
    }

    return 0;
}
