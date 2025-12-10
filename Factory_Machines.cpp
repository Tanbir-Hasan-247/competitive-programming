#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    ll t;
    cin >> n >> t;
    vector<ll> k(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }

    auto ok = [&](ll time)
    {
        ll products = 0;
        for (int i = 0; i < n; i++)
        {
            products += (time / k[i]);
            if (products >= t)
                return true;
        }

        return false;
    };

    ll l = 0, r = 1e18, ans;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << "\n";

    return 0;
}