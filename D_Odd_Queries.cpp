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
        ll sum[n];
        sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            sum[i] = 0;
            int x;
            cin >> x;
            sum[i] = sum[i - 1] + x;
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            ll i = sum[n] - (sum[r] - sum[l - 1]), j = k * (r - l + 1);
            if ((i + j) % 2 == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}
