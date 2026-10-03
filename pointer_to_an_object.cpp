#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    double price;

public:
    Car(string b, double p) {
        brand = b;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {
    Car *ptr;

    ptr = new Car("Toyota", 1500000);

    ptr->display();

    delete ptr;

    return 0;
}