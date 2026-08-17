#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = 7;

    int repeating = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                repeating = arr[i];
                break;
            }
        }

        if (repeating != -1)
            break;
    }

    if (repeating != -1)
        cout << "First repeating element: " << repeating;
    else
        cout << "No repeating element";

    return 0;
}