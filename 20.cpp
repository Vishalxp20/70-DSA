//20. Compress a string (e.g., “aaabb” → “a3b2”).
#include <iostream>
#include <string>
using namespace std;

string compressString(string str) {
    string result = "";
    int n = str.length();

    for (int i = 0; i < n; i++) {
        int count = 1;

        // Count repeating characters
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        result += str[i];
        result += to_string(count);
    }

    return result;
}

int main() {
    string str = "aaabbccccd";
    cout << compressString(str);
    return 0;
}
