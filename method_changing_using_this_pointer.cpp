
#include <iostream>
using namespace std;

class Calculator {
    int value;

public:
    Calculator(int v = 0) : value(v) {}

    Calculator& add(int n) {
        value += n;
        return *this;
    }

    Calculator& subtract(int n) {
        value -= n;
        return *this;
    }

    Calculator& multiply(int n) {
        value *= n;
        return *this;
    }

    void display() const {
        cout << "Result: " << value << endl;
    }
};

int main() {
    Calculator c(10);

    c.add(5).multiply(2).subtract(4);
    c.display();

    return 0;
}
