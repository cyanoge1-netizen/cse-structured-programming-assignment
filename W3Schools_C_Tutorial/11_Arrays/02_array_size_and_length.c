#include <stdio.h>

/**
 * W3Schools C Tutorial: Array Size & Length
 * Concept: Calculating dynamic length of an array using sizeof.
 */
int main(void) {
    int myNumbers[] = {10, 25, 50, 75, 100};

    size_t totalBytes = sizeof(myNumbers);
    size_t elementBytes = sizeof(myNumbers[0]);
    int length = totalBytes / elementBytes;

    printf("Total array bytes   : %zu\n", totalBytes);
    printf("Bytes per element   : %zu\n", elementBytes);
    printf("Array element count : %d\n", length);

    return 0;
}
