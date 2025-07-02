#include <iostream>
#include <vector>
using namespace std;

bool canMakeNonDecreasing(vector<int>& arr) {
    int n = arr.size();
    int changes = 0;

    // Check if the array is non-decreasing
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            // If there are more than one decreasing pair,
            // it's not possible to make the array non-decreasing
            if (changes == 1) return false;
            changes++;
            // Try to adjust the current element
            if (i == 1 || arr[i - 2] <= arr[i]) {
                arr[i - 1] = arr[i];
            } else {
                arr[i] = arr[i - 1];
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (canMakeNonDecreasing(arr)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
