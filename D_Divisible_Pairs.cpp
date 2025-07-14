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
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<pair<ll, ll>, int> mp;
    ll pairCount = 0;

    for (ll val : a)
    {
        ll first = (val % x + x) % x;
        ll second = (val % y + y) % y;

        ll prevFirst = (first == 0 ? 0 : x - first);
        ll prevSecond = second;

        pair<ll, ll> prevKey = {prevFirst, prevSecond};
        pairCount += mp[prevKey];

        pair<ll, ll> currKey = {first, second};
        mp[currKey]++;
    }

    cout << pairCount << endl;
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
