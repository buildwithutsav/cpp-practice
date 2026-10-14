
#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number operator-() {
        return Number(-value);
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number n1(25);
    Number n2 = -n1;

    cout << "Original value: ";
    n1.display();

    cout << "Negative value: ";
    n2.display();

    return 0;
}
