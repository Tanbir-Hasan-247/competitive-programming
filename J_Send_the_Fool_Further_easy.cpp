/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 18:26:47 09/12/2025
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
vector<vector<pair<int, int>>> adj;
vector<bool> ok;
ll ans = 0;
ll cnt = 0;
void dfs(int u)
{
    ok[u] = true;
    for (auto x : adj[u])
    {
        if (!ok[x.first])
        {
            cnt += x.second;
            dfs(x.first);
            cnt -= x.second;
        }
    }
    ans = max(ans, cnt);
}

void solve()
{
    int n;
    cin >> n;

    adj.assign(n, {});
    ok.assign(n, false);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;

        adj[u].pb({v, c});
        adj[v].pb({u, c});
    }

    dfs(0);

    cout << ans << endl;
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
