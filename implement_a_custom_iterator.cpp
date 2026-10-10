#include <iostream>
using namespace std;

class NumberList {
private:
    int arr[5];

public:
    NumberList() {
        for (int i = 0; i < 5; i++)
            arr[i] = (i + 1) * 10;
    }

    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            throw out_of_range("Invalid index");
        }

        return arr[index];
    }
};

int main() {
    NumberList list;

    cout << "Element at index 2: "
         << list[2] << endl;

    list[2] = 99;

    cout << "Updated element: "
         << list[2] << endl;

    return 0;
}