#include <stdio.h>

int main() {
    int distance;
    float fuel, avg;

    printf("Input total distance in km: ");
    scanf("%d", &distance);

    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    avg = (float)distance / fuel;
    printf("Average consumption (km/lt) %.3f\n", avg);

    return 0;
}
