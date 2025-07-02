#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int count = 0;
        
        for (int i = l; i <= r; i++) {
            for (int j = i + 1; j <= r; j++) {
                for (int k = j + 1; k <= r; k++) {
                    if (__gcd(i, j) != 1 && __gcd(j, k) != 1 && __gcd(i, k) != 1) {
                        count++;
                        //i = j = k = r + 1;  // Exit loops once a valid triplet is found
                    }
                }
            }
        }
        
        cout << count << endl;
    }

    return 0;
}
