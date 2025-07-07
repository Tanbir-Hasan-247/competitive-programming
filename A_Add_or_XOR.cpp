#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"
const int MAX = 200;

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> dp(MAX + 1, -1);
    queue<int> q;

    dp[a] = 0;
    q.push(a);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        if (u + 1 <= MAX && (dp[u + 1] == -1 || dp[u + 1] > dp[u] + x))
        {
            dp[u + 1] = dp[u] + x;
            q.push(u + 1);
        }

        int v = u ^ 1;
        if (v <= MAX && (dp[v] == -1 || dp[v] > dp[u] + y))
        {
            dp[v] = dp[u] + y;
            q.push(v);
        }
    }

    cout << dp[b] << endl;
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
