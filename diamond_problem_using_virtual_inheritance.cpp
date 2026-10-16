
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;

    Person(string n) {
        name = n;
    }
};

class Student : virtual public Person {
public:
    Student(string n) : Person(n) {}
};

class Employee : virtual public Person {
public:
    Employee(string n) : Person(n) {}
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n)
        : Person(n), Student(n), Employee(n) {}

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    TeachingAssistant ta("Utsav");
    ta.display();

    return 0;
}
