#include <stdio.h>

/**
 * W3Schools C Tutorial: Modify Strings & Loop Through Strings
 * Concept: Modifying characters by index and iterating over a string.
 */
int main(void) {
    char greetings[] = "Hello World!";
    greetings[0] = 'J';
    printf("Modified string: %s\n", greetings);

    printf("Iterating characters:\n");
    for (int i = 0; greetings[i] != '\0'; i++) {
        printf("[%d] = %c\n", i, greetings[i]);
    }

    return 0;
}
