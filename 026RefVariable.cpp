//REFERENCE VARIABLE
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=x;
    y++;

    cout<<x<<" "<<y<<endl;
    int &z =x;
    z++;
    cout<<x<<" "<<z<<endl;          // z is a ref variable,,  doesnt make extra space for variable.
    return 0;
}