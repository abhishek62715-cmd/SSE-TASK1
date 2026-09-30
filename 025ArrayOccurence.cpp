//ALL OCCURENCES
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int target;
    cin >> target;

    int arr[5] = {5, 5, 6, 7, 6};
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << target << " found at " << i << endl;
            count++;
        }
    }

    // OUTSIDE the for loop
    if (count == 0) {
        cout << target << " not found";
    }

    return 0;
}