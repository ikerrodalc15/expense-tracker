#include <stdio.h>
#include "budget.h"
#include "expenses.h"

void displayBudgetStatus(double totalExpense) {
    if (dailyBudget == 0.0) {
        printf("No daily budget set.\n");
        return;
    }

    double remainingBudget = dailyBudget - totalExpense;
    if (remainingBudget >= 0) {
        printf("You have %.2lf left on your daily budget.\n", remainingBudget);
    } else {
        printf("You have exceeded your daily budget by %.2lf.\n", -remainingBudget);
    }
}
