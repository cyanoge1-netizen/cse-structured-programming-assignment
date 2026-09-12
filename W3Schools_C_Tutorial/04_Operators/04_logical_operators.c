#include <stdio.h>

/**
 * W3Schools C Tutorial: Logical Operators
 * Concept: Combining conditional expressions with && (AND), || (OR), and ! (NOT).
 */
int main(void) {
    int x = 5;
    int y = 10;

    printf("x = %d, y = %d\n", x, y);
    printf("Logical AND (x < 10 && y > 5) : %d\n", (x < 10 && y > 5));
    printf("Logical OR  (x > 10 || y > 5) : %d\n", (x > 10 || y > 5));
    printf("Logical NOT (!(x < 10 && y > 5)): %d\n", !(x < 10 && y > 5));

    return 0;
}
