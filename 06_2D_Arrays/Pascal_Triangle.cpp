//Leetcode 118: "Pascal's Triangle"

#include <iostream>
#include <vector>
using namespace std;

// Generates Pascal's Triangle with the given number of rows
vector<vector<int>> generatePascalTriangle(int numRows) {
    vector<vector<int>> triangle;

    // Create each row with 1s
    for (int i = 0; i < numRows; i++) {
        triangle.push_back(vector<int>(i + 1, 1));
    }

    // Fill the middle elements
    for (int i = 2; i < numRows; i++) {
        for (int j = 1; j < i; j++) {
            triangle[i][j] =
                triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}

int main() {
    int numRows;

    cout << "Enter the number of rows: ";
    cin >> numRows;

    vector<vector<int>> triangle = generatePascalTriangle(numRows);

    cout << "\nPascal's Triangle:\n";

    for (const auto& row : triangle) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}

/*class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        // Create rows filled with 1s
        for(int i = 1; i <= numRows; i++) {
            ans.push_back(vector<int>(i, 1));
        }

        // Fill the middle elements
        for(int i = 2; i < ans.size(); i++) {
            for(int j = 1; j < ans[i].size() - 1; j++) {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }

        return ans;
    }
};*/