#include <iostream>
using namespace std;
/*int main(){
    int length = 15;
    int breadth = 10;

    int area = length * breadth;

    cout <<"the area of the rectangle is:"<<area;

    return 0;
}*/

/*int main(){
    int maths = 90;
    int physics = 80;
    int chemistry = 70;

    int total_marks = maths+physics+chemistry;

    float percentage = (total_marks/300.0)*100.0;

    cout<<"the total marks is:"<< total_marks<<endl;
    cout<<"Percentage is:"<<percentage<<endl;
    return 0;
}*/

int main(){
    int seconds = 7384;

    int hours = seconds/3600;
    int minutes = (seconds%3600)/60;
    int remaining_seconds = seconds%60;

    cout<< "hours is:"<<hours<<endl<<"minutes is:"<<minutes<<endl<<"seconds is:"<<remaining_seconds<<endl;
    
    return 0;
}