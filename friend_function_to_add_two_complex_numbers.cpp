
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
        : real(r), imag(i) {}

    friend Complex add(const Complex&,
                       const Complex&);

    void display() const {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

Complex add(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real,
                   c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4);
    Complex c2(5, 2);

    Complex result = add(c1, c2);

    cout << "Sum: ";
    result.display();

    return 0;
}
