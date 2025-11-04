//8. Rearrange positive and negative numbers alternately.


#include <bits/stdc++.h>
using namespace std;

void rearrangeAlternately(vector<int>& arr) {
    vector<int> pos, neg;

    // Separate positive and negative numbers
    for (int x : arr) {
        if (x >= 0) pos.push_back(x);
        else neg.push_back(x);
    }

    int i = 0, p = 0, n = 0;
    bool turnPos = true; // start with positive

    while (p < pos.size() && n < neg.size()) {
        if (turnPos) arr[i++] = pos[p++];
        else arr[i++] = neg[n++];
        turnPos = !turnPos;
    }

    // Append remaining elements (if any)
    while (p < pos.size()) arr[i++] = pos[p++];
    while (n < neg.size()) arr[i++] = neg[n++];
}

int main() {
    vector<int> arr = {1, 2, 3, -4, -1, 4};

    rearrangeAlternately(arr);

    cout << "Rearranged array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
