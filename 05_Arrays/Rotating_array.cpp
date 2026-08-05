//Leetcode-189: rotating an array: 

#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int i, int j) {
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void rotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;

    rotate(arr, k);

    for (int x : arr)
        cout << x << " ";

    return 0;
}