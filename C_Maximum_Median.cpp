#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    ll t;
    cin >> n >> t;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](ll x)
    {
        ll products = 0;
        for (int i = n / 2; i < n; i++)
        {
            if ((x - a[i]) > 0)
                products += (x - a[i]);
            if (products > t)
                return false;
        }

        if (products <= t)
            return true;
        else
            return false;
    };
    sort(a.begin(), a.end());
    ll l = 0, r = 1e18, ans;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans << "\n";

    return 0;
}