#include <iostream>
using namespace std;

class Student {
private:
    int* marks;

public:
    Student(int m) {
        marks = new int(m);
    }

    // Copy constructor
    Student(const Student& s) {
        marks = new int(*s.marks);
    }

    // Assignment operator
    Student& operator=(const Student& s) {
        if (this != &s) {
            *marks = *s.marks;
        }

        return *this;
    }

    void setMarks(int m) {
        *marks = m;
    }

    void display() const {
        cout << "Marks: " << *marks << endl;
    }

    ~Student() {
        delete marks;
    }
};

int main() {
    Student s1(80);

    // Copy constructor
    Student s2 = s1;

    // Assignment operator
    Student s3(50);
    s3 = s1;

    s1.setMarks(95);

    cout << "Student 1: ";
    s1.display();

    cout << "Student 2: ";
    s2.display();

    cout << "Student 3: ";
    s3.display();

    return 0;
}