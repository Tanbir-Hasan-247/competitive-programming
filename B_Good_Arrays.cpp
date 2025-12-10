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
        vector<ll> a(n), b(n);
        ll sum_a = 0, sum_b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum_a += a[i];
            if (a[i] == 1)
            {
                b[i] = 2;
            }
            else
            {
                b[i] = 1;
            }
            sum_b += b[i];
        }
        if (sum_b <= sum_a && n > 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}