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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    vector<int> b(m);
    vector<int> cnt(k + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] <= k)
        {
            cnt[a[i]] |= 1;
        }
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
        if (b[i] <= k)
        {
            cnt[b[i]] |= 2;
        }
    }

    vector<int> c(4, 0);
    for (int i = 0; i <= k; ++i)
    {
        c[cnt[i]]++;
    }

    if (c[1] > k / 2 || c[2] > k / 2 || c[1] + c[2] + c[3] != k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
