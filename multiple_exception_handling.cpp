#include <iostream>
using namespace std;

class Calculator {
public:
    void divide(double a, double b) {

        if(b == 0) {
            throw 0;
        }

        if(b < 0) {
            throw "Negative denominator not allowed";
        }

        cout << "Result = " << a / b << endl;
    }
};

int main() {
    Calculator c;

    double a, b;

    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    try {
        c.divide(a, b);
    }

    catch(int) {
        cout << "Exception: Division by zero!" << endl;
    }

    catch(const char *message) {
        cout << "Exception: " << message << endl;
    }

    return 0;
}