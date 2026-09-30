#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    // Maximum sum of subarray
    // Prefix sum method

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = arr.size();

    vector<int> psum(n);
    psum[0] = arr[0];

    // Prefix sum calculation
    for (int i = 1; i < n; i++) {
        psum[i] = psum[i - 1] + arr[i];
    }

    int maxsofar = INT_MIN;

    // Find maximum subarray sum
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            int sum = (i == 0) ? psum[j] : psum[j] - psum[i - 1];

            maxsofar = max(maxsofar, sum);
        }
    }

    cout << "Maximum subarray sum = " << maxsofar << endl;

    // Time: O(n) prefix sum + O(n^2) subarrays = O(n^2)
    // Space: O(n)

    return 0;
}