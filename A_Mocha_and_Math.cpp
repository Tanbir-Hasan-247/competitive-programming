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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = a[0];
        for (int i = 1; i < n; i++)
        {
            res &= a[i];
        }
        cout << res << "\n";
    }
    return 0;
}