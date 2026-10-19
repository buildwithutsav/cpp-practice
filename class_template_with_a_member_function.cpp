
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Box {
    T value;

public:
    Box(T v) : value(v) {}

    T getValue() const {
        return value;
    }
};

int main() {
    Box<int> b1(100);
    Box<double> b2(25.75);
    Box<string> b3("Hello OOP");

    cout << "Integer: " << b1.getValue() << endl;
    cout << "Double: " << b2.getValue() << endl;
    cout << "String: " << b3.getValue() << endl;

    return 0;
}
