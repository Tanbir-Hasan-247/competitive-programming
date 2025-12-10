/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 14:31:59 20/11/2025
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
    int n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m), c(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
        cin >> c[i];

    vector<pair<ll, ll>> without_z;
    vector<ll> with_z;

    for (int i = 0; i < m; i++)
    {
        if (c[i] == 0)
            with_z.pb(b[i]);
        else
            without_z.pb({b[i], c[i]});
    }

    sort(all(with_z));
    sort(all(without_z));
    sort(all(a));

    ll ans = 0;
    // ll mx = a[n - 1];
    // for (int i = 0; i < without_z.size(); i++)
    // {
    //     mx = a[n - 1];
    //     if (without_z[i].first <= mx)
    //     {
    //         ans++;
    //         a[n - 1] = max(mx, without_z[i].second);

    //     }
    //     else
    //         break;
    // }

    // int l = 0, r = with_z.size() - 1;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     l = 0;
    //     while (l <= r)
    //     {
    //         int mid = (l + r) / 2;
    //         if (with_z[mid] <= a[i])
    //         {
    //             if (mid == r || with_z[mid + 1] > a[i])
    //             {
    //                 ans++;
    //                 // a[i] = max(a[i], with_z[mid].second);
    //                 r = mid - 1;
    //                 break;
    //             }
    //             l = mid + 1;
    //         }
    //         else
    //         {
    //             r = mid - 1;
    //         }
    //     }
    // }

    multiset<ll> s(all(a));
    for (int i = 0; i < without_z.size(); i++)
    {
        auto it = s.lower_bound(without_z[i].first);
        if (it == s.end())
        {
            break;
        }
        else
        {
            ans++;
            s.erase(it);
            s.insert(max(*it, without_z[i].second));
        }
    }

    for (int i = 0; i < with_z.size(); i++)
    {
        auto it = s.lower_bound(with_z[i]);
        if (it == s.end())
            break;
        else
        {
            s.erase(it);
            ans++;
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
