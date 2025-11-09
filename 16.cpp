//15. Find leaders in an array.
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


//16. Count vowels and consonants in a string.
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str = "Hello World";
    int vowels = 0, consonants = 0;

    for (char ch : str) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels = " << vowels << ", Consonants = " << consonants;
    return 0;
}
