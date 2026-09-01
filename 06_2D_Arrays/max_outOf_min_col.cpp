#include <iostream>
using namespace std;

int main() {
    int arr[][4] = {
        {5, 8, 1, 2},
        {9, 9, 4, 4},
        {7, 0, 3, 5}
    };

    int maxMin = 0;

    for (int j = 0; j < 4; j++) {
        int min = arr[0][j];

        for (int i = 1; i < 3; i++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }

        if (min > maxMin) {
            maxMin = min;
        }
    }

    cout << "Maximum of column minimums is = " << maxMin;

    return 0;
}