#include <iostream>
using namespace std;
int main(){
    int i;
    int arr[4];

    for(i=0;i<5;i++){
        cout<<"Enter "<<i <<" th integer ";
        cin>>arr[i]; 
    }

    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;

    }
    return 0;
}