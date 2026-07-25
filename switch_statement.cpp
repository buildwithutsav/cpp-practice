#include <iostream>
using namespace std;
/* int main(){

    int no;
    cout<<"Enter a number:";
    cin>>no;

    switch(no){
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Invalid Input";

    }
return 0;    
}*/

int main(){
    cout<<"CALCULATOR "<<endl;
    int a, b, c;
    
    cout<<"INDEX OF OPERATIONS:"<<endl;
    cout<<"1. ADDITION"<<endl;
    cout<<"2. SUBTRACTION"<<endl;
    cout<<"3. MULTIPLICATION"<<endl;
    cout<<"4. DIVISION"<<endl;
    cout<<"Enter your choice:";
    cin>>c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    

    switch(c){
        case 1:
        cout<<"The sum is:"<<a+b;
                break;

                case 2:
        cout<<"The difference is:"<<a-b;
                break;

                case 3:
        cout<<"The product is:"<<a* b;
                break;

                case 4:
        cout<<"The quotient is:"<<a/b;
                break;

                default:
                cout<<"Invalid Input";



    }
    return 0;
}