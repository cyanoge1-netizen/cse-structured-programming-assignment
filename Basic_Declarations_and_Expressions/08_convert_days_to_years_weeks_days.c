#include <stdio.h>

int main() {
    int days = 1329;
    int years, weeks, remaining_days;

    years = days / 365;
    weeks = (days % 365) / 7;
    remaining_days = (days % 365) % 7;

    printf("Number of days : %d\n", days);
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remaining_days);

    return 0;
}
