#include "addExpense.h"
#include "budget.h"
#include "displayBudgetStatus.h"
#include "expenses.h"
#include "viewExpense.h"
#include "viewReport.h"
#include <stdio.h>

int main() {
  int choice;
  inputDailyBudget();

  do {
    printf("\nExpense Tracker\n");
    printf("1. Add Expense\n");
    printf("2. View Expenses\n");
    printf("3. View Report\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");

    // while (getchar() == '\n');

    if (scanf("%d", &choice) != 1) {
      printf("Invalid input. Please enter a number.\n");
      continue;
    }

    switch (choice) {
    case 1:
      addExpense();
      break;
    case 2:
      viewExpenses();
      break;
    case 3:
      viewReport();
      break;
    case 4:
      printf("Exiting program...\n");
      break;
    default:
      printf("Invalid choice. Please try again.\n");
    }
  } while (choice != 4);

  return 0;
}
