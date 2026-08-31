#include <stdio.h>

int main() {
    int p, q, r, s;

    printf("Input the first integer (p): ");
    scanf("%d", &p);
    printf("Input the second integer (q): ");
    scanf("%d", &q);
    printf("Input the third integer (r): ");
    scanf("%d", &r);
    printf("Input the fourth integer (s): ");
    scanf("%d", &s);

    if ((q > r) && (s > p) && ((r + s) > (p + q)) && (r > 0) && (s > 0) && (p % 2 == 0)) {
        printf("Correct values\n");
    } else {
        printf("Wrong values\n");
    }

    return 0;
}
