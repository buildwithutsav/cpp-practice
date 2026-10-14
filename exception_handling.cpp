
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";

    if (!(cin >> a >> b)) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    try {
        if (b == 0) {
            throw runtime_error("Division by zero!");
        }

        if (a == 0) {
            throw invalid_argument(
                "Numerator must not be zero!"
            );
        }

        cout << "Result: "
             << static_cast<double>(a) / b << endl;
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
