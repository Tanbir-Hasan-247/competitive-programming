#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

ll fun(ll x)
{
    return (x * (x + 1)) / 2;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll x = 0;

    if (n <= k)
    {
        x = fun(n);
    }
    else
    {
        x = fun(n) - fun(n - k);
    }

    if (x % 2 == 0)
    {
        cout << YES;
    }
    else
    {
        cout << NO;
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
