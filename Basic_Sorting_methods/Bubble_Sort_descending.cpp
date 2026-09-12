#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int n = 6;

    // Bubble Sort - Descending Order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {

            // Swap if left element is smaller
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Array in descending order: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}