//14. Find the minimum number of jumps to reach array end.
#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n) {
    if (n <= 1) return 0;
    if (arr[0] == 0) return -1;

    int jumps = 0, farthest = 0, currentEnd = 0;

    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + arr[i]);

        if (i == currentEnd) {
            jumps++;
            currentEnd = farthest;

            if (currentEnd >= n - 1)
                return jumps;
        }
    }

    return -1; // Not reachable
}

int main() {
    int arr[] = {2, 3, 1, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << minJumps(arr, n);
    return 0;
}
