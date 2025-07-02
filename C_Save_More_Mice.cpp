#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll now = n;
        int ans = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (n - a[i] < now)
            {
                now -= (n - a[i]);
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
