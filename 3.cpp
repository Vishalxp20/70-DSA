// 4.Rotate an array by k positions

#include <iostream>
#include <algorithm> // for reverse()
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n; // handle cases where k > n

    // Step 1: Reverse the entire array
    reverse(arr, arr + n);

    // Step 2: Reverse first k elements
    reverse(arr, arr + k);

    // Step 3: Reverse remaining n-k elements
    reverse(arr + k, arr + n);
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter k (positions to rotate): ";
    cin >> k;

    rotateArray(arr, n, k);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
