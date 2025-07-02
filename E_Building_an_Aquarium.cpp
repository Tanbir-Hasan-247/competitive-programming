#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        const ll N = 2e5 + 10;
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n); 
        ll r = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            r = max(r, a[i]);
        }
        r += x; 

        auto ok = [&](int mid)
        {
            ll sum = 0; 
            for (int i = 0; i < n; i++) 
            {
                if (a[i] >= mid)
                    continue;
                else
                    sum += mid - a[i];
            }

            return sum <= x;
        };

        ll l = 1; 
        while (l < r)
        {
            ll mid = l + (r - l + 1) / 2; 
            if (ok(mid))
                l = mid;
            else
                r = mid - 1;
        }

        cout << l << "\n";
    }

    return 0;
}
