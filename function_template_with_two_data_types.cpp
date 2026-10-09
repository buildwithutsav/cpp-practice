#include <iostream>
using namespace std;

template <class T, class U>
void displayPair(T a, U b) {
    cout << "First value: " << a << endl;
    cout << "Second value: " << b << endl;
}

int main() {
    displayPair(10, 5.5);
    cout << endl;

    displayPair("Age", 20);
    cout << endl;

    displayPair('A', 99);

    return 0;
}