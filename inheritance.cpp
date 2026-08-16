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

/*class student{
    public:
    string name;
    int rollno;

    student(string n , int r){

        name = n;
        rollno = r;

        cout<<"Student Object Created Successfully!"<<endl;
    }


};

class sports
{
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
}*/
/*
include <iostream>
using namespace std;

class Person {

public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;

        cout << "Person Constructor Called!" << endl;
    }
};


class Student : virtual public Person {

public:
    int rollno;

    Student(string n, int a, int r)
        : Person(n, a) {

        rollno = r;

        cout << "Student Constructor Called!" << endl;
    }
};


class Employee : virtual public Person {

public:
    int employeeID;

    Employee(string n, int a, int id)
        : Person(n, a) {

        employeeID = id;

        cout << "Employee Constructor Called!" << endl;
    }
};


class Result : public Student, public Employee {

public:
    double marks;

    Result(string n, int a, int r, int id, double m)
        : Person(n, a),
          Student(n, a, r),
          Employee(n, a, id) {

        marks = m;

        cout << "Result Constructor Called!" << endl;
    }

    void displayData() {

        cout << "\n------ RESULT DETAILS ------" << endl;

        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Roll Number : " << rollno << endl;
        cout << "Employee ID : " << employeeID << endl;
        cout << "Marks       : " << marks << endl;
    }
};


int main() {

    Result r1("Utsav", 20, 101, 5001, 89.5);

    r1.displayData();

    return 0;
*/
/*#include <iostream>
using namespace std;

class Vehicle {

public:
    string brand;
    int speed;

    Vehicle(string b, int s) {
        brand = b;
        speed = s;

        cout << "Vehicle Constructor Called!" << endl;
    }
};


class Car : public Vehicle {

public:
    int numberOfDoors;

    Car(string b, int s, int doors)
        : Vehicle(b, s) {

        numberOfDoors = doors;

        cout << "Car Constructor Called!" << endl;
    }
};


class ElectricCar : public Car {

public:
    double batteryCapacity;

    ElectricCar(string b, int s, int doors, double battery)
        : Car(b, s, doors) {

        batteryCapacity = battery;

        cout << "ElectricCar Constructor Called!" << endl;
    }

    void displayData() {

        cout << "\n------ ELECTRIC CAR DETAILS ------" << endl;

        cout << "Brand            : " << brand << endl;
        cout << "Speed            : " << speed << " km/h" << endl;
        cout << "Number of Doors  : " << numberOfDoors << endl;
        cout << "Battery Capacity : " << batteryCapacity << " kWh" << endl;
    }
};


int main() {

    ElectricCar e1("Tesla", 200, 4, 75);

    e1.displayData();

    return 0;
}*/

/*#include <iostream>
using namespace std;

class Person {

protected:
    string name;
    int age;

public:

    Person(string n, int a) {

        name = n;
        age = a;

        cout << "Person Constructor Called!" << endl;
    }
};


class Student : public Person {

private:
    int rollNo;
    string course;

public:

    Student(string n, int a, int r, string c)
        : Person(n, a) {

        rollNo = r;
        course = c;

        cout << "Student Constructor Called!" << endl;
    }

    void display() {

        // Directly accessing protected members of Person
        cout << "\n------ STUDENT DETAILS ------" << endl;
        cout << "Name     : " << name << endl;
        cout << "Age      : " << age << endl;
        cout << "Roll No  : " << rollNo << endl;
        cout << "Course   : " << course << endl;
    }
};


int main() {

    Student s1("Utsav", 20, 235, "CSE");

    s1.display();

    return 0;
}*/

/*#include <iostream>
using namespace std;


class Person {

protected:
    string name;
    int age;

public:

    Person(string n, int a)
        : name(n), age(a) {

        cout << "Person Constructor Called!" << endl;
    }
};


class Employee : public Person {

protected:
    int employeeID;
    double basicSalary;

public:

    Employee(string n, int a, int id, double salary)
        : Person(n, a) {

        employeeID = id;
        basicSalary = salary;

        cout << "Employee Constructor Called!" << endl;
    }
};


class Manager : public Employee {

private:
    string department;
    double bonus;

public:

    Manager(string n, int a, int id, double salary,
            string dept, double b)
        : Employee(n, a, id, salary) {

        department = dept;
        bonus = b;

        cout << "Manager Constructor Called!" << endl;
    }

    void display() {

        double totalSalary = basicSalary + bonus;

        cout << "\n------ MANAGER DETAILS ------" << endl;
        cout << "Name          : " << name << endl;
        cout << "Age           : " << age << endl;
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "Department    : " << department << endl;
        cout << "Bonus         : " << bonus << endl;
        cout << "Total Salary  : " << totalSalary << endl;
    }
};


int main() {

    Manager m1(
        "Utsav",
        20,
        101,
        60000,
        "IT",
        15000
    );

    m1.display();

    return 0;
}*/

/*#include <iostream>
using namespace std;


class Vehicle {

public:

    void display() {

        cout << "This is a Vehicle" << endl;
    }
};


class Car : public Vehicle {

public:

    void display() {

        cout << "This is a Car" << endl;
    }
};


int main() {

    Vehicle v;
    Car c;

    cout << "Vehicle Object: ";
    v.display();

    cout << "Car Object: ";
    c.display();

    return 0;
}*/

#include <iostream>
using namespace std;

class Employee {

protected:
    string name;
    int employeeID;

public:

    Employee(string n, int id) {
        name = n;
        employeeID = id;

        cout << "Employee Constructor Called!" << endl;
    }
};


/*class FullTimeEmployee : public Employee {

private:
    double basicSalary;
    double HRA;
    double DA;

public:

    FullTimeEmployee(string n, int id, double salary, double h, double d)
        : Employee(n, id) {

        basicSalary = salary;
        HRA = h;
        DA = d;

        cout << "Full Time Employee Constructor Called!" << endl;
    }

    void display() {

        double grossSalary = basicSalary + HRA + DA;

        cout << "\n------ FULL TIME EMPLOYEE ------" << endl;
        cout << "Name          : " << name << endl;
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << HRA << endl;
        cout << "DA            : " << DA << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
    }
};


class PartTimeEmployee : public Employee {

private:
    int hoursWorked;
    double hourlyRate;

public:

    PartTimeEmployee(string n, int id, int hours, double rate)
        : Employee(n, id) {

        hoursWorked = hours;
        hourlyRate = rate;

        cout << "Part Time Employee Constructor Called!" << endl;
    }

    void display() {

        double salary = hoursWorked * hourlyRate;

        cout << "\n------ PART TIME EMPLOYEE ------" << endl;
        cout << "Name          : " << name << endl;
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Hours Worked  : " << hoursWorked << endl;
        cout << "Hourly Rate   : " << hourlyRate << endl;
        cout << "Salary        : " << salary << endl;
    }
};


int main() {

    FullTimeEmployee e1(
        "Utsav",
        101,
        60000,
        10000,
        5000
    );

    PartTimeEmployee e2(
        "Rahul",
        102,
        80,
        500
    );

    e1.display();
    e2.display();

    return 0;
}*/


#include <iostream>
using namespace std;

class BankAccount {

protected:
    int accountNumber;
    string holderName;
    double balance;

public:

    BankAccount(int accNo, string name, double bal) {

        accountNumber = accNo;
        holderName = name;
        balance = bal;

        cout << "Bank Account Constructor Called!" << endl;
    }

    void deposit(double amount) {

        if (amount <= 0) {
            cout << "Invalid Deposit Amount!" << endl;
        }
        else {
            balance += amount;
            cout << "Deposit Successful!" << endl;
        }
    }

    void withdraw(double amount) {

        if (amount <= 0) {
            cout << "Invalid Withdrawal Amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal Successful!" << endl;
        }
    }

    void displayBalance() {

        cout << "\n------ BANK ACCOUNT ------" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Holder Name    : " << holderName << endl;
        cout << "Balance        : " << balance << endl;
    }
};


class SavingsAccount : public BankAccount {

private:
    double interestRate;

public:

    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal) {

        interestRate = rate;

        cout << "Savings Account Constructor Called!" << endl;
    }

    void calculateInterest() {

        double interest = balance * interestRate / 100;

        balance += interest;

        cout << "Interest Added : " << interest << endl;
    }

    void displayAccount() {

        displayBalance();

        cout << "Interest Rate  : " << interestRate << "%" << endl;
    }
};


int main() {

    SavingsAccount s1(
        1001,
        "Utsav",
        50000,
        5
    );

    cout << "\nInitial Details:" << endl;
    s1.displayAccount();

    cout << "\nDepositing 10000..." << endl;
    s1.deposit(10000);

    cout << "\nWithdrawing 5000..." << endl;
    s1.withdraw(5000);

    cout << "\nCalculating Interest..." << endl;
    s1.calculateInterest();

    cout << "\nFinal Details:" << endl;
    s1.displayAccount();

    return 0;
}

