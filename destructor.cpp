//BASIC DESTRUCTOR
/*#include  <iostream>
using namespace std;

class student{
    public:
    string name;
    int rollno;

    student(string n , int r){
        name = n;
        rollno=r;

        cout<<"student object created successfully!"<<endl;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;
    }

    ~student(){
        cout<<"student object destroyed successfully!"<<endl;
    }
};

int main(){

    student s1("Utsav ", 235);
    s1.display();
    return 0;
}*/

//CONSTRUCTOR AND DESTRUCTOR
#include <iostream>
using namespace std;

class employee{
    public:
    string name;
    int employeeID;
    double salary;

    employee(string n , int id , double s){

        name = n;
        employeeID = id;
        salary = s;
        
        cout<<"Employee object created successfully!"<<endl;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

    ~employee(){
        cout<<"Employee object destroyed successfully!"<<endl;
    }
};

int main(){

    employee e1("Utsav", 235 , 100000);
    e1.display();

    return 0;
}