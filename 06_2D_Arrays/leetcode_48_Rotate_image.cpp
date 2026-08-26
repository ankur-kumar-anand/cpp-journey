#include <iostream>
#include <vector>
using namespace std;

// Function to rotate the matrix 90 degrees clockwise
void rotate(vector<vector<int>>& arr) {

    int n = arr.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {

        int s = 0;
        int e = n - 1;

        while (s < e) {

            int temp = arr[i][s];
            arr[i][s] = arr[i][e];
            arr[i][e] = temp;

            s++;
            e--;
        }
    }
}

// Function to print the matrix
void printMatrix(vector<vector<int>>& arr) {

    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int n;

    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    printMatrix(arr);

    rotate(arr);

    cout << "\nMatrix after 90-degree clockwise rotation:\n";
    printMatrix(arr);

    return 0;
}

/*class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
    int n=arr.size();
    //Transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //Reverse each row
    for(int i=0;i<n;i++){
        //reverse(arr[i].begin(),arr[i].end());
        int s=0,e=n-1;
        while(s<e){
            int temp=arr[i][s];
            arr[i][s]=arr[i][e];
            arr[i][e]=temp;
            s++;
            e--;
        }
    }
}
};*/