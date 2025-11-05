//9. Sort an array of 0s, 1s, and 2s without extra space.
#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int>& arr) {
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++; mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {2, 0, 1, 2, 1, 0, 0, 2};
    sort012(arr);
    for (int x : arr) cout << x << " ";
    cout << "\n";
    return 0;
}
