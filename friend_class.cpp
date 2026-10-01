#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    friend class Manager;
};

class Manager {
public:
    void showBalance(BankAccount account) {
        cout << "Account Balance = Rs. "
             << account.balance << endl;
    }
};

int main() {
    BankAccount account(25000);

    Manager m;
    m.showBalance(account);

    return 0;
}