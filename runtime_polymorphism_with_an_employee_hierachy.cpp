
#include <iostream>
using namespace std;

class Employee {
protected:
    double salary;

public:
    Employee(double s) : salary(s) {}

    virtual double calculateBonus() const = 0;

    virtual ~Employee() = default;
};

class Manager : public Employee {
public:
    Manager(double s) : Employee(s) {}

    double calculateBonus() const override {
        return salary * 0.20;
    }
};

class Developer : public Employee {
public:
    Developer(double s) : Employee(s) {}

    double calculateBonus() const override {
        return salary * 0.10;
    }
};

int main() {
    Manager m(60000);
    Developer d(50000);

    Employee* employees[] = {&m, &d};

    for (Employee* e : employees) {
        cout << "Bonus: " << e->calculateBonus()
             << endl;
    }

    return 0;
}
