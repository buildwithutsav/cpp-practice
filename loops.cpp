#include <iostream>
using namespace std;
/* int main(){

    int n, i, sum=0;
cout<<"Enter a number:";
cin>>n;

for(i=0;i<=n;i++){
    cout<<i<<endl;
    sum=sum+i;

}
cout<<"the sum of first "<<n<<" natural numbers is:"<<sum<<endl;

    return 0;
}*/

/* int main(){
    int n,i;

    for(i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<< n*i<<endl;

    }
    return 0;
}*/

/* int main(){
    int i,j,n;
    cout<<"Enter a number:";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;

        }
        cout<<endl;

    }
    return 0;
} */

int main(){
    int n, i , count=0;

    cout<<"Enter a number:";
    cin>>n;

    if(n<=1){
        cout<<n<<" is not a PRIME NUMBER";
    }
    else{

    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
            
        }
        
    }
    if(count==2){
        cout<<n<<" is a PRIME NUMBER";
    }
    else{
        cout<<n<<" is not a PRIME NUMBER";
    }
    return 0;
 }
}