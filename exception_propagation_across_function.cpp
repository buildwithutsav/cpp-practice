
#include <iostream>
#include <stdexcept>
using namespace std;

double divide(int a, int b) {
    if (b == 0)
        throw runtime_error("Division by zero");

    return static_cast<double>(a) / b;
}

double calculate(int a, int b) {
    return divide(a, b);
}

int main() {
    try {
        cout << "Result: "
             << calculate(10, 0) << endl;
    }
    catch (const exception& e) {
        cout << "Exception caught: "
             << e.what() << endl;
    }

    return 0;
}
