#include <iostream>
using namespace std;

// Function to check whether a number is prime
bool isPrime(int n) {

    // Numbers less than 2 are not prime
    if (n < 2) {
        return false;
    }

    // Check divisibility from 2 to n-1
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a Prime Number." << endl;
    }
    else {
        cout << n << " is not a Prime Number." << endl;
    }

    return 0;
}