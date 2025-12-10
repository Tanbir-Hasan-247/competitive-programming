/**
 * In the name of Allah, the Most Gracious, the Most Merciful.
 * Author : Tanbir Hasan
 * Time & Date : 18:07:05 08/12/2025
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
    int n, kr, kc, dr, dc;
    cin >> n >> kr >> kc >> dr >> dc;

    int ans = 0;

    if (kr < dr)
    {
        kr = 0;
        ans = dr;
    }
    else if (kr > dr)
    {
        kr = n;
        ans = max((n - dr), ans);
    }

    if (kc < dc)
    {
        kc = 0;
        ans = max(dc, ans);
    }
    else if (kc > dc)
    {
        kc = n;
        ans = max((n - dc), ans);
    }

    cout << ans << endl;
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