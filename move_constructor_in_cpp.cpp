
#include <iostream>
#include <utility>
using namespace std;

class Buffer {
    int* data;
    int size;

public:
    Buffer(int s) : data(new int[s]), size(s) {
        for (int i = 0; i < size; i++)
            data[i] = (i + 1) * 10;
    }

    // Move constructor
    Buffer(Buffer&& other) noexcept
        : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;

        cout << "Move constructor called" << endl;
    }

    void display() const {
        if (data == nullptr) {
            cout << "Buffer is empty" << endl;
            return;
        }

        for (int i = 0; i < size; i++)
            cout << data[i] << " ";

        cout << endl;
    }

    ~Buffer() {
        delete[] data;
    }
};

int main() {
    Buffer b1(3);

    cout << "Original buffer: ";
    b1.display();

    Buffer b2(move(b1));

    cout << "Moved buffer: ";
    b2.display();

    cout << "Original after move: ";
    b1.display();

    return 0;
}
