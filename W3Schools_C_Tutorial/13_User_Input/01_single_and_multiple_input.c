#include <stdio.h>

/**
 * W3Schools C Tutorial: User Input (scanf)
 * Concept: Taking single and multiple inputs from stdin with format specifiers.
 */
int main(void) {
    int myNum = 42;
    char myChar = 'Z';

    printf("Demonstrating scanf format specifiers:\n");
    printf("Integer: %d, Char: %c\n", myNum, myChar);

    // Example syntax for user input:
    // printf("Type a number AND a character: ");
    // scanf("%d %c", &myNum, &myChar);

    return 0;
}
