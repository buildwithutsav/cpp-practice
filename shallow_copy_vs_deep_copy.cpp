
#include <iostream>
using namespace std;

class Array {
    int* data;

public:
    Array(int value) {
        data = new int(value);
    }

    // Deep copy constructor
    Array(const Array& other) {
        data = new int(*other.data);
    }

    void setValue(int value) {
        *data = value;
    }

    void display() const {
        cout << *data << endl;
    }

    ~Array() {
        delete data;
    }
};

int main() {
    Array a1(10);
    Array a2 = a1;

    a2.setValue(50);

    cout << "Original object: ";
    a1.display();

    cout << "Copied object: ";
    a2.display();

    return 0;
}
