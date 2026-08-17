//Moving negative nums of an array to left side:

#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, -2, 7, -5, 3, -1};
    int n = 6;

    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    cout << "Array after rearranging: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}