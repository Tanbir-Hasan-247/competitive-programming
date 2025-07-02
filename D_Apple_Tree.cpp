#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> a;
vector<ll> cnt;
vector<bool> visited;

void dfs(int v, int p)
{
    if (a[v].size() == 1 && a[v][0] == p)
    {
        visited[v] = true;
        cnt[v] = 1;
    }
    else
    {
        for (auto u : a[v])
        {
            if (u != p && !visited[u])
            {
                dfs(u, v);
                cnt[v] += cnt[u];
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n;

        a.assign(n, vector<int>());
        visited.assign(n, false);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            a[u].push_back(v);
            a[v].push_back(u);
        }

        cnt.assign(n, 0);
        dfs(0, -1);

        cin >> q;
        for (int i = 0; i < q; i++)
        {
            int c, k;
            cin >> c >> k;
            c--;
            k--;

            ll res = cnt[c] * cnt[k];
            cout << res << '\n';
        }
    }

    return 0;
}
