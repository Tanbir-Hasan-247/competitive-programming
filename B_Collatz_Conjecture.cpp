#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        while (k && x != 1)
        {
            ll ans = (x / y + 1) * y - x;
            ans = max(1ll, ans);
            ans = min(k, ans);
            x += ans;
            k -= ans;
            while (x % y == 0)
                x /= y;
        }
        cout << x + (k % (y - 1)) << "\n";
    }
    return 0;
}
