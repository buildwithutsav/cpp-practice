#include <iostream>
using namespace std;

class InsufficientBalance {
public:
    void message() {
        cout << "Error: Insufficient balance!" << endl;
    }
};

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientBalance();
        }

        balance -= amount;

        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000);

    double amount;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    try {
        account.withdraw(amount);
    }
    catch (InsufficientBalance e) {
        e.message();
    }

    return 0;
}