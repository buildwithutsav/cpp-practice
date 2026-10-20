
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) : balance(b) {}

    friend class Auditor;
};

class Auditor {
public:
    void checkBalance(const BankAccount& account) {
        cout << "Account balance: "
             << account.balance << endl;
    }
};

int main() {
    BankAccount account(25000);
    Auditor auditor;

    auditor.checkBalance(account);

    return 0;
}
