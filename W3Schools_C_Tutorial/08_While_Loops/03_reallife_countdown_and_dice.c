#include <stdio.h>

/**
 * W3Schools C Tutorial: While Loop Real-Life Examples
 * Concept: Countdown timer and even numbers iterator.
 */
int main(void) {
    int countdown = 3;

    printf("--- Countdown Initiated ---\n");
    while (countdown > 0) {
        printf("%d...\n", countdown);
        countdown--;
    }
    printf("Happy New Year!\n\n");

    printf("--- Even numbers up to 10 ---\n");
    int num = 0;
    while (num <= 10) {
        printf("%d ", num);
        num += 2;
    }
    printf("\n");

    return 0;
}
