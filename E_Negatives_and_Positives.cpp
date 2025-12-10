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
        vector<ll> a(n);
        ll sum = 0;
        bool x = false;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                x = !x;
                a[i] = -a[i];
            }
            sum += a[i];
        }

        sort(a.begin(), a.end());

        if (x)
            sum -= 2 * a[0];

        cout << sum << "\n";
    }
    return 0;
}
