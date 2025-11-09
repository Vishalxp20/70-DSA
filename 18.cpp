//18. Check if two strings are anagrams.
#include <iostream>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length()) return false;

    int count[256] = {0};

    for (char c : s1) count[(unsigned char)c]++;
    for (char c : s2) count[(unsigned char)c]--;

    for (int i = 0; i < 256; i++)
        if (count[i] != 0)
            return false;

    return true;
}

int main() {
    cout << (areAnagrams("listen", "silent") ? "Anagrams" : "Not Anagrams");
    return 0;
}
