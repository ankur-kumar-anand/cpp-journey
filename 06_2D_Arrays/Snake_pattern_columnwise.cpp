#include <iostream>
using namespace std;

int main() {

    int arr[][5] = {
        {6, 0, 9, 2, 3},
        {5, 2, 6, 0, 9},
        {8, 4, 8, 1, 7},
        {4, 1, 7, 3, 5}
    };

    int rows = 4;
    int cols = 5;

    for (int j = 0; j < cols; j++) {

        if (j % 2 == 0) {
            // Even column: bottom to top
            for (int i = rows - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            // Odd column: top to bottom
            for (int i = 0; i < rows; i++) {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}