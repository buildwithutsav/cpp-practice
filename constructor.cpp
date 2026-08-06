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

/*class Employee{

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
}*/

/*class Student{

    public:

    string name;
    int rollno;

    Student(){
        name = "Eskimo";
        rollno = 0;
        cout<<"Default constructor called!"<<endl;
    }



    Student(string n , int r){

        name = n;
        rollno = r;

        cout<<"Parameterized constructor called!"<<endl;


    }

    void displaydata(){

        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollno<<endl;


    }

    void updateName(string newName){

        name = newName;
        cout<<"\nName updated successfully!"<<endl;

    }


};

int main(){

    Student s1;
    Student s2("Utsav",235);

    cout<<"\nStudent 1 Details: "<<endl;
    s1.displaydata();

    cout<<"\nStudent 2 Destails: "<<endl;
    s2.displaydata();

    

    return 0;
}*/

class Book{

    public:

    string Name;
    double price;

    Book(string n , double p){
        Name = n;
        price = p;
        cout<<"Parameterized constructor called! "<<endl;
    }

    Book(Book &obj){
        Name = obj.Name;
        price = obj.price;

        cout<<"Copy constructor called! "<<endl;
    }

    void displaydata(){

        cout<<"Book Name: "<<Name<<endl;
        cout<<"Book Price: "<<price<<endl;
    }
};

int main(){
    Book b1("Atmoic Habits",235);

    Book b2(b1);
    
    cout<<"\nBook 1 Details\n";
    b1.displaydata();

    cout<<"\nBook 2 Details\n";
    b2.displaydata();

    return 0;
}


