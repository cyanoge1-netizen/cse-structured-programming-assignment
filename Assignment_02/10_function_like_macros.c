#include <stdio.h>

/* Parameterized macros with strict defensive parenthesization */
#define SQUARE(x)         ((x) * (x))
#define SQUARE_UNSAFE(x)  x * x
#define MAX(a, b)         (((a) > (b)) ? (a) : (b))
#define MIN(a, b)         (((a) < (b)) ? (a) : (b))
#define ABS(x)            (((x) < 0) ? -(x) : (x))

int main(void) {
    int num = 4;
    int a = 15;
    int b = 27;
    int neg = -42;

    printf("=== Function-Like Parameterized Macros ===\n\n");

    /* 1. Basic Macro Invocations */
    printf("1. Square of %d          : %d\n", num, SQUARE(num));
    printf("2. Maximum of (%d, %d)   : %d\n", a, b, MAX(a, b));
    printf("3. Minimum of (%d, %d)   : %d\n", a, b, MIN(a, b));
    printf("4. Absolute value of %d : %d\n\n", neg, ABS(neg));

    /* 2. Demonstration of Precedence Trap */
    printf("=== Demonstration of Precedence Trap: SQUARE(2 + 3) ===\n");
    printf("Mathematical expectation : (2 + 3)^2 = 5^2 = 25\n");
    printf("SQUARE_UNSAFE(2 + 3) expands to: 2 + 3 * 2 + 3 = %d (BUG!)\n", SQUARE_UNSAFE(2 + 3));
    printf("SQUARE(2 + 3) properly expands to: ((2 + 3) * (2 + 3)) = %d (CORRECT!)\n", SQUARE(2 + 3));

    return 0;
}
