#include "FileHandler.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>

void FileHandler::saveToFile(const std::vector<Expense>& expenses, const std::string& filename) {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) throw std::ios_base::failure("Failed to open file for writing.");
    
    for (const auto& e : expenses) {
        outFile << e.getAmount() << ","
                << e.getCategory() << ","
                << e.getNote() << ","
                << e.getDate() << "\n";
    }
}

void FileHandler::loadFromFile(std::vector<Expense>& expenses, const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) throw std::ios_base::failure("Failed to open file for reading.");

    expenses.clear();
    std::string line;
    while (getline(inFile, line)) {
        std::stringstream ss(line);
        double amount;
        std::string category, note, date;

        if (!(ss >> amount)) continue;
        getline(ss, category, ',');
        getline(ss, note, ',');
        getline(ss, date);

        if (!Expense::isValidDate(date)) {
            std::cerr << "Invalid date format detected. Skipping entry." << std::endl;
            continue;
        }

        expenses.emplace_back(amount, category, note, date);
    }
}
