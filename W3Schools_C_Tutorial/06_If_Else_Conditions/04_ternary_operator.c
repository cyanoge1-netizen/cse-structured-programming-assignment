#include <stdio.h>

/**
 * W3Schools C Tutorial: Short Hand If...Else (Ternary Operator)
 * Concept: syntax: variable = (condition) ? expressionTrue : expressionFalse;
 */
int main(void) {
    int time = 20;

    // Ternary operator replacement for if...else
    (time < 18) ? printf("Good day.\n") : printf("Good evening.\n");

    int number = 15;
    const char* result = (number % 2 == 0) ? "Even" : "Odd";
    printf("The number %d is %s.\n", number, result);

    return 0;
}
