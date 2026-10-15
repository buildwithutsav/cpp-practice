
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    bool operator==(const Complex& c) const {
        return real == c.real && imag == c.imag;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(3, 4);
    Complex c3(5, 2);

    cout << (c1 == c2 ? "Equal" : "Not Equal")
         << endl;

    cout << (c1 == c3 ? "Equal" : "Not Equal")
         << endl;

    return 0;
}
