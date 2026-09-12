#include <stdio.h>

/**
 * W3Schools C Tutorial: Operator Precedence
 * Concept: Order of evaluation in complex mathematical expressions.
 */
int main(void) {
    int res1 = 100 + 50 * 3;     // Multiplication before addition -> 250
    int res2 = (100 + 50) * 3;   // Parentheses evaluated first -> 450

    printf("100 + 50 * 3   = %d\n", res1);
    printf("(100 + 50) * 3 = %d\n", res2);

    return 0;
}
