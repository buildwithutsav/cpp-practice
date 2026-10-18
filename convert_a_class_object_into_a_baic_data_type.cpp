
#include <iostream>
using namespace std;

class Distance {
    double meters;

public:
    Distance(double m) : meters(m) {}

    operator double() const {
        return meters / 1000.0;
    }
};

int main() {
    Distance d(2500);

    double kilometers = d;

    cout << "Distance in kilometers: "
         << kilometers << endl;

    return 0;
}
