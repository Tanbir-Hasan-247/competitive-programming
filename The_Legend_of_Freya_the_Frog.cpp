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

int fun(int value, int k)
{
    if (value % k == 0)
    {
        return value / k;
    }
    else
    {
        return value / k + 1;
    }
}

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    int operation_x = fun(x, k);
    int operation_y = fun(y, k);

    if (operation_y >= operation_x)
    {
        cout << 2 * (operation_y) << endl;
    }
    else
    {
        cout << 2 * (operation_x)-1 << endl;
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
