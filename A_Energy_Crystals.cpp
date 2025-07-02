#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        // Compute floor(log2(x))
        int logx = 0;
        long long temp = x;
        while (temp > 1) {
            temp >>= 1;
            logx++;
        }

        // Check if x is a power of two
        if ((1LL << logx) < x) {
            logx++;
        }

        // The minimum number of actions is logx + 2
        cout << logx + 2 << endl;
    }
    return 0;
}
