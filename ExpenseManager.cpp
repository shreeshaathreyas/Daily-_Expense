#include "ExpenseManager.h"
#include <iostream>
#include <iomanip>

void ExpenseManager::addExpense(const std::string& category, double amount) {
    expenses.push_back({category, amount});
    std::cout << "Expense added successfully!\n";
}

void ExpenseManager::viewExpenses() const {
    if (expenses.empty()) {
        std::cout << "No expenses recorded yet.\n";
        return;
    }

    std::cout << "Recorded Expenses:\n";
    std::cout << std::setw(5) << "Index" << std::setw(20) << "Category" << std::setw(10) << "Amount\n";
    for (size_t i = 0; i < expenses.size(); ++i) {
        std::cout << std::setw(5) << i + 1
                  << std::setw(20) << expenses[i].category
                  << std::setw(10) << expenses[i].amount << "\n";
    }
}

void ExpenseManager::deleteExpense(int index) {
    if (index < 1 || index > static_cast<int>(expenses.size())) {
        std::cout << "Invalid index.\n";
        return;
    }

    expenses.erase(expenses.begin() + (index - 1));
    std::cout << "Expense deleted successfully!\n";
}
