/*
Problem: Missing Number (LeetCode 268)

Given an array containing n distinct numbers in the range [0, n],
find the missing number.

Approach:
1. Sort the array.
2. Compare each index with its value.
3. If they are different, that index is the missing number.
4. If all indices match, then the missing number is n.

Example:
Input:
5
0 1 3 4 5

Output:
Missing Number = 2

Time Complexity: O(n log n)
Space Complexity: O(1)  // Ignoring the space used by the sorting algorithm
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the missing number
int missingNumber(vector<int>& nums) {

    int n = nums.size();

    // Sort the array
    sort(nums.begin(), nums.end());

    // Compare index with value
    for (int i = 0; i < n; i++) {

        if (i != nums[i]) {
            return i;
        }
    }

    // If every index matches, the missing number is n
    return n;
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = missingNumber(nums);

    cout << "\nMissing Number = " << result << endl;

    return 0;
}