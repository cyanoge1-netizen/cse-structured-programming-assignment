#include <stdio.h>

int main(void) {
    int hour = 14;

    printf("Current Hour: %02d:00\n", hour);

    if (hour < 12) {
        printf("Greeting    : Good Morning!\n");
    } else if (hour < 18) {
        printf("Greeting    : Good Afternoon!\n");
    } else {
        printf("Greeting    : Good Evening!\n");
    }

    return 0;
}
