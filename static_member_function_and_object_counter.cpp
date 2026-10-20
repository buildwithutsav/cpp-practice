
#include <iostream>
using namespace std;

class Employee {
    static int count;

public:
    Employee() {
        count++;
    }

    Employee(const Employee&) {
        count++;
    }

    ~Employee() {
        count--;
    }

    static void showCount() {
        cout << "Active objects: " << count << endl;
    }
};

int Employee::count = 0;

int main() {
    Employee::showCount();

    {
        Employee e1, e2;
        Employee::showCount();

        Employee e3 = e1;
        Employee::showCount();
    }

    Employee::showCount();

    return 0;
}
