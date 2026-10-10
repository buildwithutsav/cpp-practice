#include <iostream>
using namespace std;

class Data {
private:
    int* arr;
    int size;

public:
    Data(int n) : size(n) {
        arr = new int[size];

        for (int i = 0; i < size; i++)
            arr[i] = i + 1;
    }

    // Copy constructor
    Data(const Data& other) : size(other.size) {
        arr = new int[size];

        for (int i = 0; i < size; i++)
            arr[i] = other.arr[i];
    }

    // Copy assignment operator
    Data& operator=(const Data& other) {
        if (this != &other) {
            int* newArr = new int[other.size];

            for (int i = 0; i < other.size; i++)
                newArr[i] = other.arr[i];

            delete[] arr;

            arr = newArr;
            size = other.size;
        }

        return *this;
    }

    void display() const {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    ~Data() {
        delete[] arr;
    }
};

int main() {
    Data d1(3);

    Data d2 = d1;  // Copy constructor

    Data d3(2);
    d3 = d1;       // Copy assignment

    cout << "Original: ";
    d1.display();

    cout << "Copied object: ";
    d2.display();

    cout << "Assigned object: ";
    d3.display();

    return 0;
}