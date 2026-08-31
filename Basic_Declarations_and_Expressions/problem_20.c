#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    printf("Input the first number(a): ");
    scanf("%lf", &a);
    printf("Input the second number(b): ");
    scanf("%lf", &b);
    printf("Input the third number(c): ");
    scanf("%lf", &c);

    discriminant = (b * b) - (4 * a * c);

    if (a != 0 && discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root1 = %.5lf\n", root1);
        printf("Root2 = %.5lf\n", root2);
    } else {
        printf("Not possible to find the roots.\n");
    }

    return 0;
}
