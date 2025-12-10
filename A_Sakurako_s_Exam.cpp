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

void solve()
{
    int a, b;
    cin >> a >> b;

    int sum = a * 1 + b * 2;

    if (sum % 2 != 0)
    {
        cout << NO;
    }
    else
    {
        int sum1 = sum / 2;

        if (sum1 % 2 == 0 || (sum1 % 2 == 1 && a > 0))
        {
            cout << YES;
        }
        else
        {
            cout << NO;
        }
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
