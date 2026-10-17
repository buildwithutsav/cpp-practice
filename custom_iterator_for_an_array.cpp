
#include <iostream>
using namespace std;

class MyArray {
    int data[3] = {10, 20, 30};

public:
    int* begin() {
        return data;
    }

    int* end() {
        return data + 3;
    }
};

int main() {
    MyArray arr;

    cout << "Array elements: ";

    for (int value : arr) {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}
