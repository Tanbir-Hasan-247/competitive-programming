#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
            if (ans <= 0)
                ans = 0;
        }

        cout << ans << "\n";
    }
}