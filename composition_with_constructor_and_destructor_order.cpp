
#include <iostream>
using namespace std;

class Battery {
public:
    Battery() {
        cout << "Battery created" << endl;
    }

    ~Battery() {
        cout << "Battery destroyed" << endl;
    }
};

class Phone {
    Battery battery;

public:
    Phone() {
        cout << "Phone created" << endl;
    }

    ~Phone() {
        cout << "Phone destroyed" << endl;
    }
};

int main() {
    Phone p;

    return 0;
}
