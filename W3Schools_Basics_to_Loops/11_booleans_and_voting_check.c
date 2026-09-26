#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int candidate_age = 20;
    const int VOTING_AGE = 18;

    bool is_eligible = candidate_age >= VOTING_AGE;

    printf("Candidate Age : %d\n", candidate_age);
    printf("Voting Age    : %d\n", VOTING_AGE);
    printf("Eligibility   : %d (1 = Eligible, 0 = Ineligible)\n", is_eligible);

    if (is_eligible) {
        printf("Status        : Eligible to vote in national elections.\n");
    } else {
        printf("Status        : Not eligible to vote yet.\n");
    }

    return 0;
}
