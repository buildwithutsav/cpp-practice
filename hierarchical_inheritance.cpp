#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    float salary;

public:
    Employee(string n, float s) {
        name = n;
        salary = s;
    }
};

class Developer : public Employee {
private:
    string language;

public:
    Developer(string n, float s, string l)
        : Employee(n, s) {
        language = l;
    }

    void display() {
        cout << "Developer Name: " << name << endl;
        cout << "Salary: Rs. " << salary << endl;
        cout << "Programming Language: " << language << endl;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(string n, float s, int t)
        : Employee(n, s) {
        teamSize = t;
    }

    void display() {
        cout << "Manager Name: " << name << endl;
        cout << "Salary: Rs. " << salary << endl;
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Developer d("Rahul", 50000, "C++");
    Manager m("Aman", 70000, 10);

    d.display();

    cout << endl;

    m.display();

    return 0;
}