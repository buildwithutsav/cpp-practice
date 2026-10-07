#include <iostream>
using namespace std;

class Employee {
protected:
    string name;

public:
    Employee(string n) {
        name = n;
    }

    virtual void calculateSalary() = 0;

    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
private:
    double salary;

public:
    FullTimeEmployee(string n, double s)
        : Employee(n) {
        salary = s;
    }

    void calculateSalary() override {
        cout << name
             << " - Full Time Salary: Rs. "
             << salary << endl;
    }
};

class PartTimeEmployee : public Employee {
private:
    int hours;
    double rate;

public:
    PartTimeEmployee(string n, int h, double r)
        : Employee(n) {
        hours = h;
        rate = r;
    }

    void calculateSalary() override {
        cout << name
             << " - Part Time Salary: Rs. "
             << hours * rate << endl;
    }
};

int main() {
    FullTimeEmployee e1("Utsav", 50000);
    PartTimeEmployee e2("Rahul", 80, 300);

    Employee *ptr;

    ptr = &e1;
    ptr->calculateSalary();

    ptr = &e2;
    ptr->calculateSalary();

    return 0;
}