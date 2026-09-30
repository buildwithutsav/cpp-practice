#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle is starting" << endl;
    }
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starts with a key/button" << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike starts with self-start" << endl;
    }
};

int main() {

    Vehicle *ptr;

    Car c;
    Bike b;

    ptr = &c;
    ptr->start();

    ptr = &b;
    ptr->start();

    return 0;
}