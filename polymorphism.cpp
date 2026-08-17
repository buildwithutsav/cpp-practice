//#include <iostream>
//using namespace std;

/*class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Two integers: " << calc.add(10, 20) << endl;
    cout << "Three integers: " << calc.add(10, 20, 30) << endl;
    cout << "Two floats: " << calc.add(2.5f, 3.5f) << endl;

    return 0;
}*/

/*#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    int length = 10;
    int width = 5;

    void area() override {
        cout << "Area of Rectangle: "
             << length * width << endl;
    }
};

class Circle : public Shape {
public:
    float radius = 7;

    void area() override {
        cout << "Area of Circle: "
             << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape* ptr;

    Rectangle r;
    Circle c;

    ptr = &r;
    ptr->area();

    ptr = &c;
    ptr->area();

    return 0;
}*/

#include <iostream>
#include <vector>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
        cout << "Employee salary" << endl;
    }

    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
public:
    void calculateSalary() override {
        int monthlySalary = 50000;

        cout << "Full-Time Employee Salary: ₹"
             << monthlySalary << endl;
    }
};

class PartTimeEmployee : public Employee {
public:
    void calculateSalary() override {
        int hours = 80;
        int rate = 300;

        cout << "Part-Time Employee Salary: ₹"
             << hours * rate << endl;
    }
};

class Intern : public Employee {
public:
    void calculateSalary() override {
        int stipend = 15000;

        cout << "Intern Stipend: ₹"
             << stipend << endl;
    }
};

int main() {

    vector<Employee*> employees;

    FullTimeEmployee fullTime;
    PartTimeEmployee partTime;
    Intern intern;

    employees.push_back(&fullTime);
    employees.push_back(&partTime);
    employees.push_back(&intern);

    for (Employee* emp : employees) {
        emp->calculateSalary();
    }

    return 0;
}