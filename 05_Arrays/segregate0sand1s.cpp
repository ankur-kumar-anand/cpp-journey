/*
Problem:
Segregate all 0s and 1s in an array using the two-pointer technique.

Example:
Input:
8
1 0 1 0 1 1 0 0

Output:
0 0 0 0 1 1 1 1

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void segregate0and1(vector<int>& arr) {

    int i = 0;
    int j = arr.size() - 1;

    while (i < j) {

        if (arr[i] == 0) {
            i++;
        }

        else if (arr[j] == 1) {
            j--;
        }

        else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements (0 or 1):\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    segregate0and1(arr);

    cout << "\nArray after segregation:\n";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}