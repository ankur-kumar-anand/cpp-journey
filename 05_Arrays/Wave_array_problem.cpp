/*
Problem: Convert an Array into Wave Form

A wave array is an array where:
arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] ...

Approach:
Swap every pair of adjacent elements.

Example:
Input:
6
1 2 3 4 5 6

Output:
2 1 4 3 6 5

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

// Function to convert the array into wave form
void convertToWave(vector<int>& arr) {

    int n = arr.size();

    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    convertToWave(arr);

    cout << "\nWave Array:\n";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}