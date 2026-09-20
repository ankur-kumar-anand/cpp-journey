#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find common elements in two arrays
vector<int> commonElements(vector<int>& a, vector<int>& b) {
    vector<int> ans;

    // Sort both arrays
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int m = a.size();
    int n = b.size();

    int i = 0;
    int j = 0;

    // Two-pointer approach
    while (i < m && j < n) {

        if (a[i] < b[j]) {
            i++;
        }
        else if (b[j] < a[i]) {
            j++;
        }
        else {
            // Common element found
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main() {

    vector<int> a = {3, 4, 2, 2, 4};
    vector<int> b = {3, 2, 2, 7};

    vector<int> result = commonElements(a, b);

    cout << "Common elements: ";

    for (int value : result) {
        cout << value << " ";
    }

    return 0;
}