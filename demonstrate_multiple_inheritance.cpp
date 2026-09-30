#include <iostream>
using namespace std;

class Academic {
protected:
    int academicMarks;

public:
    void getAcademicMarks() {
        cout << "Enter academic marks: ";
        cin >> academicMarks;
    }
};

class Sports {
protected:
    int sportsMarks;

public:
    void getSportsMarks() {
        cout << "Enter sports marks: ";
        cin >> sportsMarks;
    }
};

class Result : public Academic, public Sports {

public:
    void display() {

        int total = academicMarks + sportsMarks;

        cout << "\nAcademic Marks: "
             << academicMarks << endl;

        cout << "Sports Marks: "
             << sportsMarks << endl;

        cout << "Total: "
             << total << endl;
    }
};

int main() {

    Result r;

    r.getAcademicMarks();
    r.getSportsMarks();

    r.display();

    return 0;
}