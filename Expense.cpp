#include "Expense.h"
#include <regex>

// Constructor
Expense::Expense(double amt, const std::string& cat, const std::string& nt, const std::string& dt)
    : amount(amt), category(cat), note(nt), date(dt) {}

// Getter methods
double Expense::getAmount() const { return amount; }
std::string Expense::getCategory() const { return category; }
std::string Expense::getNote() const { return note; }
std::string Expense::getDate() const { return date; }

// Static method to validate date
bool Expense::isValidDate(const std::string& date) {
    std::regex datePattern(R"(\d{4}-\d{2}-\d{2})");
    return std::regex_match(date, datePattern);
}
