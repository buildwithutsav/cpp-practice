#include <iostream>
using namespace std;

template <class T>

void swapValues(T &a, T &b) {
    T temp;

    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Before swapping: "
         << a << " " << b << endl;

    swapValues(a, b);

    cout << "After swapping: "
         << a << " " << b << endl;


    double x = 5.5;
    double y = 8.5;

    cout << "\nBefore swapping: "
         << x << " " << y << endl;

    swapValues(x, y);

    cout << "After swapping: "
         << x << " " << y << endl;


    char p = 'A';
    char q = 'B';

    cout << "\nBefore swapping: "
         << p << " " << q << endl;

    swapValues(p, q);

    cout << "After swapping: "
         << p << " " << q << endl;

    return 0;
}