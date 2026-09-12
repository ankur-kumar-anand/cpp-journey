// Basically Bubble Sort in reverse direction: instead of making the largest element reach the end after each pass, we make the smallest element reach the beginning after each pass.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int n = 6;

    // Bubble Sort Reverse
    for (int i = 0; i < n - 1; i++) {

        // Start from the right and move towards the left
        for (int j = n - 1; j > i; j--) {

            // If left element is greater, swap
            if (arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
            }
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}