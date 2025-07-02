#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    // ll sum = 0, t = k;
    // ll m = n - 1;
    // ll cnt = 0;
    // while (sum < x && t != 0)
    // {
    //     sum += a[m];
    //     cnt++;
    //     if (m == 0)
    //     {
    //         m = n - 1;
    //         t--;
    //     }
    //     else
    //         m--;
    // }
    ll sum = 0;
    ll cnt = 0;
    for (int i = 0; i < k; i++)
    {
        cnt += n;
        sum += s;
        if (sum >= x)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        if (sum - a[i] < x)
            break;
        sum -= a[i];
        cnt--;
    }

    if (sum >= x)
    {
        cout << k * n - cnt + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

// void solve()
// {
//     ll n, k, x;
//     cin >> n >> k >> x;
//     vector<ll> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     vector<ll> v;
//     for (ll i = 0; i < k; i++)
//         for (ll j = n - 1; j >= 0; j--)
//             v.push_back(a[j]);

//     vector<ll> prefix(v.size() + 1, 0);
//     for (ll i = 0; i < v.size(); i++)
//         prefix[i + 1] = prefix[i] + v[i];

//     ll l = 1, h = v.size(), res = -1;
//     while (l <= h)
//     {
//         ll m = (l + h) / 2;
//         if (prefix[m] >= x)
//         {
//             res = m;
//             h = m - 1;
//         }
//         else
//         {
//             l = m + 1;
//         }
//     }

//     if (res == -1)
//         cout << 0 << endl;
//     else
//         cout << k * n - res + 1 << endl;
// }

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
