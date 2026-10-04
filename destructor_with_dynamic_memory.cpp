#include <iostream>
using namespace std;

class Array {
private:
    int *arr;
    int size;

public:
    Array(int s) {
        size = s;

        arr = new int[size];

        cout << "Memory allocated." << endl;
    }

    void input() {
        cout << "Enter " << size << " elements: ";

        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array: ";

        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    ~Array() {
        delete[] arr;

        cout << "Memory released by destructor." << endl;
    }
};

int main() {
    Array a(5);

    a.input();
    a.display();

    return 0;
}