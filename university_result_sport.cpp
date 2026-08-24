#include <iostream>
using namespace std;

class Student {

protected:
    string name;
    int rollNo;

public:

    Student(string n, int r)
        : name(n), rollNo(r) {

        cout << "Student Constructor Called!" << endl;
    }
};


class Academic {

protected:
    double cppMarks;
    double dsaMarks;
    double mathsMarks;

public:

    Academic(double c, double d, double m)
        : cppMarks(c), dsaMarks(d), mathsMarks(m) {

        cout << "Academic Constructor Called!" << endl;
    }
};


class Sports {

protected:
    string sportsName;
    double sportsScore;

public:

    Sports(string s, double score)
        : sportsName(s), sportsScore(score) {

        cout << "Sports Constructor Called!" << endl;
    }
};


class Result : public Student, public Academic, public Sports {

private:
    double academicTotal;
    double academicPercentage;
    double finalScore;

public:

    Result(string n, int r,
           double c, double d, double m,
           string s, double score)

        : Student(n, r),
          Academic(c, d, m),
          Sports(s, score) {

        cout << "Result Constructor Called!" << endl;
    }

    void calculate() {

        academicTotal = cppMarks + dsaMarks + mathsMarks;

        academicPercentage = academicTotal / 3;

        finalScore =
            (academicPercentage * 0.8) +
            (sportsScore * 0.2);
    }

    void display() {

        cout << "\n------ STUDENT RESULT ------" << endl;

        cout << "Name           : " << name << endl;
        cout << "Roll Number    : " << rollNo << endl;

        cout << "\n--- Academic Details ---" << endl;

        cout << "C++ Marks      : " << cppMarks << endl;
        cout << "DSA Marks      : " << dsaMarks << endl;
        cout << "Maths Marks    : " << mathsMarks << endl;

        cout << "Academic Total : " << academicTotal << endl;
        cout << "Percentage     : " << academicPercentage << "%" << endl;

        cout << "\n--- Sports Details ---" << endl;

        cout << "Sport          : " << sportsName << endl;
        cout << "Sports Score   : " << sportsScore << endl;

        cout << "\nFinal Score    : " << finalScore << endl;
    }
};


int main() {

    Result r1(
        "Utsav",
        235,
        85,
        90,
        80,
        "Basketball",
        90
    );

    r1.calculate();
    r1.display();

    return 0;
}