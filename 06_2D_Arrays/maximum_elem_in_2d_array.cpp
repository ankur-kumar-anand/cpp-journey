#include <iostream>
using namespace std;

int main() {

    int arr[3][4] = {
        {10, 25, 7, 18},
        {42, 15, 9, 30},
        {12, 50, 21, 5}
    };

    int maximum = arr[0][0];

    // Traverse the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {

            if (arr[i][j] > maximum) {
                maximum = arr[i][j];
            }
        }
    }

    cout << "Maximum element = " << maximum << endl;

    return 0;
}