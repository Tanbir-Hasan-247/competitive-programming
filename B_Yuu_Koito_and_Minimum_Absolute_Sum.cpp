/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 20:42:22 20/11/2025
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define allr(a) a.rbegin(), a.rend()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (a[0] == -1 && a[n - 1] == -1)
    {
        a[0] = 0;
        a[n - 1] = 0;
    }
    else if ((a[0] == -1 && a[n - 1] != -1) || (a[0] != -1 && a[n - 1] == -1))
    {
        int x = max(a[0], a[n - 1]);
        a[0] = x;
        a[n - 1] = x;
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] == -1)
            a[i] = 0;
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans += (a[i + 1] - a[i]);
    }

    cout << abs(ans) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
