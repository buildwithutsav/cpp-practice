
#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

class Car : public Vehicle {
public:
    void display() {
        cout << "This is a Car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void display() {
        cout << "This is a Bike." << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.start();
    c.display();

    b.start();
    b.display();

    return 0;
}
