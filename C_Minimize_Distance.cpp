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
        ll k;
        cin >> n >> k;
        vector<ll> na, po;
        ll mx = 0, mn = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x < 0)
            {
                na.push_back((x*-1));
            }
            else if (x > 0)
            {
                po.push_back(x);
            }
        }
        sort(na.begin(), na.end());
        sort(po.begin(), po.end());
        ll ans = 0;
        if (!po.empty())
        {
            if (po.size() < k)
            {
                mx = po[po.size() - 1];
                ans += mx;
            }
            else
            {
                mx = po[po.size() - 1];
                for (int i = 0; i < po.size(); i++)
                {
                    if (i == po.size() - 1)
                    {
                        ans += po[i];
                    }
                    else if ((po.size() - i - 1) % k == 0)
                    {
                        ans += po[i] * 2;
                    }
                }
            }
        }
        if (!na.empty())
        {
            if (na.size() < k)
            {
                mn = na[na.size() - 1];
                ans += mn;
            }
            else
            {
                mn = na[na.size() - 1];
                for (int i = 0; i < na.size(); i++)
                {
                    if (i == na.size() - 1)
                    {
                        ans += na[i];
                    }
                    else if ((na.size() - i - 1) % k == 0)
                    {
                        ans += na[i] * 2;
                    }
                }
            }
        }

        ans += min(mn, mx);
        cout << ans << "\n";
    }
}