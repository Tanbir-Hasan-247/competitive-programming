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

        vector<ll> x(n), y(n), diff(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
        }

        for (int i = 0; i < n; i++)
        {
            diff[i] = y[i] - x[i];
        }

        sort(diff.begin(), diff.end());

        int l = 0, r = n - 1;
        int ans = 0;

        while (l < r)
        {
            if (diff[l] + diff[r] >= 0)
            {
                ans++;
                l++;
                r--;
            }
            else
            {
                l++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
