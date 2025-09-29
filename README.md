
# Expense Tracker

This is a simple expense tracker application where you can add, view, and save your expenses. It allows you to track expenses by categories, notes, and dates.

---

## Features

- Add new expenses with amount, category, note, and date.
- View all recorded expenses.
- Save and load expenses from a file.
- Validation of the date format (YYYY-MM-DD).

---

## Instructions

1. **Compile the Program**:  
   Use the following command to compile the project:
   ```bash
   g++ -o ExpenseTracker main.cpp FileHandler.cpp ExpenseTracker.cpp Expense.cpp
   ```

2. **Run the Program**:
   After compiling, run the program:
   ```bash
   ./ExpenseTracker
   ```

3. **Menu Options**:
   - **1**: Add a new expense.
   - **2**: View all expenses.
   - **3**: Save and exit.

---

## How it Works

- The program will load the saved expenses from `expenses.txt` upon startup.
- You can add new expenses, view all recorded ones, and save them back to the file.
- The date format must be in `YYYY-MM-DD`.

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

# Free Palestine 🕊️

We stand for freedom, justice, and peace. Free Palestine!
