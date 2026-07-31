#include<iostream>
using namespace std;

/*int main(){
   int n;
   int *ptr;

   cout<<"Enter an integer:  ";
   cin>>n;

ptr = &n;

cout<<"The value of integer =  "<<*ptr<<endl;
cout<<"The address of integer =  "<<&ptr<<endl;
cout<<"The value of pointer integer =  "<<ptr<<endl;

return 0;
 
}*/

/*int main(){
int n,i;
cout<<"Enter the number of elements: ";
cin>>n;

vector<int>a(n);
for(i=0;i<n;i++){
    cout<<"Enter your "<< i <<" index value: ";   ;
    cin>>a[i];

}

int *ptr = a.data();

cout<<"First Element: "<< *ptr << endl;
cout<<"Second Element: "<< *(ptr + 1)<< endl;
cout<<"Third Element: "<< *(ptr + 2) << endl;

return 0;
}*/

int main(){
    int a,b;

    cout<<"Enter your First Value: ";
    cin>>a;

    cout<<"Enter your Second Value: ";
    cin>>b;

    int *ptr1 = &a;
    int *ptr2 = &b;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout<<"After Swapping"<<endl;
    cout<<"First Swapping = "<<a<<endl;
    cout<<"Second Number = "<<b<<endl;

    return 0;
}
