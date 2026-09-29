#include <iostream>
using namespace std;

int main() {

    int sum=0;
    int n;
    cin >> n;

    while (n!=0){

        int a;
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    cout << sum << endl;

    return 0;
    
}