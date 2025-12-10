#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; if(!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int xa = 0, xb = 0;
        for (int v : a) xa ^= v;
        for (int v : b) xb ^= v;

        if (xa == xb) {
            cout << "Tie\n";
            continue;
        }

        int D = xa ^ xb;
        // highest set bit index k
        int k = 31 - __builtin_clz(D); // D > 0 here

        int last = -1;
        for (int i = 0; i < n; ++i) {
            if ( ((a[i] ^ b[i]) >> k) & 1 ) last = i; // 0-based
        }
        // last should exist because D has bit k set
        if (last % 2 == 0) cout << "Ajisai\n"; // index 0 -> i=1 (odd) -> Ajisai
        else cout << "Mai\n";
    }
    return 0;
}
