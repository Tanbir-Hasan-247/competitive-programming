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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            v[i] = abs(a[i + 1] - a[i]);
        }
        int ans = INT_MAX;
        if (n >= 2)
        {
            ans = min(ans, v[0]);
        }
        if (n >= 2)
        {
            ans = min(ans, v[n - 2]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int mx = max(v[i + 1], v[i]);
            ans = min(ans, mx);
        }

        cout << ans << "\n";
    }
    return 0;
}