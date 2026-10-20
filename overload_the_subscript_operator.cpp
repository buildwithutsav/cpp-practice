
#include <iostream>
#include <stdexcept>
using namespace std;

class Array {
    int data[5] = {10, 20, 30, 40, 50};

public:
    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            throw out_of_range("Invalid array index");
        }

        return data[index];
    }
};

int main() {
    Array arr;

    try {
        cout << "First element: " << arr[0] << endl;

        arr[2] = 99;
        cout << "Updated element: " << arr[2] << endl;

        cout << arr[5] << endl;
    }
    catch (const out_of_range& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
