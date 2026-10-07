#include <iostream>
using namespace std;

class Distance {
private:
    int meters;

public:
    Distance(int m) {
        meters = m;
    }

    void display() {
        cout << "Distance = "
             << meters << " meters" << endl;
    }
};

int main() {
    int x = 50;

    Distance d = x;

    d.display();

    return 0;
}