/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 22:40:50 30/10/2025
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
    int r, x, d, n;
    cin >> r >> x >> d >> n;
    string s;
    cin >> s;

    ll ans = 0;
    for (auto ch : s)
    {
        if (ch == '1')
        {
            ans++;
            if (r - d >= 0)
            {
                r -= d;
            }
            else
                r = 0;
        }
        else
        {
            if (r < x)
            {
                ans++;
                if (r - d >= 0)
                {
                    r -= d;
                }
                else
                    r = 0;
            }
        }
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
