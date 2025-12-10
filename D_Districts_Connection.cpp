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
#define pb push_back
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    cin >> a[0];
    bool ok = true;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i - 1] != a[i])
        {
            ok = false;
        }
    }

    if (ok)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    vector<pair<int, int>> v;
    vector<int> b;

    for (int i = 1; i < n; i++)
    {
        if (a[0] != a[i])
        {
            v.pb({1, i + 1});
        }
        else
        {
            b.pb(i + 1);
        }
    }

    for (auto x : b)
    {
        v.pb({v.front().second, x});
    }

    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
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
