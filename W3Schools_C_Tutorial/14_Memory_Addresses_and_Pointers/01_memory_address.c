#include <stdio.h>

/**
 * W3Schools C Tutorial: Memory Address
 * Concept: Reference operator (&) and printing memory addresses with %p.
 */
int main(void) {
    int myAge = 43;
    printf("Value of myAge          : %d\n", myAge);
    printf("Memory address of myAge : %p\n", (void*)&myAge);

    return 0;
}
