#include <iostream>
#include <limits>
#include "ExpenseTracker.h"
#include "Expense.h"

int main() {
    ExpenseTracker tracker;
    tracker.loadExpenses("expenses.txt");

    int choice;
    do {
        std::cout << "\n--- Expense Tracker ---\n";
        std::cout << "1. Add Expense\n";
        std::cout << "2. View All Expenses\n";
        std::cout << "3. Save and Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 1) {
            double amount;
            std::string category, note, date;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            std::cin.ignore();
            std::cout << "Enter category: ";
            std::getline(std::cin, category);
            std::cout << "Enter note: ";
            std::getline(std::cin, note);
            std::cout << "Enter date (YYYY-MM-DD): ";
            std::getline(std::cin, date);

            if (!Expense::isValidDate(date)) {
                std::cout << "Invalid date format. Please use YYYY-MM-DD." << std::endl;
                continue;
            }

            tracker.addExpense(Expense(amount, category, note, date));
            std::cout << "Expense added successfully.\n";
        } else if (choice == 2) {
            tracker.viewAllExpenses();
        } else if (choice == 3) {
            tracker.saveExpenses("expenses.txt");
            std::cout << "Expenses saved. Goodbye!\n";
        } else {
            std::cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
