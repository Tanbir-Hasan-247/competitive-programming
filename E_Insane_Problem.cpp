#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long countValidPairs(int k, long long l1, long long r1, long long l2, long long r2) {
    long long count = 0;

    for (long long x = l1; x <= r1; x++) {
        long long multiple = x;
        int n = 0;

        // Keep multiplying x by powers of k while it's within the bounds
        while (multiple <= r2) {
            if (multiple >= l2) {
                count++;
            }
            // Check if multiplying by k again would exceed r2
            if (multiple > r2 / k) {
                break;
            }
            multiple *= k;
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false); // Fast input/output
    cin.tie(nullptr);

    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        int k;
        long long l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        // Call the function to get the number of valid pairs for each test case
        cout << countValidPairs(k, l1, r1, l2, r2) << endl;
    }

    return 0;
}
