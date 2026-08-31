#include <stdio.h>

int main() {
    int amount, temp;

    printf("Input the amount: ");
    scanf("%d", &amount);

    printf("There are:\n");
    temp = amount;

    printf("%d Note(s) of 100.00\n", temp / 100);
    temp %= 100;

    printf("%d Note(s) of 50.00\n", temp / 50);
    temp %= 50;

    printf("%d Note(s) of 20.00\n", temp / 20);
    temp %= 20;

    printf("%d Note(s) of 10.00\n", temp / 10);
    temp %= 10;

    printf("%d Note(s) of 5.00\n", temp / 5);
    temp %= 5;

    printf("%d Note(s) of 2.00\n", temp / 2);
    temp %= 2;

    printf("%d Note(s) of 1.00\n", temp);

    return 0;
}
