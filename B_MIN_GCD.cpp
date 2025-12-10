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
    int n;
    cin >> n;

    vector<ll> a(n);
    map<pair<ll, ll>, ll> mp;
    ll mn = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }

    ll g = 0;
    sortAsc(a);
    for (int i = 1; i < n; i++)
    {
        if (a[i] % mn == 0)
            g = __gcd(g, a[i]);
    }

    // ll g = 0;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     g = __gcd(g, a[i]);
    //     if (mp[{i - 1, g}] > 0)
    //     {
    //         cout << "YES" << endl;
    //         return;
    //     }
    // }
    // cout << "NO" << endl;

    if (mn == g)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
