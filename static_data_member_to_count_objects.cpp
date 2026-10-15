
#include <iostream>
using namespace std;

class Student {
    static int count;

public:
    Student() {
        count++;
    }

    static void displayCount() {
        cout << "Total objects: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    Student::displayCount();

    return 0;
}
