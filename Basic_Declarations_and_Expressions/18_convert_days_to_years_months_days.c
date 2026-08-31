#include <stdio.h>

int main() {
    int days, years, months, remaining_days;

    printf("Input no. of days: ");
    scanf("%d", &days);

    years = days / 365;
    months = (days % 365) / 30;
    remaining_days = (days % 365) % 30;

    printf("%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", remaining_days);

    return 0;
}
