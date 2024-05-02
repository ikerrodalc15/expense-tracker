#include <stdio.h>
#include "expenses.h"
#include "addExpense.h"

void addExpense() {
    struct Expense newExpense;
    printf("Enter category: ");
    scanf("%s", newExpense.category);
    printf("Enter amount: ");
    scanf("%lf", &newExpense.amount);
    printf("Enter description: ");
    scanf(" %[^\n]", newExpense.description); 
    expenses[expenseCount++] = newExpense;
    saveExpenses();
    printf("Expense added successfully!\n");
}
