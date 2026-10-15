
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }
};

class Student {
protected:
    int rollNo;
    float marks;

public:
    Student(int r, float m) {
        rollNo = r;
        marks = m;
    }
};

class Result : public Person, public Student {
public:
    Result(string n, int r, float m)
        : Person(n), Student(r, m) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Result s("Utsav", 101, 89.5);
    s.display();

    return 0;
}
