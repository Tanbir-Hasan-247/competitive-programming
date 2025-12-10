#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i].first >> a[i].second;
        }

        int mx = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int xi = a[i].first;
                int yi = a[i].second;
                int xj = a[j].first;
                int yj = a[j].second;
                int cs = xi * yj + xj * yi;
                mx = max(mx, cs);
            }
        }

        cout << mx << "\n";
    }

    return 0;
}
