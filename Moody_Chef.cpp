#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            if (l <= a[i] && r >= a[i])
            {
                z++;
                x = max(x, z);
            }
            else
            {
                z--;
                y = min(z, y);
            }
        }
        cout << x << " " << y << "\n";
    }
}