#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <vector>
#include <string>
#include "Expense.h"

class FileHandler {
public:
    static void saveToFile(const std::vector<Expense>& expenses, const std::string& filename);
    static void loadFromFile(std::vector<Expense>& expenses, const std::string& filename);
};

#endif // FILEHANDLER_H
