#include <iostream>
using namespace std;

class Distance {
private:
    float meters;

public:
    Distance(float m) {
        meters = m;
    }

    operator int() {
        return (int)meters;
    }

    void display() {
        cout << "Distance = "
             << meters << " meters" << endl;
    }
};

int main() {

    Distance d(25.8);

    d.display();

    int value;

    value = d;

    cout << "Integer value = "
         << value << endl;

    return 0;
}