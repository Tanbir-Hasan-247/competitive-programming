#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int digitSum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int x, y;
    cin >> x >> y;

    for (int n = 1; n <= 1e6; ++n) {  // Try numbers up to a reasonable limit
        if (digitSum(n) == x && digitSum(n + 1) == y) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
