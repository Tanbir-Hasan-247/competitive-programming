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
        ll a[n];
        ll s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll b[33] = {0};
        for (int i = 0; i < n; i++)
        {
            ll x = a[i];
            int c = 0;
            while (x > 0)
            {
                x = x / 2;
                c++;
            }
            b[c]++;
        }
        for (int i = 0; i < 32; i++)
        {
            if (b[i] >= 2)
                s = s + (b[i] * (b[i] - 1) / 2);
        }
        cout << s << "\n";
    }
}