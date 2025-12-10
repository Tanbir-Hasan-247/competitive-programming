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

void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;

    vector<vector<ll>> a(n, vector<ll>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }

    vector<pair<ll, ll>> v;
    pair<ll, ll> x;
    for (int i = 0; i < n; i++)
    {
        ll point = 0;
        ll penalty = 0;
        ll time = 0;
        sortAsc(a[i]);
        ll cnt = 0;

        for (auto val : a[i])
        {
            time += val;
            if (time <= h)
            {
                point++;
                cnt += val;
                penalty += cnt;
            }
            else
                break;
        }
        v.pb({point, penalty});

        if (i == 0)
        {
            x = {point, penalty};
        }
    }

    sort(v.begin(), v.end(), [](pair<ll, ll> a, pair<ll, ll> b)
         {
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second; });

    int ans = 0;

    for (auto val : v)
    {
        ans++;
        if (x.first == val.first && x.second == val.second)
        {
            cout << ans << endl;
            return;
        }
        // cout << "{" << val.first << " " << val.second << "}" << " ";
    }
    // cout << endl;
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
