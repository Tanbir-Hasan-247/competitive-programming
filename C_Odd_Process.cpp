/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 21:25:54 11/12/2025
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

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> even, odd;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] % 2 ? odd.pb(a[i]) : even.pb(a[i]);
    }

    sort(allr(even));
    sort(allr(odd));

    int e = even.size();
    int o = odd.size();

    if (e == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << 0 << " ";
        }
        cout << endl;
        return;
    }
    else if (o == n)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                cout << 0 << " ";
            else
                cout << odd[0] << " ";
        }
        cout << endl;
        return;
    }

    vector<ll> sum(e + 1, 0);
    for (int i = 0; i < e; i++)
    {
        sum[i + 1] = sum[i] + even[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << odd[0] << " ";
            continue;
        }
        if (i < e)
            cout << sum[i + 1] + odd[0] << " ";
        else
            cout << sum[e] + odd[0] << " ";
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
