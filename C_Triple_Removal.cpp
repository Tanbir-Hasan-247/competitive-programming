/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 19:16:51 21/11/2025
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
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<pair<int, int>> cnt(n + 1, {0, 0});
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            one++;
        else
            zero++;
        cnt[i + 1] = {one, zero};
    }

    vector<int> v(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            v[i + 1] = v[i] + 1;
        else
            v[i + 1] = v[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        // l--, r--;

        int ones = cnt[r].first - cnt[l - 1].first;
        int zeros = cnt[r].second - cnt[l - 1].second;

        if (ones % 3 || zeros % 3)
        {
            cout << -1 << endl;
            continue;
        }

        bool ok = true;
        // for (int i = l - 1; i < r - 1; i++)
        // {
        //     if (a[i] == a[i + 1])
        //     {
        //         cout << ones / 3 + zeros / 3 << endl;
        //         ok = false;
        //         break;
        //     }
        // }

        if (v[r - 1] - v[l - 1] == 0)
            cout << ones / 3 + zeros / 3 + 1 << endl;
        else
            cout << ones / 3 + zeros / 3 << endl;
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
