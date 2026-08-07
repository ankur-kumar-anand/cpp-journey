/*
Problem: Missing Number (LeetCode 268)

Given an array containing n distinct numbers in the range [0, n],
find the missing number.

Approach:
1. Create a boolean vector of size n+1.
2. Initially mark every position as false.
3. Traverse the array and mark the visited numbers as true.
4. Traverse the boolean vector.
5. The first index whose value is false is the missing number.

Example:
Input:
5
0 1 3 4 5

Output:
Missing Number = 2

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>

using namespace std;

// Function to find the missing number
int missingNumber(vector<int>& nums) {

    int n = nums.size();

    // Boolean vector to mark visited numbers
    vector<bool> flag(n + 1, false);

    // Mark the numbers present in the array
    for (int i = 0; i < n; i++) {
        flag[nums[i]] = true;
    }

    // Find the first unmarked index
    for (int i = 0; i <= n; i++) {

        if (flag[i] == false)
            return i;
    }

    // Should never execute for valid input
    return -1;
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