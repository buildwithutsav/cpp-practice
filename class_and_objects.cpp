#include <iostream>
using namespace std;

/*class Student{
    string name;
    int age;
    int rollno;

    public:
    void setdata(string n ,int a , int r){
        name = n;
        age = a;
        rollno= r;

    }
    void getdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll No:"<<rollno<<endl;

    }

};

int main()
{
    Student s1;
    s1.setdata("Utsav",20,101);
    s1.getdata();
    return 0;
}*/

class rectangle{

    public:

    int length;
    int breadth;

    void input(){

        cout<<"Enter Lenght:"<<endl;
        cin>>length;

        cout<<"Enter breadth:"<<endl;
        cin>>breadth;


    }

    void area(){
        int a = length * breadth;
        cout<<"Area of rectangle is:"<<a<<endl;

    }

};
int main(){

    rectangle r;
    r.input();
    r.area();
    
    return 0;
}
    
    







