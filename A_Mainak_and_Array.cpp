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
        int ans = a[n - 1] - a[0];
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1)
                ans = max(ans, a[n - 1] - a[i]);
            if (i > 0)
                ans = max(ans, a[i] - a[0]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, a[i] - a[i + 1]);
        }

        cout << ans << '\n';
    }
}