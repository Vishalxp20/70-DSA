//19. Find the first non-repeating character in a string.
#include <iostream>
#include <string>
using namespace std;

char firstNonRepeatingChar(string str) {
    int freq[256] = {0};

    // Count frequency of each character
    for (char ch : str)
        freq[(unsigned char)ch]++;

    // Find first character with frequency 1
    for (char ch : str)
        if (freq[(unsigned char)ch] == 1)
            return ch;

    return '\0'; // No non-repeating character
}

int main() {
    string str = "swiss";
    char result = firstNonRepeatingChar(str);
    if (result)
        cout << "First non-repeating character: " << result;
    else
        cout << "No non-repeating character";
    return 0;
}
