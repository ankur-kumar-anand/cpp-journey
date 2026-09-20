#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int intersectionCount(vector<int>& a, vector<int>& b) {
    unordered_set<int> elements;

    // Store all elements of first array
    for (int x : a) {
        elements.insert(x);
    }

    int count = 0;

    // Check which elements of second array
    // are also present in the first array
    for (int x : b) {
        if (elements.find(x) != elements.end()) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> a = {1, 2, 4, 3, 5, 6};
    vector<int> b = {3, 4, 5, 6, 7};

    int result = intersectionCount(a, b);

    cout << "Number of common elements = " << result << endl;

    return 0;
}