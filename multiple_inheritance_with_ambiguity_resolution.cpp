
#include <iostream>
using namespace std;

class Teacher {
public:
    void display() {
        cout << "I am a Teacher." << endl;
    }
};

class Researcher {
public:
    void display() {
        cout << "I am a Researcher." << endl;
    }
};

class Professor : public Teacher, public Researcher {
public:
    void show() {
        Teacher::display();
        Researcher::display();
    }
};

int main() {
    Professor p;
    p.show();

    return 0;
}
