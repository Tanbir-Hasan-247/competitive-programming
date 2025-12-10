/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 22:17:58 05/12/2025
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

bool isValidB(ll b, ll k, const vector<ll> &v)
{
    ll need = k / b;
    ll have = v.back() / b;
    if (need > have)
        return false;

    for (ll j = 1; j <= need; j++)
    {
        ll m = j * b;
        if (!binary_search(v.begin(), v.end(), m))
            return false;
    }
    return true;
}

void markCovered(ll b, const vector<ll> &v, vector<bool> &ok)
{
    for (ll m = b; m <= v.back(); m += b)
    {
        auto it = lower_bound(v.begin(), v.end(), m);
        if (it != v.end() && *it == m)
        {
            ok[it - v.begin()] = true;
        }
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    set<ll>st;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    vector<ll> v(st.begin(), st.end());
    int sz = v.size();

    vector<bool> ok(sz, false);

    vector<ll> ans;

    for (int i = 0; i < sz; i++)
    {
        if (ok[i])
            continue;

        ll b = v[i];

        if (!isValidB(b, k, v))
            continue;

        ans.push_back(b);
        markCovered(b, v, ok);
    }

    ll x=0;
    for (bool f : ok)
    {
        x+=(f?1:0);
    }

    if (x < sz)
    {
        cout << -1 << endl;
        return;
    }
    
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        if (i)
            cout << " ";
        cout << ans[i];
    }
    cout << endl;
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
