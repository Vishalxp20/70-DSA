//14. Find the minimum number of jumps to reach array end.
#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return 0;        // already at the end
    if (arr[0] == 0) return -1;  // can't move anywhere

    int maxReach = arr[0];  // farthest we can reach
    int steps = arr[0];     // steps we can still take in current jump
    int jumps = 1;          // number of jumps made

    for (int i = 1; i < n; i++) {
        // If we’ve reached the end
        if (i == n - 1) return jumps;

        // update maxReach
        maxReach = max(maxReach, i + arr[i]);
        steps--; // using one step

        // If no steps left, we must jump
        if (steps == 0) {
            jumps++;

            // Check if current index is beyond maxReach
            if (i >= maxReach) return -1;

            // Reinitialize steps for next jump
            steps = maxReach - i;
        }
    }

    return -1; // not reachable
}

int main() {
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << "Minimum number of jumps = " << minJumps(arr) << endl;
    return 0;
}
