/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 00:35:38 22/11/2025
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

    vector<ll> a(n), b(m);
    map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        mp[b[i]]++;
    }

    sort(allr(a));
    set<int> s(all(b));
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (s.empty())
            break;

        auto it = s.upper_bound(a[i]);

        if (it != s.end())
        {
            ans += (a[i] + *it);
            mp[*it]--;
            if (mp[*it] == 0)
                s.erase(it);
        }
        else
        {
            auto it1 = s.lower_bound(a[i]);

            if (it1 == s.begin())
                continue;

            it1--;

            ans += (a[i] + *it1);
            mp[*it1]--;
            if (mp[*it1] == 0)
                s.erase(it1);
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
