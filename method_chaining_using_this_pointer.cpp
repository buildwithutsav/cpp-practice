#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0;
    }

    BankAccount& deposit(double amount) {
        balance = balance + amount;

        return *this;
    }

    BankAccount& withdraw(double amount) {
        if(amount <= balance) {
            balance = balance - amount;
        }
        else {
            cout << "Insufficient balance!" << endl;
        }

        return *this;
    }

    void display() {
        cout << "Current Balance = Rs. "
             << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.deposit(5000)
           .withdraw(1000)
           .deposit(2000);

    account.display();

    return 0;
}