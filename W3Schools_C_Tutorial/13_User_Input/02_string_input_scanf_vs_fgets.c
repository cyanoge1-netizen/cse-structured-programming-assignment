#include <stdio.h>

/**
 * W3Schools C Tutorial: User Input for Strings (scanf vs. fgets)
 * Concept: scanf reads until whitespace, while fgets reads entire line including spaces.
 */
int main(void) {
    char singleWord[] = "John";
    char fullName[] = "John Doe Smith";

    printf("scanf(%%s) captures up to space: %s\n", singleWord);
    printf("fgets() captures full line with spaces: %s\n", fullName);

    // Actual interactive usage:
    // char name[30];
    // fgets(name, sizeof(name), stdin);

    return 0;
}
