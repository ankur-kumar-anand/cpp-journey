#include <iostream>
#include <vector>
using namespace std;

// Function to find two numbers whose sum equals target
vector<int> twoSum(vector<int>& arr, int target) {
    vector<int> ans(2);

    int n = arr.size();
    int i = 0;
    int j = n - 1;

    while (i < j) {

        if (arr[i] + arr[j] > target) {
            j--;
        }
        else if (arr[i] + arr[j] < target) {
            i++;
        }
        else {
            ans[0] = i + 1;
            ans[1] = j + 1;
            break;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(arr, target);

    cout << "Indices: " << result[0] << " " << result[1] << endl;

    return 0;
}