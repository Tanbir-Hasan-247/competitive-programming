/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 18:38:46 06/12/2025
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

vector<vector<int>> adj;
vector<bool> ok;

void bfs(int st)
{
    if (ok[st])
        return;

    queue<int> q;
    ok[st] = true;
    q.push(st);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (!ok[v])
            {
                ok[v] = true;
                q.push(v);
            }
        }
    }
}

void solve()
{
    int type, v;
    cin >> type >> v;

    if (type == 1)
    {
        bfs(v);
    }
    else
    {
        if (ok[v])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);
    ok.assign(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[v].pb(u);
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
