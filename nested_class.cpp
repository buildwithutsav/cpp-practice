#include <iostream>
#include <string>
using namespace std;

class University {

public:

    class Department {
    private:
        string departmentName;

    public:
        Department(string name) {
            departmentName = name;
        }

        void display() {
            cout << "Department: "
                 << departmentName << endl;
        }
    };
};

int main() {

    University::Department d("Computer Science");

    d.display();

    return 0;
}