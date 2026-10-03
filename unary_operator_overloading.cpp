#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    void operator-() {
        value = -value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n(25);

    cout << "Before unary minus:" << endl;
    n.display();

    -n;

    cout << "After unary minus:" << endl;
    n.display();

    return 0;
}