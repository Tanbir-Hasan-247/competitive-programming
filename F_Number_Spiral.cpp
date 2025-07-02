#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll y, x;
        cin >> y >> x;

        if (y > x)
        {
            ll ans = (y - 1) * (y - 1);
            ll add = 0;

            if (y % 2 != 0)
            {
                add = x;
            }
            else
            {
                add = 2 * y - x;
            }

            cout << ans + add << "\n";
        }
        else
        {
            ll ans = (x - 1) * (x - 1);
            ll add = 0;

            if (x % 2 == 0)
            {
                add = y;
            }
            else
            {
                add = 2 * x - y;
            }

            cout << ans + add << "\n";
        }
    }
    return 0;
}
