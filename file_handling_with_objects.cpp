#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void input() {
        cout << "Enter name: ";
        getline(cin >> ws, name);

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void saveToFile() {
        ofstream file("student.txt");

        file << name << endl;
        file << rollNo << endl;
        file << marks << endl;

        file.close();

        cout << "Data saved successfully." << endl;
    }

    void readFromFile() {
        ifstream file("student.txt");

        getline(file, name);
        file >> rollNo;
        file >> marks;

        file.close();
    }

    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.input();
    s1.saveToFile();

    Student s2;

    s2.readFromFile();
    s2.display();

    return 0;
}