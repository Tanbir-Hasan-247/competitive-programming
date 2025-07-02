#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sort(a) sort(a.begin(), a.end())
#define sortDis(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n + 1), rotated(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    if (v[1] != n)
    {
        cout << "NO\n";
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        rotated[v[i]]++;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        rotated[i] += rotated[i + 1];
    }

    if (rotated == v)
        cout << YES;
    else
        cout << NO;
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