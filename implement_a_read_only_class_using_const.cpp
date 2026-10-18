
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) : balance(b) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void displayBalance() const {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000);

    account.displayBalance();

    account.deposit(1500);

    account.displayBalance();

    return 0;
}
