#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;

    int a, b;
    cin >> a >> b;

    int k;
    cin >> k;

    if (k < min(a, b))
        cout << min(a, b) - 1 << endl;
    else if (k > max(a, b))
        cout << n - max(a, b) << endl;
    else
        cout << (max(a, b) - min(a, b)) / 2 << endl;
        
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
