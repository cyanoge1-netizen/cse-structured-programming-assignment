#include <stdio.h>

/**
 * W3Schools C Tutorial: Decimal Precision
 * Concept: Controlling decimal places in floating-point outputs.
 */
int main(void) {
    float myFloatNum = 3.5f;

    printf("Default float : %f\n", myFloatNum);
    printf("Precision 1   : %.1f\n", myFloatNum);
    printf("Precision 2   : %.2f\n", myFloatNum);
    printf("Precision 4   : %.4f\n", myFloatNum);

    return 0;
}
