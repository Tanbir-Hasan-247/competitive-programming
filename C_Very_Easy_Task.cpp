#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](int mid)
    {
        if (mid < min(x, y))
            return false;

        int cnt = 1;
        mid -= min(x, y);
        cnt += (mid / x) + (mid / y);

        return cnt >= n;
    };
    int l = 0, r = max(x, y) * n;

    while (l + 1 < r)
    {
        int mid = l + (r - l) / 2;

        if (ok(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    cout << r ;

    return 0;
}
