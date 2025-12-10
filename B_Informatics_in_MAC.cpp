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

    map<int, int> mp;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    if (mp[a[0]] == n)
    {
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << i << " " << i << endl;
        }
        return;
    }

    if (mp[0] == 0)
    {
        cout << 2 << endl;
        cout << 1 << " " << 1 << endl;
        cout << 2 << " " << n << endl;
        return;
    }

    int i = 0, x = 0;
    for (auto [key, val] : mp)
    {
        if (i != key)
        {
            x = i;
            break;
        }
        i++;
    }
    if (x == 0 && mp.count(0))
    {
        x = mp.size();
        while (mp.count(x))
            x++;
    }

    for (int i = 0; i < x; i++)
    {
        if (mp[i] == 0)
        {
            cout << -1 << endl;
            return;
        }
    }

    mp.clear();
    ll left = 0;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < x)
        {
            mp[a[i]] = 1;
        }
        if (mp.size() == x)
        {
            v.push_back({left + 1, i + 1});
            left = i + 1;
            mp.clear();
        }
    }
    v[v.size() - 1].second = n;

    if (v.size() < 2)
    {
        cout << -1 << endl;
        return;
    }

    cout << v.size() << endl;
    for (auto [l, r] : v)
    {
        cout << l << " " << r << endl;
    }
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
