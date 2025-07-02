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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = {a[i], b[i]};
    }

    sortAsc(v);

    int cnt = 0;
    ll sum = -1, mn = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second != -1)
        {
            sum = v[i].second + v[i].first;
        }
        else
        {
            cnt++;
            mn = min(mn, v[i].first);
        }
    }

    if (cnt == n)
    {
        ll base = v[n - 1].first - mn;
        if (base <= k)
        {
            cout << (k - base + 1) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > sum)
        {
            cout << 0 << endl;
            return;
        }
        if (b[i] != -1)
        {
            if (a[i] + b[i] != sum)
            {
                cout << 0 << endl;
                return;
            }
        }
    }

    ll y = sum - mn;
    if (y <= k)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
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
