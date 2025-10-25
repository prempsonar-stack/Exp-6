/* Assignment 6 - Hard Variation 18
 * Mode simulation with mock sensor checks and logs
 * File: assignment6_hard_18.c
 */
#include <stdio.h>
#include <time.h>

void log_msg(const char *msg) {
    time_t t; time(&t);
    printf("[%s] %s\n", ctime(&t)+4, msg); /* concise timestamp */
}

int main() {
    int mode;
    printf("Assignment6 Hard #18 - Enter Mode (1:Idle 2:Active 3:Error 4:Exit): ");
    while (scanf("%d", &mode) == 1) {
        if (mode == 4) break;
        switch (mode) {
            case 1: log_msg("Mode=IDLE: conserving power"); break;
            case 2: log_msg("Mode=ACTIVE: sampling sensors and processing");
                    for (int i=1;i<=3;i++) printf("Sensor%d OK\n", i);
                    break;
            case 3: log_msg("Mode=ERROR: attempting recovery"); break;
            default: log_msg("Invalid mode"); break;
        }
        printf("Enter next mode (1-4): ");
    }
    printf("Terminated.\n");
    return 0;
}
