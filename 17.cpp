//17. Remove duplicates from a string.
#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string str) {
    string result = "";
    for (char ch : str) {
        if (result.find(ch) == string::npos) { // not found
            result += ch;
        }
    }
    return result;
}

int main() {
    string str = "programming";
    cout << removeDuplicates(str);
    return 0;
}
