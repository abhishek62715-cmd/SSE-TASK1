#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter no of terms: ";
    cin>>n;

    int i=1;
    int num;
    int sum=0;

    while (i<=n){
        cin>> num;
        sum=sum+num;
        i++;
    }

    cout<<"Sum of the numbers is: "<<sum<<endl;

    return 0;
    
}