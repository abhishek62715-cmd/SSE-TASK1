#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=n-n/2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        for(int j=1;j<=m-i;j++){
            cout<<" ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout<<endl;
    }
    // int n = 9;
    // int m = n / 2 + 1;   // Middle row = 5

    // // Upper half (including middle)
    // int i = 1;
    // while (i <= m) {
    //     int space = 1;
    //     while (space <= m - i) {
    //         cout << " ";
    //         space++;
    //     }

    //     int star = 1;
    //     while (star <= 2 * i - 1) {
    //         cout << "*";
    //         star++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // // Lower half
    // i = m - 1;
    // while (i >= 1) {
    //     int space = 1;
    //     while (space <= m - i) {
    //         cout << " ";
    //         space++;
    //     }

    //     int star = 1;
    //     while (star <= 2 * i - 1) {
    //         cout << "*";
    //         star++;
    //     }

    //     cout << endl;
    //     i--;
    // }

    return 0;
}