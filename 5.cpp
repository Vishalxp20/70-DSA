// 5. Find the union of two arrays.
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    set<int> uni;
    for (int i = 0; i < n1; i++)
        uni.insert(arr1[i]);
    for (int i = 0; i < n2; i++)
        uni.insert(arr2[i]);

    cout << "Union elements: ";
    for (int x : uni)
        cout << x << " ";
    
    return 0;
}
