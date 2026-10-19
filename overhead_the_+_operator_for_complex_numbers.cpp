
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
        : real(r), imag(i) {}

    Complex operator+(const Complex& c) const {
        return Complex(real + c.real,
                       imag + c.imag);
    }

    void display() const {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(5, 2);

    Complex c3 = c1 + c2;

    cout << "Sum: ";
    c3.display();

    return 0;
}
