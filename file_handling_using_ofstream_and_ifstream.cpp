
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Write to file
    ofstream outFile("student.txt");

    if (!outFile) {
        cout << "Error opening file for writing."
             << endl;
        return 1;
    }

    outFile << "Utsav" << endl;
    outFile << 92.5 << endl;
    outFile.close();

    // Read from file
    ifstream inFile("student.txt");

    if (!inFile) {
        cout << "Error opening file for reading."
             << endl;
        return 1;
    }

    string name;
    double marks;

    getline(inFile, name);
    inFile >> marks;

    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;

    inFile.close();

    return 0;
}
