// CHECK FIBONACCI NO

#include <iostream>
using namespace std;

int main() {

    int i = 1;
    int num;

    cout << "enter the no: ";
    cin >> num;

    int a = 0;
    int b = 1;
    int c = 1;

    while (i <= num) {
        c = a + b;
        a = b;
        b = c;
        if (c == num) {
            cout << "true";
            return 0;
        }
        i++;

    }

    cout << "false";

    return 0;
    
}