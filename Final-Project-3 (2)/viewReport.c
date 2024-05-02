#include <stdio.h>
#include "expenses.h"
#include "viewReport.h"

void viewReport() {
    double totalExpense = 0.0;
    printf("Expense Report:\n");
    printf("%-15s %-10s %-20s\n", "Category", "Amount", "Description");
    for(int i = 0; i < expenseCount; i++) {
        totalExpense += expenses[i].amount;
        printf("%-15s %-10.2lf %-20s\n", expenses[i].category, expenses[i].amount, expenses[i].description);
    }
    printf("Total: %.2lf\n", totalExpense);
    displayBudgetStatus(totalExpense);
}
