#include <stdio.h>

int main(void) {
    double operand1 = 24.0;
    double operand2 = 8.0;
    char op = '/';

    printf("Calculation: %.2lf %c %.2lf\n", operand1, op, operand2);

    switch (op) {
        case '+':
            printf("Result = %.2lf\n", operand1 + operand2);
            break;
        case '-':
            printf("Result = %.2lf\n", operand1 - operand2);
            break;
        case '*':
            printf("Result = %.2lf\n", operand1 * operand2);
            break;
        case '/':
            if (operand2 != 0.0) {
                printf("Result = %.2lf\n", operand1 / operand2);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Error: Unsupported operator '%c'\n", op);
            break;
    }

    return 0;
}
