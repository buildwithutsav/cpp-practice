#include <iostream>
using namespace std;

class Delivery {

protected:
    double distance;

public:

    Delivery(double d) {
        distance = d;
    }

    virtual void calculateCharge() {
        cout << "Delivery charge calculation" << endl;
    }

    virtual ~Delivery() {}
};

class NormalDelivery : public Delivery {

public:

    NormalDelivery(double d) : Delivery(d) {}

    void calculateCharge() override {

        cout << "Normal Delivery Charge = Rs. "
             << distance * 5 << endl;
    }
};

class ExpressDelivery : public Delivery {

public:

    ExpressDelivery(double d) : Delivery(d) {}

    void calculateCharge() override {

        cout << "Express Delivery Charge = Rs. "
             << distance * 10 << endl;
    }
};

int main() {

    NormalDelivery normal(10);
    ExpressDelivery express(10);

    Delivery *ptr;

    ptr = &normal;
    ptr->calculateCharge();

    ptr = &express;
    ptr->calculateCharge();

    return 0;
}