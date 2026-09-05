#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (matrix[i][j] == target) {
                return true;
            }
        }
    }

    return false;
}

int main() {

    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int target;

    cout << "Enter target: ";
    cin >> target;

    bool result = searchMatrix(matrix, target);

    if (result) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}

//Method:2//
/*#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    // Start from the top-right corner
    int i = 0;
    int j = n - 1;

    while (i < m && j >= 0) {

        if (matrix[i][j] == target) {
            return true;
        }
        else if (matrix[i][j] > target) {
            // Current value is too large, move left
            j--;
        }
        else {
            // Current value is too small, move down
            i++;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int target;

    cout << "Enter target: ";
    cin >> target;

    if (searchMatrix(matrix, target)) {
        cout << "Target found" << endl;
    }
    else {
        cout << "Target not found" << endl;
    }

    return 0;
}*/

/*//Search a 2D matrix II : leetcode 240
class Solution{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int m=arr.size(), n=arr[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};*/