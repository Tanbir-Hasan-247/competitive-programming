/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 14:32:40 06/12/2025
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
#define printAns(x)              \
    for (int i = 1; i <= n; i++) \
        cout << x[i] << " ";   \
    cout << endl;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n + 1);

    for (int i = 0; i <= n; i++)
    {
        if (i != r)
            a[i] = i;
        if (i == l - 1)
        {
            a[r] = a[i];
        }
    }

    vector<ll> ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ans[i] = a[i] ^ a[i - 1];
    }

    printAns(ans);
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
