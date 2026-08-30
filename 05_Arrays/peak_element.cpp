#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 4, 2};
    int n = 5;

    for(int i = 0; i < n; i++) {

        // First element
        if(i == 0 && arr[i] > arr[i + 1]) {
            cout << "Peak element = " << arr[i];
            break;
        }

        // Last element
        else if(i == n - 1 && arr[i] > arr[i - 1]) {
            cout << "Peak element = " << arr[i];
            break;
        }

        // Middle elements
        else if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            cout << "Peak element = " << arr[i];
            break;
        }
    }

    return 0;
}