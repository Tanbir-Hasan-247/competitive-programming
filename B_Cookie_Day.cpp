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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                ll mn = a[i] % k;
                ans = min(mn, ans);
            }
        }
        if (ans != INT_MAX)
        {
            cout << ans << "\n";
        }
        else
            cout << "-1\n";
    }
}