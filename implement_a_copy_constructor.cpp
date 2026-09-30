#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand;
    float price;

public:

    // Parameterized constructor
    Laptop(string b, float p) {
        brand = b;
        price = p;
    }

    // Copy constructor
    Laptop(const Laptop &obj) {
        brand = obj.brand;
        price = obj.price;

        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {

    Laptop l1("Apple", 85000);

    // Copying l1 into l2
    Laptop l2 = l1;

    cout << "\nOriginal Object:\n";
    l1.display();

    cout << "\nCopied Object:\n";
    l2.display();

    return 0;
}