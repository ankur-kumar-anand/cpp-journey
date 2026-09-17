//Method 1 - Through selection sort.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = 6;
    int k = 3;

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the smallest element
        // in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Place the smallest element
        // at its correct position
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Kth smallest element
    cout << k << "th smallest element = "
         << arr[k - 1] << endl;

    return 0;
}