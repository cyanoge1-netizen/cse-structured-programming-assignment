#include <stdio.h>

/**
 * W3Schools C Tutorial: Strings
 * Concept: Declaring strings as char arrays, null terminator \0, and printing with %s.
 */
int main(void) {
    char greetings[] = "Hello World!";
    printf("%s\n", greetings);

    // Accessing character by index
    printf("First character: %c\n", greetings[0]);

    // Explicit char array with null terminator
    char explicitStr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Explicit string: %s\n", explicitStr);

    return 0;
}
