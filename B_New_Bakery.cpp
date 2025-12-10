#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll ans = 0;
        ll k = min(b - a, n);
        k = max(k, ans);
        ll firstPart = k * (2LL * b - k + 1);
        ans = firstPart / 2;

        if (n - k > 0)
        {
            ans += (n - k) * a;
        }
        cout << ans << "\n";
    }
    return 0;
}
