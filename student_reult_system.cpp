#include <iostream>
using namespace std;

class student{
    protected:
    int rollno;
    string name;

    public:
    void inputstudent(){
        cout<<"enter roll number: ";
        cin>>rollno;

        cout<<"enter name: ";
        cin.ignore();
        getline(cin,name);

    }
};

class  marks : public student{
    protected:
    double mark1,mark2,mark3;

    public:
    void inputmarks(){
        cout<<"enter c++ marks: ";
        cin>>mark1;

        cout<<"enter dsa marks: ";
        cin>>mark2;

        cout<<"Enter maths marks: ";
        cin>>mark3;
    }
};

class result : public marks{
    private:
    double total;
    double percentage;
    char grade;

    public:
    void calculate(){
        total = mark1 + mark2 + mark3;
        percentage = total/3;

        if(percentage>=90)
        grade = 'a';

        else if(percentage >= 75)
        grade = 'b';

        else if(percentage>=40)
        grade = 'd';

        else
        grade = 'f';
    }

    void display(){
        cout << "Roll Number : " << rollno << endl;
        cout << "Name        : " << name << endl;

        cout << "C++ Marks   : " << mark1 << endl;
        cout << "DSA Marks   : " << mark2 << endl;
        cout << "Maths Marks : " << mark3 << endl;

        cout << "Total       : " << total << endl;
        cout << "Percentage  : " << percentage << "%" << endl;

        if (grade == 'F')
            cout << "Grade       : Fail" << endl;
        else
            cout << "Grade       : " << grade << endl;
    }

};

int main(){

    result r1;

    r1.inputstudent();
    r1.inputmarks();
    r1.calculate();
    r1.display();

return 0;
}