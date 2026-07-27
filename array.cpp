#include <iostream>
using namespace std;
/*int main(){
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
}*/

/* int main(){
    int n , i ;
    int arr[];

    cout<<"Enter number of elements : ";
    cin>>n;

    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    cout<<"OUTPUT:"

}*/

/*int main(){
    int n , i  ;
    

    cout<<"Enter number of elements:";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter elements";
    for (i=0;i<n;i++){
     
     cin>>arr[i];
     
    }
int largest = arr[0];

for(i=1;i<n;i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
}
cout<<"Output: Largest Element = "<< largest << endl;
return 0;

}*/

/*int main(){
    int n,i;
    cout<<"Enter number of Elements:";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter Elements";
    for(i=0;i<n;i++){
        cin>>arr[i];
        cout<<"Element on "<< i << " th index is "<< arr[i] << endl;

    }
    int largest = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int sec = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>sec && arr[i]<largest){
            sec = arr[i];

        }
    }
    cout<<"Second Largest Element is "<< sec;
    return 0;
}*/

int main(){
    int n ,i ;
    cout<<"ENTER NUMBER OF ELEMENTS:";
    cin>>n;

    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"REVERSED ARRAY: ";
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
}