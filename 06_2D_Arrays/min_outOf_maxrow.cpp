//problem statement: Find the minimum element out of all the maximum elements of each row.

/*The logic is:
1.Find the maximum element of each row.
2.Compare those maximums.
3.Find the minimum among them.*/

/* Row 0 → maximum = 8
Row 1 → maximum = 9
Row 2 → maximum = 7
Minimum among 8, 9, 7 = 7 */

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[][4] = {{5,8,1,2}, {9,9,4,4}, {7,0,3,5}};

    int minMax = INT_MAX;

    for(int i = 0; i < 3; i++) {
        int rowMax = arr[i][0];

        for(int j = 0; j < 4; j++) {
            if(arr[i][j] > rowMax) {
                rowMax = arr[i][j];
            }
        }

        if(rowMax < minMax) {
            minMax = rowMax;
        }
    }

    cout << "Minimum among row maximums = " << minMax;

    return 0;
}