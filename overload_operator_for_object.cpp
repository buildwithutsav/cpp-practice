#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "Name: " << s.name << endl;
        out << "Roll No: " << s.rollNo << endl;
        out << "Marks: " << s.marks << endl;

        return out;
    }
};

int main() {
    Student s1("Utsav", 101, 88.5);

    cout << s1;

    return 0;
}