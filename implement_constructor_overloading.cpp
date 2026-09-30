#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:

    // Default constructor
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }

    // Constructor for cube
    Box(int side) {
        length = side;
        width = side;
        height = side;
    }

    // Constructor for rectangular box
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    void volume() {
        cout << "Volume = "
             << length * width * height << endl;
    }
};

int main() {

    Box b1;
    Box b2(5);
    Box b3(10, 5, 3);

    cout << "Default Box: ";
    b1.volume();

    cout << "Cube: ";
    b2.volume();

    cout << "Rectangular Box: ";
    b3.volume();

    return 0;
}