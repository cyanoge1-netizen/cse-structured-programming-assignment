#include <stdio.h>

/**
 * W3Schools C Tutorial: Pointers & Dereference
 * Concept: Declaring pointer variable (*ptr = &var) and dereferencing (*ptr) to read value.
 */
int main(void) {
    int myAge = 43;     // An int variable
    int* ptr = &myAge;  // A pointer variable that stores the address of myAge

    // Output the value of myAge
    printf("myAge value                  : %d\n", myAge);

    // Output the memory address of myAge
    printf("myAge address (&myAge)       : %p\n", (void*)&myAge);

    // Output the memory address stored in ptr
    printf("Pointer value (ptr)          : %p\n", (void*)ptr);

    // Dereference: Output the value at stored address (*ptr)
    printf("Dereferenced value (*ptr)    : %d\n", *ptr);

    return 0;
}
