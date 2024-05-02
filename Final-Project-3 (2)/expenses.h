#ifndef EXPENSES_H
#define EXPENSES_H

struct Expense {
    char category[50];
    double amount;
    char description[100]; 
};

extern struct Expense expenses[100];
extern int expenseCount;

void saveExpenses();

#endif
