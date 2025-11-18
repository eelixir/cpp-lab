#include <iostream>
#include <vector>
#include <string>

class Account {
    private:
        std::string accountNumber;
        std::string ownerName;
        double balance;

    public:
        Account(const std::string& accountNumber, const std::string& ownerName, double balance)
            : accountNumber(accountNumber), ownerName(ownerName), balance(balance) {}

        void deposit(double amount) {
            if (amount <= 0) {
                std::cout << "Deposit must be positive.\n";
                return;
            }
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << "\n";
        }

        bool withdraw(double amount) {
            if (amount <= 0) {
                std::cout << "Withdrawal must be positive.\n";
                return false;
            }
            if (amount > balance) {
                std::cout << "Insufficient funds! Balance is $" << balance << "\n";
                return false;
            }
            balance -= amount;
            std::cout << "Withdrawn $" << amount << ". New balance: $" << balance << "\n";
            return true;
        }

        double getBalance() const {
            return balance;
        }

        std::string getAccountNumber() const {
            return accountNumber;
        }

        std::string getOwnerName() const {
            return ownerName;
        }
};

class Bank {
    private:
        std::vector<Account> accounts;

    public:
        void addAccount(const Account& account) {
            accounts.push_back(account);
        }

        Account* findAccount(const std::string& accountNumber) {
            for (auto& acc : accounts) {
                if (acc.getAccountNumber() == accountNumber)
                    return &acc;
            }
            return nullptr;
        }

        void displayAccounts() {
            std::cout << "\n--- All Accounts ---\n";
            for (auto& acc : accounts) {
                std::cout << "Account: " << acc.getAccountNumber()
                        << " | Owner: " << acc.getOwnerName()
                        << " | Balance: $" << acc.getBalance() << "\n";
            }
            std::cout << "----------------------\n";
        }
};

void showMenu() {
    std::cout << "\n===== BANK MENU =====\n";
    std::cout << "1. Deposit\n";
    std::cout << "2. Withdraw\n";
    std::cout << "3. Check Balance\n";
    std::cout << "4. Show All Accounts\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Bank bank;

    // Add sample accounts
    bank.addAccount(Account("001", "Tom", 1241.12));
    bank.addAccount(Account("002", "Sarah", 500.00));
    bank.addAccount(Account("003", "Mike", 2000.50));

    int choice;
    std::string accNum;
    double amount;

    while (true) {
        showMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: // Deposit
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter amount to deposit: ";
            std::cin >> amount;

            if (Account* acc = bank.findAccount(accNum))
                acc->deposit(amount);
            else
                std::cout << "Account not found!\n";
            break;

        case 2: // Withdraw
            std::cout << "Enter account number: ";
            std::cin >> accNum;
            std::cout << "Enter amount to withdraw: ";
            std::cin >> amount;

            if (Account* acc = bank.findAccount(accNum))
                acc->withdraw(amount);
            else
                std::cout << "Account not found!\n";
            break;

        case 3: // Check balance
            std::cout << "Enter account number: ";
            std::cin >> accNum;

            if (Account* acc = bank.findAccount(accNum))
                std::cout << "Balance: $" << acc->getBalance() << "\n";
            else
                std::cout << "Account not found!\n";
            break;

        case 4: // Show all accounts
            bank.displayAccounts();
            break;

        case 5: // Exit
            std::cout << "Goodbye!\n";
            return 0;

        default:
            std::cout << "Invalid option. Try again.\n";
        }
    }
}
