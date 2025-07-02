#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<ll> d(n + 2, 0);

    vector<ll> op_l(m + 1), op_r(m + 1), op_x(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> op_l[i] >> op_r[i] >> op_x[i];
    }

    vector<ll> d1(m + 2, 0);

    for (int i = 1; i <= k; i++)
    {
        int l, r;
        cin >> l >> r;
        d1[l]++;
        d1[r + 1]--;
    }

    for (int i = 1; i <= m; i++)
    {
        d1[i] += d1[i - 1];
    }

    for (int i = 1; i <= m; i++)
    {
        if (d1[i] > 0)
        {
            d[op_l[i]] += op_x[i] * d1[i];
            d[op_r[i] + 1] -= op_x[i] * d1[i];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] += d[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        a[i] += d[i];
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
