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
        int n;
        ll l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int ans = 0;
        ll sum = 0;
        int j = 0;

        for (int i = 0; i < n; ++i)
        {
            sum += a[i];

            while (sum > r && j <= i)
            {
                sum -= a[j];
                j++;
            }

            if (sum >= l && sum <= r)
            {
                ans++;
                sum = 0;
                j = i + 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
