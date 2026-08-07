/*
Problem: Missing Number (LeetCode 268)

Given an array containing n distinct numbers in the range [0, n],
find the only number that is missing from the array.

Example:
Input:
5
0 1 3 4 5

Output:
Missing Number = 2

Approach:
Brute Force (Nested Loops)

Time Complexity: O(n²)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

// Function to find the missing number
int missingNumber(vector<int>& nums) {

    int n = nums.size();

    // Check every number from 0 to n
    for (int i = 0; i <= n; i++) {

        bool flag = false;   // Assume i is not present

        // Search i in the array
        for (int ele : nums) {

            if (ele == i) {
                flag = true;
                break;
            }
        }

        // If i is not found, it is the missing number
        if (flag == false)
            return i;
    }

    return -1;   // This line should never execute for valid input : can also put 0 for that matter but -1 is more appropriate to indicate an error.
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