#include <iostream>
#include <vector>
using namespace std;

// Function to print a matrix in spiral order
vector<int> spiralOrder(vector<vector<int>>& arr) {
    vector<int> ans;

    int m = arr.size();
    int n = arr[0].size();

    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;

    while (minr <= maxr && minc <= maxc) {

        // Traverse the top row: left → right
        for (int j = minc; j <= maxc; j++) {
            ans.push_back(arr[minr][j]);
        }
        minr++;

        if (minr > maxr || minc > maxc)
            break;

        // Traverse the right column: top → bottom
        for (int i = minr; i <= maxr; i++) {
            ans.push_back(arr[i][maxc]);
        }
        maxc--;

        if (minr > maxr || minc > maxc)
            break;

        // Traverse the bottom row: right → left
        for (int j = maxc; j >= minc; j--) {
            ans.push_back(arr[maxr][j]);
        }
        maxr--;

        if (minr > maxr || minc > maxc)
            break;

        // Traverse the left column: bottom → top
        for (int i = maxr; i >= minr; i--) {
            ans.push_back(arr[i][minc]);
        }
        minc++;
    }

    return ans;
}

int main() {

    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<int> result = spiralOrder(arr);

    cout << "Spiral Order: ";

    for (int value : result) {
        cout << value << " ";
    }

    return 0;
}