#ifndef EXPENSETACKER_H
#define EXPENSETACKER_H

#include <vector>
#include "Expense.h"

class ExpenseTracker {
private:
    std::vector<Expense> expenses;

public:
    void addExpense(const Expense& expense);
    void viewAllExpenses() const;
    void saveExpenses(const std::string& filename) const;
    void loadExpenses(const std::string& filename);
    const std::vector<Expense>& getExpenses() const;
};

#endif // EXPENSETACKER_H
