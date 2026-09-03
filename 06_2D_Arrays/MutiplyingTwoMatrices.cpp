#include <iostream>
#include <vector>
using namespace std;

// Function to multiply two square matrices
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& a,const  vector<vector<int>>& b) {
    int n = a.size();

    vector<vector<int>> result(n, vector<int>(n, 0));

    // Select each cell of the result matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Calculate the value of result[i][j]
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return result;
}

// Function to print a matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> a = {
        {7, 8},
        {2, 9}
    };

    vector<vector<int>> b = {
        {14, 5},
        {5, 18}
    };

    vector<vector<int>> result = multiplyMatrices(a, b);

    cout << "Matrix A:" << endl;
    printMatrix(a);

    cout << "\nMatrix B:" << endl;
    printMatrix(b);

    cout << "\nResult of Matrix Multiplication:" << endl;
    printMatrix(result);

    return 0;
}

/*class Solution {
  public:
    vector<vector<int>> multiplyMatrices(vector<vector<int>> &a,vector<vector<int>> &b) {
      int n=a.size();
          vector<vector<int>> res(n,vector<int>(n,0));
          for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                  //res[i][j]=summation(k-> 0 to n-1) a[i][k]*b[k][j];
                  for(int k=0;k<n;k++){
                      res[i][j]+=a[i][k]*b[k][j];
                    }
              }
          }
          return res;
    }
        
};*/