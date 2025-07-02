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
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // int x = 0;

    // for (int i = 1; i < n; i++)
    // {
    //     if (a[x] + b[x] <= a[i] + b[i])
    //     {
    //         x = i;
    //     }
    // }

    ll cost = -10e9;
    for (int i = 0; i < n; i++)
    {
        ll x = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                x += max(a[j], b[j]);
            }
        }
        x += (a[i] + b[i]);
        cost = max(cost, x);
    }

    cout << cost << endl;
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
