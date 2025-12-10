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
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(all(a));

    vector<ll> v;
    for (ll i = 1; i < n; i++)
    {
        ll diff = a[i] - a[i - 1];
        if (diff > x)
        {
            ll needed = (diff + x - 1) / x - 1;
            v.pb(needed);
        }
    }

    sort(all(v));

    ll ans = 1 + v.size();
    for (ll need : v)
    {
        if (k >= need)
        {
            k -= need;
            ans--;
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    return 0;
}
