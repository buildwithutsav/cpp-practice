#include <iostream>
using namespace std;

/*class person{
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
    
}*/

/*class Employee{
    public:
    string name;
    int id;
    double salary;

    Employee(string n , int i , double s){

        name = n;
        id = i;
        salary = s;

        cout<<"Employee Object Created Successfully!"<<endl;
    }

    void getdata(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
        

    }
};

class Manager : public Employee{

    public:
    string department;

    Manager(string n , int i , double s , string d) : Employee(n , i , s){
        department = d;
        cout<<"Manager Object Created Successfully!"<<endl;
    }

    void displaydata(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Department: "<<department<<endl;
    }
};

int main(){
    
    Manager m1("Utsav" , 101 , 100000 , "IT");
    m1.displaydata();

    return 0;
}

class person{
    public:
    string name;
    int age;

    person(string n , int a){
        name = n;
        age = a;

        cout<<"Person Object Created Successfully!"<<endl;
    }


};

class employee : public person{
    public:
    int id;
    double salary;

    employee(string n , int a , int i , double s) : person(n , a){
        id = i;
        salary = s;

        cout<<"Employee Object Created Successfully!"<<endl;
    }

};

class manager : public employee{
    public:
    string department;

    manager(string n , int a , int i , double s , string d) : employee(n , a , i , s){
        department = d;

        cout<<"Manager Object Created Successfully!"<<endl;
    }

    void displaydata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Department: "<<department<<endl;
    }
};

int main(){
    
    manager m1("Utsav" , 20 , 101 , 100000 , "IT");
    m1.displaydata();

    return 0;
}*/

class student{
    public:
    string name;
    int rollno;

    student(string n , int r){

        name = n;
        rollno = r;

        cout<<"Student Object Created Successfully!"<<endl;
    }


};

class sports{
    public:
    string sportsname;
    int score;

    sports(string s , int sc) {

        sportsname = s;
        score = sc;

        cout<<"Sports Object Created Successfully!"<<endl;
    }
};

class result : public student , public sports{
    public:
    result(string n , int r , string s , int sc) : student(n , r) , sports(s,sc){

        

        cout<<"Result Object Created Successfully!"<<endl;
    }

    void displaydata(){
        cout<<"Name: "  <<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
        cout<<"Sports Name: "<<sportsname<<endl;
        cout<<"Score: "<<score<<endl;

    }
};

int main(){

    result r1("Utsav" , 101 , "Basketball" , 100);
    r1.displaydata();

    return 0;
}


