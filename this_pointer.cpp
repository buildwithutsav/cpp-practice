#include <iostream>
#include <string>
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

    Student* higher(Student &s) {
        if(this->marks > s.marks)
            return this;
        else
            return &s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Utsav", 85);
    Student s2("Rahul", 92);

    Student *result;

    result = s1.higher(s2);

    cout << "Student with higher marks:\n";
    result->display();

    return 0;
}