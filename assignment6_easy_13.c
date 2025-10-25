/* Assignment 6 - Easy Variation 13
 * Switch-case robot modes simple
 * File: assignment6_easy_13.c
 */
#include <stdio.h>

int main() {
    int mode;
    printf("Assignment6 Easy #13 - Enter Robot Mode (1:Idle 2:Active 3:Error): ");
    if (scanf("%d", &mode) != 1) { printf("Invalid input\n"); return 1; }
    switch (mode) {
        case 1: printf("Robot is in IDLE mode.\n"); break;
        case 2: printf("Robot is in ACTIVE mode.\n"); break;
        case 3: printf("Robot is in ERROR mode.\n"); break;
        default: printf("Invalid mode.\n");
    }
    return 0;
}
