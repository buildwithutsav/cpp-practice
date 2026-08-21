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
/*#include <iostream>
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
}*/

/*//MULTIPLE OBJECTS 
#include <iostream>
using namespace std;

class book{
    public:
    string bookname;
    double price;

    book(string b , double p){

        bookname = b;
        price = p;

        cout<<"Constructor: "<<bookname<<endl;
    }

    ~book(){

        cout<<"Destructor: "<<bookname<<endl;
    }
};

int main(){

    book b1("c++", 500);
    book b2("java", 600);
    book b3("python", 700);

    return 0;
}*/

//DESTRUCTOR WITH SCOPE
/*#include <iostream>
using namespace std;

class demo{
    public :

    demo(){
        cout<<"object created!"<<endl;
    }

    ~demo(){
        cout<<"object destroyed!"<<endl;
    }
};

int main(){
    demo d1;
    {
        demo d2;
    }
    demo d3;

    return 0;
}*/

/*//DESTRUCTOR WITH DYNAMIC MEMORY
#include <iostream>
using namespace std;

class Array{

    private:
    int *arr;
    int size;

    public:
    Array(int s){
        size = s;
        arr = new int[size];
        cout<<"Memory allocated!"<<endl;
        cout << "Enter "<<size << " elements: "<<endl;

        for (int i = 0; i < size; i++){
            cin>>arr[i];
        }
    }

    void display(){
        cout<<"array elements: ";
        for (int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    ~Array(){
        delete[]arr;
        cout<<"Memory deallocated!"<<endl;
    }
};

int main(){
    Array a1(5);
    a1.display();

    return 0;
}*/

//DESTRUCTOR WITH INHERITANCE
#include <iostream>
using namespace std;

class person{
    public:

    person(){
        cout<<"person constructor called!"<<endl;

    }

    ~person(){
        cout<<"person destructor called!"<<endl;
    }
};

class student : public person{
    public:
    student(){
        cout<<"student constructor called!"<<endl;
    }
    ~student(){
        cout<<"student destructor called!"<<endl;
    }
};

int main(){
    student s1;
    return 0;
}

