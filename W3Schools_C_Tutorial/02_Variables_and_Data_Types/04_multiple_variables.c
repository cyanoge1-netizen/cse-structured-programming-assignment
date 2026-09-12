#include <stdio.h>

/**
 * W3Schools C Tutorial: Multiple Variables
 * Concept: Declaring and assigning multiple variables of the same type.
 */
int main(void) {
    int x = 5, y = 6, z = 50;
    printf("x + y + z = %d\n", x + y + z);

    // Assigning the same value to multiple variables
    int a, b, c;
    a = b = c = 100;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
