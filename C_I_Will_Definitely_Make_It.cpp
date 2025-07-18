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
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll cur_h = a[k - 1];
    ll maxH = *max_element(a.begin(), a.end());

    if (cur_h == maxH)
    {
        cout << "YES" << endl;
        return;
    }

    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= cur_h)
            st.insert(a[i]);
    }
    vector<ll> v(all(st));

    ll t1 = 0;

    for (int i = 0; i < v.size() - 1; i++)
    {
        ll x = v[i + 1] - v[i];
        ll t2 = t1 + x;

        if (t2 > v[i])
        {
            cout << "NO" << endl;
            return;
        }

        t1 = t2;
    }

    cout << "YES" << endl;
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