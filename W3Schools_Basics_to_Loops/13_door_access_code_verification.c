#include <stdio.h>

int main(void) {
    const int CORRECT_PIN = 1337;
    int entered_pin = 1337;

    printf("Security Access System\n");
    printf("Entered PIN: %d\n", entered_pin);

    if (entered_pin == CORRECT_PIN) {
        printf("Verification: Correct PIN.\n");
        printf("Status      : Access Granted. Door unlocked.\n");
    } else {
        printf("Verification: Incorrect PIN.\n");
        printf("Status      : Access Denied. Door remains locked.\n");
    }

    return 0;
}
