
#include <iostream>
using namespace std;

class Multiplier {
public:
    int operator()(int a, int b) {
        return a * b;
    }
};

int main() {
    Multiplier m;

    cout << "Product: " << m(5, 4) << endl;
    cout << "Product: " << m(7, 3) << endl;

    return 0;
}
