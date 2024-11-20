#include <iostream>
#include <limits>
#include "ExpenseManager.h"

void showMenu() {
    std::cout << "\nExpense Tracker Menu:\n"
              << "1. Add Expense\n"
              << "2. View Expenses\n"
              << "3. Delete Expense\n"
              << "4. Exit\n"
              << "Enter your choice: ";
}

int main() {
    ExpenseManager manager;
    int choice;

    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string category;
                double amount;

                std::cout << "Enter category: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer
                std::getline(std::cin, category);
                std::cout << "Enter amount: ";
                std::cin >> amount;

                manager.addExpense(category, amount);
                break;
            }
            case 2:
                manager.viewExpenses();
                break;
            case 3: {
                int index;
                std::cout << "Enter index of expense to delete: ";
                std::cin >> index;
                manager.deleteExpense(index);
                break;
            }
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
