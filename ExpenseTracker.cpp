#include "ExpenseTracker.h"
#include "FileHandler.h"
#include <iostream>

void ExpenseTracker::addExpense(const Expense& expense) {
    expenses.push_back(expense);
}

void ExpenseTracker::viewAllExpenses() const {
    if (expenses.empty()) {
        std::cout << "No expenses recorded." << std::endl;
        return;
    }

    std::cout << "--- All Expenses ---" << std::endl;
    for (const auto& e : expenses) {
        std::cout << "Amount: " << e.getAmount()
                  << " | Category: " << e.getCategory()
                  << " | Note: " << e.getNote()
                  << " | Date: " << e.getDate() << std::endl;
    }
}

void ExpenseTracker::saveExpenses(const std::string& filename) const {
    try {
        FileHandler::saveToFile(expenses, filename);
        std::cout << "Expenses saved successfully." << std::endl;
    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error saving expenses: " << e.what() << std::endl;
    }
}

void ExpenseTracker::loadExpenses(const std::string& filename) {
    try {
        FileHandler::loadFromFile(expenses, filename);
        std::cout << "Expenses loaded successfully." << std::endl;
    } catch (const std::ios_base::failure& e) {
        std::cerr << "Error loading expenses: " << e.what() << std::endl;
    }
}

const std::vector<Expense>& ExpenseTracker::getExpenses() const {
    return expenses;
}
