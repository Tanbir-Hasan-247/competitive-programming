#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main()
{
    int n, m, k;
    while ((cin >> n >> m >> k))
    {
        int ans = 0;
        for (int i = 0; i < m; i++)
            cin >> a[i];
        cin >> a[m];
        for (int i = 0; i < m; i++)
        {
            int p = a[i] ^ a[m], t = 0;
            while (p > 0)
            {
                if (p % 2 == 1)
                    t++;
                p /= 2;
            }
            if (t <= k)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}