/*
Problem: Plus One (LeetCode 66)

given a large integer represented as an array of digits.
Increment the integer by one and return the resulting array.

Example:
Input:
3
1 2 3

Output:
1 2 4

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to add one to the number
vector<int> plusOne(vector<int>& digits) {

    vector<int> ans;
    int carry = 1;     // We need to add 1

    // Traverse from last digit to first
    for (int i = digits.size() - 1; i >= 0; i--) {

        int sum = digits[i] + carry;

        if (sum < 10) {
            carry = 0;
            ans.push_back(sum);
        }
        else {
            carry = 1;
            ans.push_back(0);
        }
    }

    // If carry still exists
    if (carry == 1)
        ans.push_back(1);

    // Reverse because digits were inserted from back to front
    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {

    int n;

    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> digits(n);

    cout << "Enter the digits:\n";

    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    vector<int> result = plusOne(digits);

    cout << "\nNumber after adding one:\n";

    for (int digit : result)
        cout << digit << " ";

    cout << endl;

    return 0;
}