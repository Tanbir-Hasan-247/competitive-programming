#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDis(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    int n, s, m;
    cin >> n >> s >> m;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sortAsc(v);

    bool ok = false;

    if (v[0].first >= s)
    {
        ok = true;
    }

    for (int i = 1; i < n && !ok; i++)
    {
        if (v[i].first - v[i - 1].second >= s)
        {
            ok = true;
        }
    }

    if (m - v[n - 1].second >= s)
    {
        ok = true;
    }

    if (ok)
    {
        cout << YES;
    }
    else
    {
        cout << NO;
    }
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
