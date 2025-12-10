#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    ll c, d;
    cin >> n >> c >> d;
    vector<ll> s, v;
    ll mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            s.push_back(x);
            mini = min(x, mini);
        }
    }
    vector<vector<ll>> b(n, vector<ll>(n));
    b[0][0] = mini;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + 1 < n)
                b[i + 1][j] = b[i][j] + c;
            if (j + 1 < n)
                b[i][j + 1] = b[i][j] + d;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v.push_back(b[i][j]);
        }
    }
    sort(s.begin(), s.end());
    sort(v.begin(), v.end());
    for (int i = 0; i < n * n; i++)
    {
        if (s[i] != v[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
