#include <stdio.h>
#include "budget.h"

double dailyBudget = 0.0;

void inputDailyBudget() {
    char buffer[100]; 
    int validInput = 0; 

    do {
        printf("Enter your daily budget: ");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) { 

            if (sscanf(buffer, "%lf", &dailyBudget) == 1 && dailyBudget > 0.0) {
                validInput = 1; 
            } else {
                printf("Invalid input. Please enter a positive number.\n");
            }
        } else {
            printf("Error reading input. Please try again.\n");
            while (getchar() != '\n'); 
        }
    } while (!validInput);
}
