#include <iostream>
#include <memory>
using namespace std;

class Employee {
private:
    string name;

public:
    Employee(string n) : name(n) {
        cout << "Employee created\n";
    }

    void display() const {
        cout << "Employee: " << name << endl;
    }

    ~Employee() {
        cout << "Employee destroyed\n";
    }
};

int main() {
    unique_ptr<Employee> p1 =
        make_unique<Employee>("Utsav");

    p1->display();

    unique_ptr<Employee> p2 = move(p1);

    if (p1 == nullptr)
        cout << "p1 no longer owns the object\n";

    p2->display();

    return 0;
}