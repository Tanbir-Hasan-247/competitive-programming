#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> c(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> c[i];
    }

    int cnt = 0;

    for (int i = 0; i < (1 << n); i++)
    {
        int tot = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;

        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                tot += c[j];
                mn = min(mn, c[j]);
                mx = max(mx, c[j]);
            }
        }

        if (__builtin_popcount(i) >= 2 && tot >= l && tot <= r && (mx - mn) >= x)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
