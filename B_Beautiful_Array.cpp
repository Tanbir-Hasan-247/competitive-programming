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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    vector<ll> a(n);

    // ll mn = k * b;
    // ll mx =  (k * b + (k - 1) * n);

    // if (s < mn || s < mx)
    // {
    //     cout << -1 << endl;
    //     return;
    // }

    if ((k * b) > s)
    {
        cout << -1 << endl;
        return;
    }
    if (s >= (k * b) + k - 1)
        a[0] = (k * b) + k - 1;
    else
        a[0] = (k * b);

    s -= a[0];
    for (int i = 1; i < n; i++)
    {
        if (s >= k - 1)
        {
            a[i] = k - 1;
            s -= (k - 1);
        }
        else
        {
            if (s < k - 1)
            {
                a[i] = s;
                s = 0;
            }
        }
    }

    if (s != 0)
    {
        cout << -1 << endl;
        return;
    }

    for (auto x : a)
    {
        cout << x << " ";
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
