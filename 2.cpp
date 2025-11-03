//2. Find the second largest element in an array.

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

    if (n < 2) {
        cout << "Array must have at least two elements.";
        return 0;
    }

    int first = arr[0];
    int second = -1e9; // a very small number

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -1e9)
        cout << "No second largest element (all elements are equal).";
    else
        cout << "Second largest element = " << second;

    return 0;
}
