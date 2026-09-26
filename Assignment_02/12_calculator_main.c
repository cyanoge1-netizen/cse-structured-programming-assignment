#include <stdio.h>
#include "12_calculator_module.h"

int main(void) {
    int x = 24;
    int y = 7;
    int err = 0;
    int quotient;

    printf("=== Modular Programming: Multi-File Calculator ===\n\n");
    printf("Operands: x = %d, y = %d\n", x, y);
    printf("Addition       : %d + %d = %d\n", x, y, calc_add(x, y));
    printf("Subtraction    : %d - %d = %d\n", x, y, calc_subtract(x, y));
    printf("Multiplication : %d * %d = %ld\n", x, y, calc_multiply(x, y));

    quotient = calc_divide(x, y, &err);
    if (!err) {
        printf("Division       : %d / %d = %d\n", x, y, quotient);
    }

    printf("Power          : %d ^ 3 = %ld\n\n", y, calc_power(y, 3));

    /* Test division by zero handling */
    printf("Testing division by zero (x / 0):\n");
    quotient = calc_divide(x, 0, &err);
    if (err) {
        printf("  Handled Error: Attempted division by zero detected safely.\n");
    }

    return 0;
}
