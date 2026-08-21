//BASIC DESTRUCTOR
#include  <iostream>
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
}

