#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b) {
    vector<int> ans;

    int m = a.size();
    int n = b.size();

    int i = 0;
    int j = 0;

    while (i < m && j < n) {

        if (a[i] < b[j]) {
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
        }
        else if (b[j] < a[i]) {
            if (ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }
            j++;
        }
        else {
            // Same element in both arrays
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    // Remaining elements of a
    while (i < m) {
        if (ans.empty() || ans.back() != a[i]) {
            ans.push_back(a[i]);
        }
        i++;
    }

    // Remaining elements of b
    while (j < n) {
        if (ans.empty() || ans.back() != b[j]) {
            ans.push_back(b[j]);
        }
        j++;
    }

    return ans;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 3, 3, 5, 6};

    vector<int> result = findUnion(a, b);

    cout << "Union: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}