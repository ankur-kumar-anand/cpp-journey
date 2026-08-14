//Leetcode 1929 --> concatenation of two arrays:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 1};

    vector<int> ans;

    // First copy of nums
    for (int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]);
    }

    // Second copy of nums
    for (int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]);
    }

    // Print the concatenated array
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}