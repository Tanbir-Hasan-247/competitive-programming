#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        int n;
        cin >> a >> b >> n;
        ll ans = b;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ans += min(a, x);
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}