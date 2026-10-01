#include <iostream>
using namespace std;

template <class T>

class Maximum {
private:
    T a;
    T b;

public:
    Maximum(T x, T y) {
        a = x;
        b = y;
    }

    T findMax() {
        if(a > b)
            return a;
        else
            return b;
    }
};

int main() {
    Maximum<int> m1(10, 20);

    cout << "Maximum integer = "
         << m1.findMax() << endl;

    Maximum<double> m2(15.5, 8.7);

    cout << "Maximum double = "
         << m2.findMax() << endl;

    return 0;
}