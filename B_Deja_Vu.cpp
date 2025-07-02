#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ipow(ll base, ll exp)
{
    ll result = 1;
    while (exp)
    {
        if (exp & 1)
        {
            result *= base;
        }
        exp >>= 1;
        base *= base;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }
        vector<ll> B;
        for (int i = 0; i < m; ++i)
        {
            if (B.empty() || B.back() > b[i])
            {
                B.push_back(b[i]);
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (ll j : B)
            {
                if (a[i] % ipow(2, j) == 0)
                {
                    a[i] += ipow(2, j - 1);
                }
            }
        }
        for (ll i : a)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
