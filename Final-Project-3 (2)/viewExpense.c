#include <stdio.h>
#include "expenses.h"
#include "viewExpense.h"

void viewExpenses() {
    printf("Expense List:\n");
    printf("%-15s %-10s %-20s\n", "Category", "Amount", "Description");
    for(int i = 0; i < expenseCount; i++) {
        printf("%-15s %-10.2lf %-20s\n", expenses[i].category, expenses[i].amount, expenses[i].description);
    }
}
