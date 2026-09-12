#include <stdio.h>

/**
 * W3Schools C Tutorial: Assignment Operators
 * Concept: Compound assignment operators (+=, -=, *=, /=, %=).
 */
int main(void) {
    int x = 10;
    printf("Initial x = %d\n", x);

    x += 5;
    printf("After x += 5: %d\n", x);

    x -= 3;
    printf("After x -= 3: %d\n", x);

    x *= 2;
    printf("After x *= 2: %d\n", x);

    x /= 4;
    printf("After x /= 4: %d\n", x);

    x %= 4;
    printf("After x %%= 4: %d\n", x);

    return 0;
}
