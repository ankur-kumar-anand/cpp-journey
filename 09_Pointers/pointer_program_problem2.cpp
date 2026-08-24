/*"Write a function to find the first and last digit of a number without returning anything."

#include <iostream>
using namespace std;

void firstLastDigit(int n) {
    int last = n % 10;   // Store the last digit

    while (n >= 10) {
        n = n / 10;      // Keep removing the last digit
    }

    int first = n;

    cout << "First digit = " << first << endl;
    cout << "Last digit = " << last << endl;
}

int main() {
    int n;
    cin >> n;

    firstLastDigit(n);

    return 0;
}*/

/*An improvement: (Handle negative numbers):
#include <iostream>
using namespace std;

void firstLastDigit(int n) {
    if (n < 0)
        n = -n;

    int last = n % 10;

    while (n >= 10) {
        n /= 10;
    }

    cout << "First digit = " << n << endl;
    cout << "Last digit = " << last << endl;
}

int main() {
    int n;
    cin >> n;

    firstLastDigit(n);

    return 0;
}*/

//"Write a function to find the first and last digit of a number without returning anything." - using pointers.
#include <iostream>
using namespace std;

void firstLastDigit(int n, int *first, int *last) {
    *last = n % 10;

    while (n >= 10) {
        n /= 10;
    }

    *first = n;
}

int main() {
    int n;
    cin >> n;

    int first, last;

    firstLastDigit(n, &first, &last);

    cout << "First = " << first << endl;
    cout << "Last = " << last << endl;

    return 0;
}