/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 16:51:04 09/12/2025
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define allr(a) a.rbegin(), a.rend()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"
vector <vector<int>> adj;
vector<bool> ok;
ll ans = 0;
vector<int> a;

void dfs(int u)
{
    ok[u] = true;

    a.pb(u);

    for (auto x : adj[u])
    {
        if (!ok[x])
        {
            dfs(x);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    adj.assign(n+1,{});
    ok.assign(n+1, false);

    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; i++)
    {
        int l, r, c;
        cin >> l >> r >> c;

        adj[l].pb(r);
        adj[r].pb(l);
        mp[{l, r}] = c;
    }

    dfs(1);

    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        int l = a[i];
        int r = a[(i + 1) % n];

        if (!mp.count({l, r}))
            ans1 += mp[{r, l}];

        if (!mp.count({r, l}))
            ans2 += mp[{l, r}];
    }

    cout << min(ans1, ans2) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }

    return 0;
}
