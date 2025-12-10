#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> pref(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = (a[i] + pref[i - 1]);
        }
        vector<ll> ans(q);
        vector<pair<ll, int>> k(q);
        for (int i = 0; i < q; i++)
        {
            cin >> k[i].first;
            k[i].second = i;
        }
        sort(k.begin(), k.end());
        int x = 0;
        for (int i = 0; i < q; i++)
        {
            while (true)
            {
                if (x == n || a[x + 1] > k[i].first)
                    break;
                x++;
            }
            ans[k[i].second] = pref[x];
        }

        for (int i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
