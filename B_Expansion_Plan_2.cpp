/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 15:55:29 23/11/2025
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
    ll n, x, y;
    cin >> n >> x >> y;

    string s;
    cin >> s;
    int cnt4 = 0, cnt8 = 0;
    for (char c : s)
    {
        if (c == '4')
            cnt4++;
        else if (c == '8')
            cnt8++;
    }

    ll a = (x < 0) ? -x : x;
    ll b = (y < 0) ? -y : y;
    ll m = (a + b) - min(min(a, b), (ll)cnt8);

    cout << (m <= n ? "YES" : "NO") << endl;
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
