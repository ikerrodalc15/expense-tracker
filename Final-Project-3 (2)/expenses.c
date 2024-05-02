#include "expenses.h"
#include <stdio.h>

struct Expense expenses[100];
int expenseCount = 0;

void saveExpenses() {
  FILE *file = fopen("expenses.txt", "w");
  if (file != NULL) {
    for (int i = 0; i < expenseCount; i++) {
      fprintf(file, "%s,%.2lf,%s\n", expenses[i].category, expenses[i].amount,
              expenses[i].description);
    }
    fclose(file);
  } else {
    printf("Unable to open file for writing.\n");
  }
}
