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

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mp[a[i][j]] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j + 1 < m && a[i][j] == a[i][j + 1])
                mp[a[i][j]] = 2;

            if (j - 1 >= 0 && a[i][j] == a[i][j - 1])
                mp[a[i][j]] = 2;

            if (i + 1 < n && a[i][j] == a[i + 1][j])
                mp[a[i][j]] = 2;

            if (i - 1 >= 0 && a[i][j] == a[i - 1][j])
                mp[a[i][j]] = 2;
        }
    }

    int ans = 0, mx = 0;
    for (auto x : mp)
    {
        ans += x.second;
        mx = max(mx, x.second);
    }
    cout << ans - mx << endl;
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
