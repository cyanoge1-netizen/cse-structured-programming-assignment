#include <stdio.h>
#include <time.h>

int main(void) {
    const char *days[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    time_t now = time(NULL);
    struct tm *local = localtime(&now);

    if (local == NULL) {
        printf("Error: Unable to obtain local time structure.\n");
        return 1;
    }

    printf("=== Detailed Local Time Breakdown (struct tm) ===\n");
    printf("Year         : %d (years since 1900: %d)\n", local->tm_year + 1900, local->tm_year);
    printf("Month        : %02d (%s)\n", local->tm_mon + 1, months[local->tm_mon]);
    printf("Day of Month : %02d\n", local->tm_mday);
    printf("Day of Week  : %s (index: %d)\n", days[local->tm_wday], local->tm_wday);
    printf("Day of Year  : %d of 365/366\n", local->tm_yday + 1);
    printf("Hour (24h)   : %02d\n", local->tm_hour);
    printf("Minute       : %02d\n", local->tm_min);
    printf("Second       : %02d\n", local->tm_sec);
    printf("DST Active   : %s\n", local->tm_isdst > 0 ? "Yes" : (local->tm_isdst == 0 ? "No" : "Unknown"));

    return 0;
}
