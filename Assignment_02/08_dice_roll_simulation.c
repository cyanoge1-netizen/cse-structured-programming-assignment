#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_die(void) {
    return (rand() % 6) + 1;
}

int main(void) {
    int round;
    const int total_rounds = 5;
    int double_count = 0;

    srand((unsigned int)time(NULL));

    printf("=== Casino / Board Game Dice Simulation ===\n");
    printf("Simulating %d rounds of two six-sided dice rolls:\n\n", total_rounds);
    printf(" Round | Die 1 | Die 2 | Total Sum | Outcome Note\n");
    printf("-------+-------+-------+-----------+--------------------\n");

    for (round = 1; round <= total_rounds; round++) {
        int d1 = roll_die();
        int d2 = roll_die();
        int total = d1 + d2;

        printf("   %02d  |   %d   |   %d   |    %2d     | ", round, d1, d2, total);

        if (d1 == d2) {
            double_count++;
            if (d1 == 1) {
                printf("Double Ones (Snake Eyes)!\n");
            } else if (d1 == 6) {
                printf("Double Sixes (Jackpot)!\n");
            } else {
                printf("Double %d's!\n", d1);
            }
        } else if (total == 7 || total == 11) {
            printf("Natural Win (Craps / Lucky)!\n");
        } else {
            printf("Standard roll\n");
        }
    }

    printf("-------+-------+-------+-----------+--------------------\n");
    printf("Summary: Occurred %d double(s) in %d rounds.\n", double_count, total_rounds);

    return 0;
}
