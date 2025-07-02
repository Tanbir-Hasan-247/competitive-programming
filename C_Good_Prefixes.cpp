#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0, mx = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] > mx)
            {
                mx = a[i];
            }
            if (sum == 2 * mx)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
