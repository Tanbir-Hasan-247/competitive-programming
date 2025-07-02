#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(all(a));
    vector<ll> sum(n);
    sum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }

    // ll cnt = 0, ans = 0;

    // while (true)
    // {
    //     int l = 0, r = n - 1, idx = -1;

    //     while (l <= r)
    //     {
    //         int mid = (l + r) / 2;
    //         ll total = sum[mid] + (mid + 1) * cnt;

    //         if (total <= x)
    //         {
    //             idx = mid;
    //             l = mid + 1;
    //         }
    //         else
    //         {
    //             r = mid - 1;
    //         }
    //     }

    //     if (idx == -1)
    //         break;

    //     ans += (idx + 1);
    //     cnt++;
    // }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum[i] > x)
            break;

        ll days = (x - sum[i]) / (i + 1);
        ans += days + 1;
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
