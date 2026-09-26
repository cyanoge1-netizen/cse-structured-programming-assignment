#include <stdio.h>
#include <time.h>

int main(void) {
    time_t current_time;

    /* Retrieve current calendar time as epoch seconds */
    current_time = time(NULL);

    if (current_time == (time_t)(-1)) {
        printf("Error: Failed to retrieve system time.\n");
        return 1;
    }

    printf("=== Current Calendar Time ===\n");
    printf("Raw Epoch Timestamp : %ld seconds since Jan 1, 1970\n", (long)current_time);
    printf("Human-Readable Time : %s", ctime(&current_time));

    return 0;
}
