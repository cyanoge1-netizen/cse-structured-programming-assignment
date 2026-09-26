#include <stdio.h>

int main(void) {
    /* Hint to compiler to store loop counter in a CPU register */
    register int counter = 0;
    register long sum = 0;
    const int limit = 10000;

    printf("=== C Storage Classes: 'register' Specifier ===\n\n");
    printf("1. Register Variable Allocation:\n");
    printf("  'register' serves as a hint requesting CPU register placement\n");
    printf("  for frequently accessed variables (e.g. tight loop counters).\n\n");

    for (counter = 1; counter <= limit; counter++) {
        sum += counter;
    }

    printf("  Computed sum of 1 to %d = %ld\n", limit, sum);
    printf("  Final counter value     = %d\n\n", counter);

    printf("2. Architectural & Language Invariants:\n");
    printf("  - &counter is ILLEGAL: Attempting to take the address of a register\n");
    printf("    variable triggers a compile-time error because registers lack memory addresses.\n");
    printf("  - Modern compilers with -O2/-O3 optimize register allocation automatically.\n");

    return 0;
}
