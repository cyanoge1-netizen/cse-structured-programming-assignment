#include <stdio.h>

/**
 * W3Schools C Tutorial: Pointers and Arrays
 * Concept: The name of an array is a pointer to its first element.
 */
int main(void) {
    int myNumbers[4] = {25, 50, 75, 100};

    // Array name points to the first element
    printf("Address of myNumbers[0] : %p\n", (void*)&myNumbers[0]);
    printf("Value of myNumbers      : %p\n", (void*)myNumbers);

    // Accessing elements via pointer dereferencing
    printf("*myNumbers       = %d\n", *myNumbers);
    printf("*(myNumbers + 1) = %d\n", *(myNumbers + 1));
    printf("*(myNumbers + 2) = %d\n", *(myNumbers + 2));
    printf("*(myNumbers + 3) = %d\n", *(myNumbers + 3));

    return 0;
}
