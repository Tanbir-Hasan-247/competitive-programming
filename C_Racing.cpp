#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

void solve() {
    int n;
    cin >> n;

    vector<int> d(n);
    for (int &x : d) cin >> x;

    vector<int> L(n), R(n);
    for (int i = 0; i < n; ++i) cin >> L[i] >> R[i];

    vector<long long> min_h(n + 1, 0), max_h(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        long long min_next = min_h[i];
        long long max_next = max_h[i];

        if (d[i] == 1) {
            min_next += 1;
            max_next += 1;
        } else if (d[i] == -1) {
            max_next += 1;
        }

        min_h[i + 1] = max((long long)L[i], min_next);
        max_h[i + 1] = min((long long)R[i], max_next);

        if (min_h[i + 1] > max_h[i + 1]) {
            cout << -1 << '\n';
            return;
        }
    }

    long long h = max_h[n];

    for (int i = n - 1; i >= 0; --i) {
        if (d[i] == -1) {
            
            if (h >= min_h[i] && h <= max_h[i]) {
                d[i] = 0;
            } else {
                d[i] = 1;
            }
        }
        h -= d[i];
        if (h < min_h[i] || h > max_h[i]) {
            cout << -1 << '\n';
            return;
        }
    }

    if (h != 0) {
        cout << -1 << '\n';
        return;
    }

    for (int x : d) cout << x << ' ';
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
