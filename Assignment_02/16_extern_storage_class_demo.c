#include <stdio.h>

/* Global definition */
int global_counter = 50;

/* Function declaring external variable reference */
void inspect_counter(void) {
    extern int global_counter; /* Refers to global_counter defined above or externally */
    printf("  inspect_counter(): global_counter = %d\n", global_counter);
}

int main(void) {
    printf("=== C Storage Classes: 'extern' Linkage Demonstration ===\n\n");
    printf("1. 'extern' specifies external linkage across scopes or translation units.\n");
    printf("2. Global variable definition in memory: global_counter = %d\n\n", global_counter);

    inspect_counter();
    global_counter += 25;
    printf("After increment in main():\n");
    inspect_counter();

    return 0;
}
