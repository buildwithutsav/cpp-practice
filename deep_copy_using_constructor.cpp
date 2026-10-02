#include <iostream>
using namespace std;

class Number {
private:
    int *value;

public:
    Number(int v) {
        value = new int;
        *value = v;
    }

    // Deep copy
    Number(const Number &obj) {
        value = new int;
        *value = *(obj.value);
    }

    void changeValue(int v) {
        *value = v;
    }

    void display() {
        cout << "Value = " << *value << endl;
    }

    ~Number() {
        delete value;
    }
};

int main() {
    Number n1(10);

    Number n2 = n1;

    cout << "Before changing:" << endl;

    n1.display();
    n2.display();

    n2.changeValue(50);

    cout << "\nAfter changing copied object:" << endl;

    n1.display();
    n2.display();

    return 0;
}