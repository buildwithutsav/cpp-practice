#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void setName(string n) {
        name = n;
    }

    void setRollNo(int r) {
        rollNo = r;
    }

    void setMarks(float m) {
        if(m >= 0 && m <= 100)
            marks = m;
        else
            cout << "Invalid marks!" << endl;
    }

    string getName() {
        return name;
    }

    int getRollNo() {
        return rollNo;
    }

    float getMarks() {
        return marks;
    }
};

int main() {
    Student s;

    s.setName("Utsav");
    s.setRollNo(41);
    s.setMarks(88.5);

    cout << "Name: " << s.getName() << endl;
    cout << "Roll No: " << s.getRollNo() << endl;
    cout << "Marks: " << s.getMarks() << endl;

    return 0;
}