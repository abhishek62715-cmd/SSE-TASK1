#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v = {5, 2, 4, 1,3};

    for (int i = 0; i < v.size() - 1; i++) {
        int minIndex = i;

        // Find the smallest value in the unsorted part
        for (int j = i + 1; j < v.size(); j++) {
            if (v[j] < v[minIndex]) {
                minIndex = j;
            }
        }

        // Put that smallest value at position i
        swap(v[i], v[minIndex]);
    }

    for (int value : v) {
        cout << value << " ";
    }

    return 0;
}