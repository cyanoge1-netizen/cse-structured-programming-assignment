#include <stdio.h>
#include <time.h>

int main(void) {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    char buffer[128];

    if (t == NULL) {
        printf("Error: Could not retrieve local time.\n");
        return 1;
    }

    printf("=== Custom Date & Time Formats with strftime() ===\n\n");

    /* Format 1: Standard International / ISO format (YYYY-MM-DD HH:MM:SS) */
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", t);
    printf("1. ISO Standard Format : %s\n", buffer);

    /* Format 2: Long Date Format (Weekday, Month Day, Year) */
    strftime(buffer, sizeof(buffer), "%A, %B %d, %Y", t);
    printf("2. Long Formal Date    : %s\n", buffer);

    /* Format 3: 12-Hour Clock with AM/PM */
    strftime(buffer, sizeof(buffer), "%I:%M:%S %p", t);
    printf("3. 12-Hour Time Format : %s\n", buffer);

    /* Format 4: Locale Time and Date Representations */
    strftime(buffer, sizeof(buffer), "%x %X (%Z)", t);
    printf("4. Locale Date & Time  : %s\n", buffer);

    return 0;
}
