#include <stdio.h>

int main(void) {
    int dice_face = 1;

    printf("Simulating dice progression:\n");
    while (dice_face <= 6) {
        if (dice_face < 6) {
            printf("Rolled %d -> No Yatzy, continuing...\n", dice_face);
        } else {
            printf("Rolled %d -> Yatzy! Target reached!\n", dice_face);
        }
        dice_face++;
    }

    return 0;
}
