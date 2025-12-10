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
    int n, r;
    cin >> n >> r;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0, x = 0;
    int i = 0;
    while (i < n && r >0)
    {

        if (a[i] % 2 != 0)
        {
            ans +=(2* (a[i] / 2));
            r -= (a[i] / 2);
            x++;
        }
        else
        {
            ans +=(2* (a[i] / 2));
            r -= a[i] / 2;
        }
        i++;
    }
    if (r > 0 && x > 0)
    {
        if (r > x)
            ans += x;
        else
            {
                ans+=(2*r-x);
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
