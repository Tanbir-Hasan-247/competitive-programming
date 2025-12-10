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
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    vector<ll> v;
    bool ok = false;
    for (auto [key, val] : mp)
    {
        if (val >= k)
        {
            v.pb(key);
            ok = true;
        }
    }

    sort(all(v));

    if (!ok)
    {
        cout << -1 << endl;
        return;
    }

    ll l = -1, r = -1;
    pair<ll, ll> ans;
    ll mx = -1;

    for (int i = 0; i < v.size(); i++)
    {
        if (l == -1)
        {
            l = v[i];
            r = v[i];
            if (mx < r - l)
            {
                ans = {l, r};
                mx = r - l;
            }
            continue;
        }
        if (v[i] - 1 == v[i - 1])
        {
            r = v[i];
        }
        else
        {
            if (l != -1 && mx < r - l)
            {
                ans = {l, r};
                mx = r - l;
            }
            l = -1;
            r = -1;
            i--;
        }
    }
    if (l != -1 && mx < r - l)
    {
        ans = {l, r};
        mx = r - l;
    }

    cout << ans.first << " " << ans.second << endl;
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
