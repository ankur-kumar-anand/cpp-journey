// Missing Element Method
// Find the missing number in a vector containing numbers from 1 to n.

#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& nums, int n)
{
    // Calculate the sum of numbers from 1 to n
    int requiredSum = n * (n + 1) / 2;

    // Calculate the sum of elements present in the vector
    int actualSum = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        actualSum += nums[i];
    }

    // Difference is the missing number
    return requiredSum - actualSum;
}

int main()
{
    vector<int> nums = {1, 2, 3, 5, 6};

    int n = 6;

    int missing = findMissingNumber(nums, n);

    cout << "Missing number: " << missing << endl;

    return 0;
}