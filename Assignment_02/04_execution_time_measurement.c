#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void) {
    long i;
    const long iterations = 20000000L;
    double sum = 0.0;
    clock_t start_clock, end_clock;
    time_t start_wall, end_wall;
    double cpu_time_used;
    double wall_time_diff;

    printf("=== Benchmarking Code Execution Time ===\n");
    printf("Performing %ld mathematical iterations...\n", iterations);

    /* Record start timestamps */
    start_wall = time(NULL);
    start_clock = clock();

    /* Benchmark loop */
    for (i = 1; i <= iterations; i++) {
        sum += sqrt((double)i);
    }

    /* Record end timestamps */
    end_clock = clock();
    end_wall = time(NULL);

    /* Calculate elapsed times */
    cpu_time_used = ((double)(end_clock - start_clock)) / CLOCKS_PER_SEC;
    wall_time_diff = difftime(end_wall, start_wall);

    printf("Accumulated Sum   : %.4f\n", sum);
    printf("CPU Clock Ticks   : %ld ticks\n", (long)(end_clock - start_clock));
    printf("CLOCKS_PER_SEC    : %ld\n", (long)CLOCKS_PER_SEC);
    printf("CPU Time Elapsed  : %.6f seconds (%.2f ms)\n", cpu_time_used, cpu_time_used * 1000.0);
    printf("Wall Clock Time   : %.1f seconds\n", wall_time_diff);

    return 0;
}
