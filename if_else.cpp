#include <iostream>
using namespace std;
/*int main(){
    int a;
    cout<<"Enter a Number:";
    cin>>a;
    if(a<0){
        cout<<"the number is invalid";
    }

    else if(a%2==0){
        cout<<"the number is even";
         }
         else {
            cout<<"the number is odd";
         }

         return 0;

}*/

int main(){
    int a,b,c;
    int total_marks;
    float per;

    cout<<"Enter marks in maths, physics and chemistry:";
    cin>>a>>b>>c;

    total_marks=a+b+c;
    per = (total_marks/300.0)*100.0;

    cout<<"The total marks is :"<<total_marks<<endl;
    cout<<"PERCENTAGE IS:"<<per<<endl;

    if(per>=90){
        cout<<"GRADE A";
    }
    else if(per>=75 && per<90){
        cout<<"GRADE B";
    }
    else if(per>=60 && per<75){
        cout<<"GRADE C";
    }
    else if(per>=50 && per<60){
        cout<<"GRADE D";
    }
    else{
        cout<<"GRADE F";
    }

    return 0;
}
    
