#include <stdio.h>

/**
 * W3Schools C Tutorial: Special Characters in Strings
 * Concept: Escaping single quotes, double quotes, and backslashes in strings.
 */
int main(void) {
    char txt1[] = "We are the so-called \"Vikings\" from the north.";
    char txt2[] = "It\'s alright.";
    char txt3[] = "The character \\ is called backslash.";

    printf("%s\n", txt1);
    printf("%s\n", txt2);
    printf("%s\n", txt3);

    return 0;
}
