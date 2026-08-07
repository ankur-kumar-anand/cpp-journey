/*
Problem:
Given an array of integers and a target value, find the indices of the two
numbers such that they add up to the target.

Example:
Input:
5 elements: 2 7 11 15
key=9

Output:
Indices: 0 1

Time Complexity: O(n²) //since it's brute force approach.
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

// Function to find two indices whose values add up to the target
vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> ans(2);

    for (int i = 0; i < nums.size(); i++) {

        for (int j = i + 1; j < nums.size(); j++) {

            if (nums[i] + nums[j] == target) {

                ans[0] = i;
                ans[1] = j;

                return ans;
            }
        }
    }

    return ans;
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;

    cout << "Enter target value: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    cout << "\nIndices are: "
         << result[0] << " " << result[1] << endl;

    cout << "Values are: "
         << nums[result[0]] << " + "
         << nums[result[1]] << " = "
         << target << endl;

    return 0;
}