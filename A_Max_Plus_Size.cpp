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
    int n;
    cin >> n;

    vector<int> a(n);
    int mx1 = 0, mx2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (i % 2 == 0)
        {
            mx1 = max(mx1, a[i]);
        }
        else
        {
            mx2 = max(mx2, a[i]);
        }
    }

    cout << max(mx1 + (n + 1) / 2, mx2 + n / 2) << endl;
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
