#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += max(abs(a[i] - 1), abs(a[i] - m));
        }
        cout << sum << "\n";
    }
}