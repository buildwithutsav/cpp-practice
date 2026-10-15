
#include <iostream>
using namespace std;

template <class T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum integer: "
         << findMax(10, 25) << endl;

    cout << "Maximum double: "
         << findMax(4.5, 7.2) << endl;

    cout << "Maximum character: "
         << findMax('A', 'Z') << endl;

    return 0;
}
