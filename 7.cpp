// 7. Count pairs with a given sum.
#include <bits/stdc++.h>
using namespace std;

int countPairs(int arr[], int n, int k) {
    unordered_map<int, int> freq;  // stores frequency of elements
    int count = 0;

    for (int i = 0; i < n; i++) {
        int complement = k - arr[i];
        if (freq.find(complement) != freq.end()) {
            count += freq[complement];  // count all pairs that sum to k
        }
        freq[arr[i]]++;  // update frequency
    }

    return count;
}

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    cout << "Count of pairs = " << countPairs(arr, n, k) << endl;
    return 0;
}
