//Check if an Array is Sorted
//Given an array, determine whether it is sorted in ascending order.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool sorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Array is sorted.";
    else
        cout << "Array is not sorted.";

    return 0;
}