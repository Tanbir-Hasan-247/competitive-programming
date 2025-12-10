/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 23:21:05 30/10/2025
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define allr(a) a.rbegin(), a.rend()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"
#define print(v)                            \
    for (int i = 0; i < (int)v.size(); i++) \
        cout << v[i] << " ";                \
    cout << endl;

void build(vector<ll> &v, deque<ll> &gt, deque<ll> &sm, ll &cur, ll x)
{
    if (gt.empty())
    {
        while (!sm.empty())
        {
            v.pb(sm.front());
            sm.pop_front();
        }
        return;
    }

    while (!sm.empty())
    {
        ll y = cur % x;
        if ((y + gt.front()) >= x)
            break;

        v.pb(sm.front());
        cur += sm.front();
        sm.pop_front();
    }

    v.pb(gt.front());
    cur += gt.front();
    gt.pop_front();

    // recurse
    build(v, gt, sm, cur, x);
}

void solve()
{
    ll n, x;
    cin >> n >> x;

    ll sum = 0;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll k = sum / x;

    sort(allr(a));

    ll ans = 0;
    for (int i = 0; i < k; i++)
        ans += a[i];

    deque<ll> gt, sm;
    for (int i = 0; i < n; i++)
    {
        if (i < k)
            gt.pb(a[i]);
        else
            sm.pb(a[i]);
    }

    ll cur = 0;
    vector<ll> v;
    build(v, gt, sm, cur, x);

    cout << ans << endl;
    print(v);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
