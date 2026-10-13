
#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() {
        cout << "Processing payment." << endl;
    }
};

class UPIPayment : public Payment {
public:
    void pay() override {
        cout << "Payment made using UPI." << endl;
    }
};

class CardPayment : public Payment {
public:
    void pay() override {
        cout << "Payment made using Card." << endl;
    }
};

int main() {
    UPIPayment upi;
    CardPayment card;

    Payment* ptr;

    ptr = &upi;
    ptr->pay();

    ptr = &card;
    ptr->pay();

    return 0;
}
