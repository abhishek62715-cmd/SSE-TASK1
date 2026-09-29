//FIBONACCI NUMBERS

#include<iostream>
using namespace std;

int main(){

    int a=0;
    int b=1;
    int c=1;
    int n;

    cout<<"Enter the no of fibonacci no.s u wanna print: ";
    cin>>n;

    cout<<a<<" "<<b<<" ";
    int i=3;

    while(i<=n){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
        i++;
    }

    return 0;
    
}