#include <stdio.h>

int main(void) {
    printf("Even numbers between 0 and 20:\n");

    for (int i = 0; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
