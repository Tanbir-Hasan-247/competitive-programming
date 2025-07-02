#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<ll> a(n), b(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        map<int, ll> mp;

        for (int i = 0; i < n; ++i)
        {
            ll rem = b[i] % m;
            mp[rem]++;
        }

        ll ans = 0;

        for (int i = 0; i < n; ++i)
        {
            ll req = (m - (a[i] % m)) % m;
            if (mp.find(req) != mp.end())
            {
                ans += mp[req];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
