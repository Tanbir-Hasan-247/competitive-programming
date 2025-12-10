/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 00:35:02 20/11/2025
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
    ll x, y, k;
    cin >> x >> y >> k;

    ll temp = 1e12;
    for (int i = 0; i < x; i++)
    {
        ll x = temp / y;
        temp -= x;
    }
    if (temp < k)
    {
        cout << -1 << endl;
        return;
    }

    ll l = 1, r = 1e12;

    while (l < r)
    {
        ll mid = (l + r) / 2;

        ll cur = mid;
        for (int i = 0; i < x; i++)
        {
            ll x = cur / y;
            cur -= x;
        }
        if (cur >= k)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << r << endl;
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
