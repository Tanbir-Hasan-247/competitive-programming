/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 22:32:22 02/12/2025
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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < q; i++)
    {
        int c, l, r;
        cin >> c >> l >> r;
        --l;
        if (c == 1)
        {
            for (int j = l; j < r; j++)
            {
                a[j] = k;
            }
        }
        if (c == 2)
        {
            for (int j = l; j < r; j++)
            {
                b[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k && b[i] == 1)
        {
            a[i] = k + 1;
        }
        if (a[i] == 0)
        {
            a[i] = i % k;
        }
        cout << a[i] <<" ";
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
