
#include <iostream>
#include <string>
using namespace std;

class University {
    string universityName;

public:
    University(string name) : universityName(name) {}

    class Department {
        string departmentName;

    public:
        Department(string name)
            : departmentName(name) {}

        void display(const University& u) const {
            cout << "University: "
                 << u.universityName << endl;

            cout << "Department: "
                 << departmentName << endl;
        }
    };
};

int main() {
    University u("RTU");

    University::Department d("Computer Science");

    d.display(u);

    return 0;
}
