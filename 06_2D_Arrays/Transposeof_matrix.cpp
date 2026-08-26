#include <iostream>
using namespace std;

int main() {

    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    int arr[100][100];

    cout << "Enter the elements of the matrix:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Transpose
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    cout << "\nTranspose of the matrix:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


/*class Solution {
  public:
   vector<vector<int>> transpose(vector<vector<int>>& arr){
       int m=arr.size(), n=arr[0].size();

       for(int i=0;i<m;i++){
           for(int j=0;j<i;j++){
               swap(arr[i][j],arr[j][i]);
           }
       }
       return arr;
   }
};*/