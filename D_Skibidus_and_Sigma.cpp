#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n);
    vector<pair<ll, int>> sum(n);

    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        ll s = 0;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            s += x;
            v.pb(x);
        }

        sum[i] = {s, i};
        a[i] = v;
    }

    sort(allr(sum));
    vector<ll> b;

    for (auto x : sum)
    {
        for (int i=0;i<m;i++)
        {
            b.pb(a[x.second][i]);
        }
    }

    vector<ll> sum1(b.size());

    sum1[0] = b[0];

    for (int i = 1; i < b.size(); i++)
    {
        sum1[i] = sum1[i - 1] + b[i];
    }

    ll ans = 0;

    for (int i = 0; i < b.size(); i++)
    {
        ans += sum1[i];
    }

    cout << ans << endl;
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
