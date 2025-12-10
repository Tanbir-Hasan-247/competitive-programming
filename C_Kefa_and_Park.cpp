/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 23:08:58 08/12/2025
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

vector<int> a;
vector<vector<int>> adj;
vector<int> visited;

ll ans = 0;
int n, m;

void dfs(int u, int streak)
{
    visited[u] = 1;

    if (a[u] == 1)
        streak++;
    else
        streak = 0;

    if (streak > m)
        return;

    bool leaf = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            leaf = false;
            dfs(v, streak);
        }
    }

    if (leaf)
        ans++;
}

void solve()
{
    cin >> n >> m;
    a.assign(n + 1, 0);
    adj.assign(n + 1, vector<int>());
    visited.assign(n + 1, 0);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    dfs(1, 0);

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
