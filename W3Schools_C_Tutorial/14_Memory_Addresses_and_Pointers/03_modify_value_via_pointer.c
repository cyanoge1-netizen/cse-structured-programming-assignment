#include <stdio.h>

/**
 * W3Schools C Tutorial: Modifying Values Through Pointers
 * Concept: Altering the value of the original variable directly in memory.
 */
int main(void) {
    int myNum = 100;
    int* ptr = &myNum;

    printf("Original value: %d\n", myNum);

    // Modifying the value at the address pointed to by ptr
    *ptr = 250;

    printf("Value after *ptr = 250: %d\n", myNum);

    return 0;
}
