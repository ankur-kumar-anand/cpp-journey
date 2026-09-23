//Leetcode 2956 : Finding common elements between 2 arrays:

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    int count1 = 0;
    int count2 = 0;

    // Count elements of nums1 that exist in nums2
    for (int x : nums1) {
        if (set2.count(x)) {
            count1++;
        }
    }

    // Count elements of nums2 that exist in nums1
    for (int x : nums2) {
        if (set1.count(x)) {
            count2++;
        }
    }

    return {count1, count2};
}

int main() {
    vector<int> nums1 = {4, 3, 2, 3, 1};
    vector<int> nums2 = {2, 2, 5, 3, 6};

    vector<int> result = findIntersectionValues(nums1, nums2);

    cout << result[0] << " " << result[1];

    return 0;
}