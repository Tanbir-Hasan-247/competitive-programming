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
    ll l, r;
    cin >> l >> r;

    ll diff = r - l;

    ll low = 0, high = 1e5;
    ll ans = 0;

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll sum = mid * (mid + 1) / 2;

        if (sum <= diff)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout<<ans+1<<endl;
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
