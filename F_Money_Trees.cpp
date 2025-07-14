#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n), h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    vector<ll> sum(n);
    sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }

    ll ans = 0;

    for (ll i = 0; i < n;)
    {
        ll l = i;
        ll r = i;
        while (r < n && (r == i || (h[r - 1] % h[r] == 0)))
        {
            ll curr_sum = sum[r] - (l > 0 ? sum[l - 1] : 0);
            while (curr_sum > k && l <= r)
            {
                l++;
                curr_sum = sum[r] - (l > 0 ? sum[l - 1] : 0);
            }
            if (curr_sum <= k)
                ans = max(ans, r - l + 1);
            r++;
        }
        if (r == i)
            i++;
        else
            i = r;
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
