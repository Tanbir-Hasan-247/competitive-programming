#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        ll q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                x++;
            }
            else
            {
                if (x >= k)
                {
                    ans += (ll)(x - k + 1) * (x - k + 2) / 2;
                }
                x = 0;
            }
        }

        if (x >= k)
        {
            ans += (ll)(x - k + 1) * (x - k + 2) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}
