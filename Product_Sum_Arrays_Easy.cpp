/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 21:20:36 03/12/2025
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

int dfs(ll n, ll cur, ll st, ll sum)
{
    if (sum > n)
        return 0;
    if (cur == 1)
        return 1;

    int ways = 0;

    if (cur >= st && sum + cur <= n)
    {
        ways++;
        if (ways == 3)
            return 3;
    }

    for (ll i = st; i <= cur / i; i++)
    {
        if (cur % i == 0)
        {
            ways += dfs(n, cur / i, i, sum + i);
            if (ways >= 3)
                return 3;
        }
    }

    return min(ways, 3);
}

void solve()
{
    ll n;
    cin >> n;
    if (n == 1 && (cout << 1 << endl))
        return;

    cout << dfs(n,n, 2, 0) << endl;
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
