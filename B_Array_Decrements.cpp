#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool find(vector<ll> &a, vector<ll> &b, int n)
{
    vector<ll> c(n);
    ll x = INT64_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            return false;
        c[i] = a[i] - b[i];
        if (b[i] != 0)
            x = min(c[i], x);
    }
    for (int i = 0; i < n; i++)
    {
        if (c[i] < x && c[i] - x > 0)
        {
            return false;
        }
        if (c[i] > x)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        cout << (find(a, b, n) ? "YES\n" : "NO\n");
    }
}