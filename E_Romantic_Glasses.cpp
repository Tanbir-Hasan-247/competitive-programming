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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        map<ll, ll> m;
        ll s = 0;
        m[0] = 1;
        bool x = false;
        for (int i = 0; i < n; ++i)
        {
            a[i] *= ((i % 2) ? -1 : 1);
            s += a[i];
            if (m[s])
            {
                x = true;
                break;
            }
            ++m[s];
        }
        cout << (x ? "YES\n" : "NO\n");
    }
    return 0;
}