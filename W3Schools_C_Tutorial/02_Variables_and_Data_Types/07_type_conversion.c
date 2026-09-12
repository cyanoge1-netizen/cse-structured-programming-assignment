#include <stdio.h>

/**
 * W3Schools C Tutorial: Type Conversion
 * Concept: Implicit (automatic) conversion vs. explicit type casting.
 */
int main(void) {
    // Implicit conversion
    float autoFloat = 9; // Automatic int to float conversion
    printf("Implicit float: %f\n", autoFloat);

    // Explicit type casting
    int num1 = 5;
    int num2 = 2;
    float quotientInt = num1 / num2;           // Integer division result: 2.000000
    float quotientFloat = (float)num1 / num2; // Explicit casting: 2.500000

    printf("Without casting (5/2) : %.2f\n", quotientInt);
    printf("With casting ((float)5/2): %.2f\n", quotientFloat);

    return 0;
}
