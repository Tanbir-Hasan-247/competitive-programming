/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 22:11:39 24/10/2025
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

vector<ll> fun(vector<int> &cnt, int n)
{
    vector<ll> sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + cnt[i];
    }
    return sum;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cnt[i + 1] = mp[i + 1];
    }

    vector<ll> sum = fun(cnt, n);

    int i = n;
    while (i >= 1)
    {
        ll mn = min((ll)n, (ll)(4 * i - 1));

        ll total = sum[mn];
        ll x = 0;
        x += (i <= n ? cnt[i] : 0);
        x += (2 * i <= n ? cnt[2 * i] : 0);
        x += (3 * i <= n ? cnt[3 * i] : 0);

        ll rec = total - x;
        if (rec <= k)
        {
            cout << i << endl;
            return;
        }
        i--;
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
