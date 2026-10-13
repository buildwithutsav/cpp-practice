
#include <iostream>
using namespace std;

template <class T>
class Calculator {
private:
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T sum() {
        return a + b;
    }

    T difference() {
        return a - b;
    }

    T product() {
        return a * b;
    }
};

int main() {
    Calculator<int> c1(10, 5);

    cout << "Integer Sum: " << c1.sum() << endl;
    cout << "Integer Difference: "
         << c1.difference() << endl;
    cout << "Integer Product: " << c1.product() << endl;

    Calculator<double> c2(5.5, 2.0);

    cout << "Double Sum: " << c2.sum() << endl;
    cout << "Double Difference: "
         << c2.difference() << endl;
    cout << "Double Product: " << c2.product() << endl;

    return 0;
}
