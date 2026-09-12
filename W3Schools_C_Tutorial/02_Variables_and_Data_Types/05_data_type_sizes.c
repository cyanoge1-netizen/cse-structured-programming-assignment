#include <stdio.h>

/**
 * W3Schools C Tutorial: Memory Size (sizeof operator)
 * Concept: Checking memory consumption of fundamental C data types.
 */
int main(void) {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("Size of int    : %zu bytes\n", sizeof(myInt));
    printf("Size of float  : %zu bytes\n", sizeof(myFloat));
    printf("Size of double : %zu bytes\n", sizeof(myDouble));
    printf("Size of char   : %zu byte\n", sizeof(myChar));

    return 0;
}
