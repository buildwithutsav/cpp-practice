#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex add(const Complex& c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    void display() const {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main() {
    Complex c1(4, 5);
    Complex c2(3, 2);

    Complex c3 = c1.add(c2);

    cout << "First number: ";
    c1.display();

    cout << "Second number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}