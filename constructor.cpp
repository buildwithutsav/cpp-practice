#include <iostream>
using namespace std;

/*class Student{

    public:

    string name;
    int rollno;

    void getdata(){

        cout<<"Enter Name:"<<endl;
        getline(cin >> ws , name);

        cout<<"Enter Roll Number:  "<<endl;
        cin>>rollno;


    }

    void displaydata(){

        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;

    }

    Student(string n , int r){

        name = n;
        rollno = r;

        cout<<"Student Object Created Successfully!"<<endl;
    }


};

int main(){

    Student s1("John Doe", 123);
    // s1.getdata();
    s1.displaydata();

    return 0;

}*/

/*class Rectangle{

    public:

    int length = 10;
    int breadth = 5;

    Rectangle(){

        cout<<"Rectangle Object Created Successfully!"<<endl;
    }

    void area(){

        int a = length * breadth;
        cout<<"Area of Rectangle is: "<<a<<endl;


    }
};

int main(){

    Rectangle r1;
    r1.area();

    return 0;
}*/

class Employee{

    public:

    string name;
    int age;
    double salary;

    Employee(string n , int a , double s){

        name = n;
        age = a;
        salary = s;

        cout<<"Employee Object Created Successfully!"<<endl;
    }

    void displaydata(){

        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;

    }


};

int main(){

    Employee e1("Utsav" , 20 , 100000);
    e1.displaydata();

    return 0;
}