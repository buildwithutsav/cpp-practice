#include <iostream>
using namespace std;

class Employee {
public:
    Employee() {
        cout << "Employee Constructor" << endl;
    }

    virtual ~Employee() {
        cout << "Employee Destructor" << endl;
    }
};

class Developer : public Employee {
public:
    Developer() {
        cout << "Developer Constructor" << endl;
    }

    ~Developer() {
        cout << "Developer Destructor" << endl;
    }
};

int main() {
    Employee *ptr;

    ptr = new Developer();

    delete ptr;

    return 0;
}