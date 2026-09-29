#include<iostream>
using namespace std;

float P,R,T,SI;

int main(){

    cout << "Enter the Principal Amount: ";
    cin >> P;
    cout<<"Enter Rate in %: ";
    cin>> R;
    cout<<"Enter time in yrs: ";
    cin >> T;

    SI=(P*R*T/100);

    cout << "SI: "<<SI << endl;

    return 0;

}