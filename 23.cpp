//23. Find all permutations of a string.
#include <bits/stdc++.h>
using namespace std;

void permute(string s, int l, int r) {
    if (l == r) {
        cout << s << " ";
        return;
    }

    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);            // fix one character
        permute(s, l + 1, r);        // recurse for the rest
        swap(s[l], s[i]);            // backtrack
    }
}

int main() {
    string str = "abc";
    permute(str, 0, str.size() - 1);
    return 0;
}
