#include <stdio.h>
#include <string.h>

/**
 * W3Schools C Tutorial: String Functions (<string.h>)
 * Concept: Using strlen(), strcat(), strcpy(), and strcmp().
 */
int main(void) {
    char str1[20] = "Hello ";
    char str2[] = "World!";
    char str3[20];

    // String Length
    printf("Length of str1: %zu\n", strlen(str1));

    // String Concatenation
    strcat(str1, str2);
    printf("Concatenated (str1 + str2): %s\n", str1);

    // String Copy
    strcpy(str3, str1);
    printf("Copied string (str3): %s\n", str3);

    // String Compare (returns 0 if identical)
    printf("strcmp(str1, str3): %d (Equal)\n", strcmp(str1, str3));
    printf("strcmp(\"Apple\", \"Banana\"): %d (Lesser)\n", strcmp("Apple", "Banana"));

    return 0;
}
