#include<iostream>
using namespace std;

/* int sum(int a , int b){
    int c;
    c = a+b;
    return c;
}
int main(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;

    cout<<"Enter second number:";
    cin>>b;

    cout<<"Sum of two Numbers is:"<<sum(a,b);

    return 0;

}*/

int factorial(int n){
    int i , f=1 ;
    for(i=1;i<=n;i++){
        f = f * i ;

    }
    return f;
}
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    cout<<"the factorial of "<<n<<" is "<<factorial(n);

    return 0;
}