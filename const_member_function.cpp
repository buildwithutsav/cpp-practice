#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Utsav", 85);

    const Student s2("Rahul", 90);

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    return 0;
}