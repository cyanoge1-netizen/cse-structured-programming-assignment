#include <stdio.h>

int main(void) {
    int countdown = 5;

    printf("Commencing Countdown:\n");
    while (countdown > 0) {
        printf("%d...\n", countdown);
        countdown--;
    }

    printf("Happy New Year!\n");

    return 0;
}
