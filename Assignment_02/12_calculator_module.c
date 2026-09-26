#include "12_calculator_module.h"

int calc_add(int a, int b) {
    return a + b;
}

int calc_subtract(int a, int b) {
    return a - b;
}

long calc_multiply(int a, int b) {
    return (long)a * (long)b;
}

int calc_divide(int a, int b, int *error_flag) {
    if (b == 0) {
        if (error_flag != 0) {
            *error_flag = 1; /* Indicate division-by-zero error */
        }
        return 0;
    }
    if (error_flag != 0) {
        *error_flag = 0;
    }
    return a / b;
}

long calc_power(int base, int exponent) {
    long result = 1;
    int i;
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
