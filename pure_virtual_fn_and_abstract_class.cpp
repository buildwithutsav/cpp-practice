
#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0;

    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
    double monthlySalary;

public:
    FullTimeEmployee(double salary) {
        monthlySalary = salary;
    }

    double calculateSalary() override {
        return monthlySalary;
    }
};

class PartTimeEmployee : public Employee {
    double hours, rate;

public:
    PartTimeEmployee(double h, double r) {
        hours = h;
        rate = r;
    }

    double calculateSalary() override {
        return hours * rate;
    }
};

int main() {
    FullTimeEmployee e1(40000);
    PartTimeEmployee e2(80, 250);

    Employee* ptr;

    ptr = &e1;
    cout << "Full-time salary: "
         << ptr->calculateSalary() << endl;

    ptr = &e2;
    cout << "Part-time salary: "
         << ptr->calculateSalary() << endl;

    return 0;
}
