#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> permutation(n);
        
        // Arrange numbers for maximum `|` and minimum reduction by `&`
        int even = n, odd = n - 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                permutation[i] = even;
                even -= 2;
            } else {
                permutation[i] = odd;
                odd -= 2;
            }
        }
        
        // Output the result
        int k = 0;
        for (int i = 0; i < n; i++) {
            if ((i + 1) % 2 != 0) {
                k &= permutation[i];
            } else {
                k |= permutation[i];
            }
        }
        cout << k << endl;
        for (int i = 0; i < n; i++) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
