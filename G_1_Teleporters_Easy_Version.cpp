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
        ll c;
        cin >> n >> c;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += (i + 1);
        }
        sort(a.begin(), a.end());
        ll ans = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] > c)
                break;
            sum += a[i];
            ans++;
        }
        cout << ans << "\n";
    }
}