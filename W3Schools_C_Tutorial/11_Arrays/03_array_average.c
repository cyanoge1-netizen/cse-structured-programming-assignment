#include <stdio.h>

/**
 * W3Schools C Tutorial: Loop Through an Array & Average Calculation
 * Concept: Iterating over elements to calculate sum and statistical mean.
 */
int main(void) {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += ages[i];
    }

    float avg = (float)sum / length;

    printf("Total Persons : %d\n", length);
    printf("Sum of Ages   : %d\n", sum);
    printf("Average Age   : %.2f\n", avg);

    return 0;
}
