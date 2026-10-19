
#include <iostream>
using namespace std;

class Number {
    int* value;

public:
    Number(int v) : value(new int(v)) {}

    Number(const Number& other)
        : value(new int(*other.value)) {}

    Number& operator=(const Number& other) {
        if (this != &other) {
            int* temp = new int(*other.value);
            delete value;
            value = temp;
        }

        return *this;
    }

    void setValue(int v) {
        *value = v;
    }

    void display() const {
        cout << *value << endl;
    }

    ~Number() {
        delete value;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    n2 = n1;
    n2.setValue(99);

    cout << "n1: ";
    n1.display();

    cout << "n2: ";
    n2.display();

    return 0;
}
