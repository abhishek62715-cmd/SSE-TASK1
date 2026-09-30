#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& numbers, int low, int high) {
    int pivot = numbers[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (numbers[j] <= pivot) {
            i++;
            swap(numbers[i], numbers[j]);
        }
    }

    swap(numbers[i + 1], numbers[high]);
    return i + 1;
}

void quickSort(vector<int>& numbers, int low, int high) {
    if (low >= high) {
        return;
    }

    int pivotIndex = partition(numbers, low, high);
    quickSort(numbers, low, pivotIndex - 1);
    quickSort(numbers, pivotIndex + 1, high);
}

int main() {
    vector<int> numbers = {5, 2, 4, 1, 3};

    quickSort(numbers, 0, numbers.size() - 1);

    for (int number : numbers) {
        cout << number << " ";
    }

    return 0;
}