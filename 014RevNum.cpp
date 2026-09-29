#include <iostream>
using namespace std;

int main() {

    int rev=0;
    int num;
    cin >> num;

    while (num!=0){
        int a = num%10;
        rev=rev*10+a;
        num=num/10;
    }

    cout << rev << endl;

    return 0;
    
}