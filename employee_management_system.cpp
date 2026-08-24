#include <iostream>
using namespace std;

class employee{
    protected:
    int employeeid;
    string name;
    double basicsalary;

    public:
    employee(int id,string n, double salary):employeeid(id),name(n),basicsalary(salary){
        cout<<"employee constructor called!"<<endl;
    }
};



class manager : public employee{
    private:
    string department;
    double bonus;

    public:
    manager(int id,string n,double salary , string dept,double b):employee(id,n,salary){
        department = dept;
        bonus = b;

        cout<<"manager constructor called!"<<endl;


    }

    void calculatesalary(){
        double grosssalary = basicsalary + bonus;

        cout<<"employee id : "<<employeeid<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"basic salary: "<<basicsalary<<endl;
        cout<<"department: "<<department<<endl;
        cout<<"bonus: "<<bonus<<endl;
        cout<<"gross salary: "<<grosssalary<<endl;


}
};

int main(){
    manager m1(101,"utsav",100000,"IT",150000);
    m1.calculatesalary();

    return 0;
}