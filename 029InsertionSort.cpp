#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 4, 1, 3};

    for (int i = 1; i < numbers.size(); i++) {
        int current = numbers[i];
        int j = i - 1;

        // Shift larger numbers right to make room for current
        while (j >= 0 && numbers[j] > current) {
            numbers[j + 1] = numbers[j];
            j--;
        }

        numbers[j + 1] = current;
    }

    for (int number : numbers) {
        cout << number << " ";
    }

    return 0;
}