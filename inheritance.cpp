#include <iostream>
using namespace std;

class person{
    public :
    string name;
    int age;

    person(string n , int a ){
        name = n;
        age = a;

        cout<<"Person Object Created Successfully!"<<endl;

    }

void displaydata(){

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

    };


class student : public person{
    public :
    int rollno;

    student(string n , int a , int r) : person(n , a){
        rollno = r;

        cout<<"Student Object Created Successfully!"<<endl;

    }

    void displaystudent(){
        
        displaydata();
        cout << "Roll Number: " << rollno << endl;
    }
};

int main(){

 person p("Utsav" , 20);
 p.displaydata();
 
 student s("Utsav" , 20 , 101);
 s.displaystudent();

    return 0;
    
}