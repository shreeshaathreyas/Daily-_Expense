
---

#ifndef EXPENSE_MANAGER_H
#define EXPENSE_MANAGER_H

#include <string>
#include <vector>

struct Expense {
    std::string category;
    double amount;
};

class ExpenseManager {
public:
    void addExpense(const std::string& category, double amount);
    void viewExpenses() const;
    void deleteExpense(int index);

private:
    std::vector<Expense> expenses;
};

#endif // EXPENSE_MANAGER_H
