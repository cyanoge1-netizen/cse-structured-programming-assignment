#include <stdio.h>

/**
 * W3Schools C Tutorial: Real-Life Example - Find Lowest and Highest
 * Concept: Tracking minimum and maximum values in an array dataset.
 */
int main(void) {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);

    int lowestAge = ages[0];
    int highestAge = ages[0];

    for (int i = 1; i < length; i++) {
        if (ages[i] < lowestAge) {
            lowestAge = ages[i];
        }
        if (ages[i] > highestAge) {
            highestAge = ages[i];
        }
    }

    printf("Lowest Age  : %d\n", lowestAge);
    printf("Highest Age : %d\n", highestAge);

    return 0;
}
