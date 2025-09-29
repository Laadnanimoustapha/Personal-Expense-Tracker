#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense {
private:
    double amount;
    std::string category;
    std::string note;
    std::string date;

public:
    Expense(double amt, const std::string& cat, const std::string& nt, const std::string& dt);

    double getAmount() const;
    std::string getCategory() const;
    std::string getNote() const;
    std::string getDate() const;

    // Helper method to validate the date format (YYYY-MM-DD)
    static bool isValidDate(const std::string& date);
};

#endif // EXPENSE_H
