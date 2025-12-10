#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll ans = -1;
        if (k > 2)
        {
            cout << 0 << "\n";
        }
        else if (k == 1)
        {
            ans = a[0];
            for (int i = 1; i < n; i++)
            {
                ans = min(ans, a[i] - a[i - 1]);
            }

            cout << ans << "\n";
        }
        else if (k == 2)
        {
            ll ans = a[0];
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    ll val = abs(a[j] - a[i]);

                    ans = min(ans, val);

                    int indx = -1;
                    int l = 0, h = n - 1;
                    while (l <= h)
                    {
                        int m = l + (h - l) / 2;
                        if (a[m] >= val)
                        {
                            indx = m;
                            h = m - 1;
                        }
                        else
                        {
                            l = m + 1;
                        }
                    }

                    if (indx == -1)
                    {
                        ans = min({ans, val - a[n - 1]});
                    }
                    else
                    {
                        ans = min(ans, a[indx] - val);
                    }

                    if (indx == 0)
                    {
                        ans = min(ans, a[0] - val);
                    }
                    else
                    {
                        ans = min(ans, abs(val - a[indx - 1]));
                    }
                }
            }

            cout << ans << "\n";
        }
    }
    return 0;
}