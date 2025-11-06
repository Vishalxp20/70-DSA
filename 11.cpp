// 11. Find the subarray with a given sum.
#include <bits/stdc++.h>
using namespace std;

void subarrayWithSum(vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = 0, currSum = 0;

    while (end < n) {
        currSum += arr[end];

        // Shrink the window if sum exceeds target
        while (currSum > target && start <= end) {
            currSum -= arr[start];
            start++;
        }

        // Check if sum found
        if (currSum == target) {
            cout << "Subarray found from index " << start << " to " << end << endl;
            return;
        }
        end++;
    }

    cout << "No subarray found with given sum." << endl;
}

int main() {
    vector<int> arr = {1, 4, 20, 3, 10, 5};
    int target = 33;

    subarrayWithSum(arr, target);
    return 0;
}
