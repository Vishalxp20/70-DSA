//25. Group words that are anagrams.

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string s : strs) {
        string temp = s;
        sort(temp.begin(), temp.end()); // signature
        mp[temp].push_back(s);
    }

    vector<vector<string>> result;
    for (auto x : mp) result.push_back(x.second);

    return result;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans = groupAnagrams(strs);

    for (auto group : ans) {
        for (auto w : group) cout << w << " ";
        cout << endl;
    }
}
