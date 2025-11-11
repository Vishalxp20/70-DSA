//22. Implement strStr() (find substring index).
#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();

    if (m == 0) return 0;  // empty needle case

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j])
            j++;

        if (j == m)
            return i; // found substring
    }

    return -1; // not found
}

int main() {
    string haystack = "hello", needle = "ll";
    cout << strStr(haystack, needle);
    return 0;
}
