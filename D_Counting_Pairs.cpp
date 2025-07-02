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
#define endl "\n"

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sortAsc(a);

    ll low = sum - y;
    ll high = sum - x;
    ll count = 0;

    for (int i = 0; i < n; ++i)
    {
        ll min_val = low - a[i];
        ll max_val = high - a[i];

        auto lo = lower_bound(a.begin() + i + 1, a.end(), min_val);
        auto hi = upper_bound(a.begin() + i + 1, a.end(), max_val);

        count += (hi - lo);
        // cout<<*hi<<" "<<*lo<<endl;
    }

    cout << count << endl;
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
