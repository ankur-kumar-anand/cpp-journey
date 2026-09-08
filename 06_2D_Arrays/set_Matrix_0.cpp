//set matrix zero : Leetcode 73

#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& arr) {
    int m = arr.size();
    int n = arr[0].size();

    vector<bool> row(m, false);
    vector<bool> col(n, false);

    // Find all rows and columns that contain zero
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (arr[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    // Set marked rows to zero
    for (int i = 0; i < m; i++) {
        if (row[i] == true) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = 0;
            }
        }
    }

    // Set marked columns to zero
    for (int j = 0; j < n; j++) {
        if (col[j] == true) {
            for (int i = 0; i < m; i++) {
                arr[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> arr = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original Matrix:\n";

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    setZeroes(arr);

    cout << "\nMatrix after setting zeroes:\n";

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//method 1: use an extra/copy matrix : Tc: (m*n)

/*class Solution {
public:
    void setZeroes(vector<vector<int>>& arr){
        vector<vector<int>> copy = arr;
        int m=arr.size(), n=arr[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(copy[i][j]==0){ 
                    //set ith row & jth col to 0
                    for(int col=0;col<n;col++){
                        arr[i][col]=0;
                    }
                    //set jth col to 0
                    for(int row=0;row<n;row++){
                        arr[row][j]=0;
                    }
                }
            }
        }
    }
}; - Ran but didn't gets submitted !*/

//method 2:creating extra row and column vector:
/*class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m=arr.size(), n=arr[0].size();
        vector<bool> row(m,false);
        vector<bool> col(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(row[i]==true) //set ith row of array to 0
                for(int j=0;j<n;j++){
                    arr[i][j]=0;
                }
            }
        }
         for(int j=0;i<n;j++){
            if(col[j]==true) //set jth row of array to 0
                for(int i=0;i<m;i++){
                    arr[i][j]=0;
                }
            }
        }
    }
};*/