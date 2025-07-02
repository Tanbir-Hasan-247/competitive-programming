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
        vector<pair<ll, int>> a, b, c;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            c.push_back({x, i});
        }

        sort(a.begin(), a.end(), greater<pair<ll, int>>());
        sort(b.begin(), b.end(), greater<pair<ll, int>>());
        sort(c.begin(), c.end(), greater<pair<ll, int>>());

        ll ans = 0;
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                for (int k = 0; k <= 2; k++)
                {
                    if (a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second)
                    {
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
