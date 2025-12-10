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
#define pb push_back
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> v;

    for (ll i = 1; i < n; i++)
    {
        if (n % i == 0)
            v.pb(i);
    }

    vector<ll> sum(n);
    sum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }

    ll ans = 0;
    for (auto x : v)
    {
        ll mx = LONG_LONG_MIN, mn = LONG_LONG_MAX;
        for (int i = 0; i < n; i += x)
        {
            ll sum1 = sum[i + x - 1];
            if (i > 0)
                sum1 -= sum[i - 1];
            mx = max(mx, sum1);
            mn = min(mn, sum1);
        }
        ans = max(ans, abs(mx - mn));
    }

    cout << ans << endl;

    // for(auto x:a)
    // {
    //     cout<<x<<" ";
    // }
    // cout<< " kk"<<endl;
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
