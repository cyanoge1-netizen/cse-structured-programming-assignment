#include <stdio.h>

/**
 * W3Schools C Tutorial: Pointer Arithmetic
 * Concept: Traversing memory by incrementing pointers (ptr++ moves by sizeof(type)).
 */
int main(void) {
    int myNumbers[4] = {10, 20, 30, 40};
    int* ptr = myNumbers;

    printf("Traversing array using pointer arithmetic:\n");
    for (int i = 0; i < 4; i++) {
        printf("Element %d: value = %d, address = %p\n", i, *ptr, (void*)ptr);
        ptr++; // Moves to next integer memory location (shifts by 4 bytes)
    }

    return 0;
}
