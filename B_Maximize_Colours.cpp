#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());
        int ans = 0;

        for (int i = 0; i < 3; i++)
        {
            if (a[i] > 0)
            {
                ans++;
                a[i]--;
            }
        }

        if (a[0] > 0 && a[1] > 0)
        {
            ans++;
            a[0]--;
            a[1]--;
        }
        if (a[0] > 0 && a[2] > 0)
        {
            ans++;
            a[0]--;
            a[2]--;
        }
        if (a[1] > 0 && a[2] > 0)
        {
            ans++;
            a[1]--;
            a[2]--;
        }

        cout << ans << "\n";
    }
    return 0;
}