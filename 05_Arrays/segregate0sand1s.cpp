/*
Problem:
Segregate all 0s and 1s in an array using the "two-pointer technique".

Example:
Input:
8
1 0 1 0 1 1 0 0

Output:
0 0 0 0 1 1 1 1

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

void segregate0and1(vector<int>& arr) {

    int i = 0;
    int j = arr.size() - 1;

    while (i < j) {

        if (arr[i] == 0) {
            i++;
        }

        else if (arr[j] == 1) {
            j--;
        }

        else {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements (0 or 1):\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    segregate0and1(arr);

    cout << "\nArray after segregation:\n";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*Method-2: counting the number of 0s and 1s and then filling the array accordingly. This method is also known as the counting sort approach.

class solution{
    public:
      void segregate0and1(vector<int> &arr) {
          int zeros=0, ones=0;
          for(int i=0;i<arr.size();i++){
              if(arr[i]==0) zeros++;
              else ones++;
            }
          for(int i=0;i<zeros;i++){
              arr[i]=0;
            }
          for(int i=zeros;i<arr.size();i++){
              arr[i]=1;
            }
        }
};*/



/*Method-1: sorting the array and then printing it. This is not an efficient approach, with an time complexity of "O(nlogn)". This method is not recommended for this problem, but it is a valid approach."This is overkill for this problem.

class solution{
    public:
      void segregate0and1(vector<int> &arr) {
          sort(arr.begin(),arr.end());
      }
}*/