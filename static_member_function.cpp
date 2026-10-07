#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

    static string collegeName;

public:
    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "College: " << collegeName << endl;
    }

    static void changeCollege(string newName) {
        collegeName = newName;
    }
};

string Student::collegeName = "GITS";

int main() {
    Student s1("Utsav");
    Student s2("Rahul");

    cout << "Before changing:\n";

    s1.display();
    cout << endl;
    s2.display();

    Student::changeCollege("ABC Institute");

    cout << "\nAfter changing:\n";

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}