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

/*class rectangle{

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
}*/



    /*class employee{

        public:

        string name;
        int age;
        int salary;

        void getdata(){
            cout<<"Enter Name:"<<endl;
            getline(cin,name);

            cout<<"Enter Age:"<<endl;
            cin>>age;

            cout<<"Enter Salary:"<<endl;
            cin>>salary;


        }

        void displaydata(){
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
            cout<<"Salary:"<<salary<<endl;

        }

    };

    int main(){

        employee e1;
        e1.getdata();
        e1.displaydata();

        return 0;
    }*/

    class BankAccount{

        public:

        string name;
        int account_number;
        double balance;

        void getdata(){
            cout<<"Enter Name:"<<endl;
            getline(cin,name);

            cout<<"Enter Account Number:"<<endl;
            cin>>account_number;

            cout<<"Enter Balance:"<<endl;
            cin>>balance;


        }

        void deposit(){

            double amount;
            cout<<"Enter Amount to Deposit:"<<endl;
            cin>>amount;

            balance += amount;
            cout << "Amount Deposited Successfully!" << endl;
        }

        void withdraw(){

            double amount;
            cout<<"Enter Amount to Withdraw:"<<endl;
            cin>>amount;

            if(amount > balance){
                cout<<"Insufficient Balance"<<endl;
            }
            else{
                balance -= amount;
                cout<<"Withdrawal Successful"<<endl;
            }
            }
        

        void displaydata(){

            cout<<"------Bank Account Details------"<<endl;
            cout<<"Name             : "<<name<<endl;
            cout<<"Account Number   : "<<account_number<<endl;
            
            cout<<"Current Balance  : "<<balance<<endl;

        }

    };


        int main(){

            BankAccount b1;
            b1.getdata();
            b1.deposit();
            b1.withdraw();
            b1.displaydata();


            return 0;
                }

    
    







