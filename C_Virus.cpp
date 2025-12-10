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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(m);

    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(all(a));

    vector<ll> v;

    for (ll i = 1; i < m; i++)
    {
        v.pb(a[i] - a[i - 1] - 1);
    }

    v.pb(n + a[0] - a[m - 1] - 1);
    sort(allr(v));
    
    ll cnt = 0;
    ll c = 0;
    for (auto x : v)
    {
        x -= 2 * cnt;
        if (x == 1)
            c += 1;
        else if (x > 1)
            c += (x - 1);
        cnt += 2;
    }

    cout << n - c << endl;
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
