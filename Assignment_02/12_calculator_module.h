#ifndef CALCULATOR_MODULE_H
#define CALCULATOR_MODULE_H

/* Arithmetic Function Declarations */
int calc_add(int a, int b);
int calc_subtract(int a, int b);
long calc_multiply(int a, int b);
int calc_divide(int a, int b, int *error_flag);
long calc_power(int base, int exponent);

#endif /* CALCULATOR_MODULE_H */
