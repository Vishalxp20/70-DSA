//6. Find the majority element (appears > n/2 times).
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0, candidate = -1;

    // Step 1: Find potential majority element
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = arr[i];
        if (arr[i] == candidate)
            count++;
        else
            count--;
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == candidate)
            count++;

    if (count > n / 2)
        cout << "Majority Element: " << candidate;
    else
        cout << "No Majority Element";

    return 0;
}
