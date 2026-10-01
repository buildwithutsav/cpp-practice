#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string name;
    string subject;

public:
    Teacher(string n, string s) {
        name = n;
        subject = s;
    }

    void displayTeacher() {
        cout << "Teacher: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Department {
private:
    string departmentName;
    Teacher *teacher;

public:
    Department(string d, Teacher *t) {
        departmentName = d;
        teacher = t;
    }

    void display() {
        cout << "Department: "
             << departmentName << endl;

        teacher->displayTeacher();
    }
};

int main() {
    Teacher t1("Mr. Sharma", "C++");

    Department d1("Computer Science", &t1);

    d1.display();

    return 0;
}