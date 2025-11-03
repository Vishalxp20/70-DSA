//4. Find the intersection of two arrays.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first array: ";
    for(int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array: ";
    for(int i = 0; i < n2; i++)
        cin >> arr2[i];

    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    int i = 0, j = 0;
    cout << "Intersection elements: ";
    while(i < n1 && j < n2) {
        if(arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            i++; j++;
        }
        else if(arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
    return 0;
}


