#include<iostream>
using namespace std;

int main() {

    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a>b && a>c){
        cout << a << " is the largest no"<< endl;
    }

    else if (b>c){
            cout << b << " is the largest no"<< endl;
        }

    else{
        cout << c << " is the largest no"<< endl;
        }

    return 0;

}