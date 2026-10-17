
#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;

public:
    Student(string n, int r)
        : name(n), rollNo(r) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    unique_ptr<Student> ptr =
        make_unique<Student>("Utsav", 101);

    ptr->display();

    return 0;
}
