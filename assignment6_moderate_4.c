/* Assignment 6 - Moderate Variation 4
 * Menu loop with return codes and simple state
 * File: assignment6_moderate_4.c
 */
#include <stdio.h>

int main() {
    int choice;
    int state = 0; /* 0:idle,1:active,2:error */
    do {
        printf("\nAssignment6 Moderate #4 - Select Mode:\n1. Idle\n2. Active\n3. Error\n4. Show State\n5. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice) {
            case 1: state = 0; printf("Switched to IDLE\n"); break;
            case 2: state = 1; printf("Switched to ACTIVE\n"); break;
            case 3: state = 2; printf("Switched to ERROR\n"); break;
            case 4: printf("Current state = %s\n", state==0? "IDLE": state==1? "ACTIVE":"ERROR"); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid selection\n");
        }
    } while (choice != 5);
    return 0;
}
