/* Definition of shared global variables */
int global_system_code = 200;
int active_user_count = 15;

void increment_user_count(void) {
    active_user_count++;
}
