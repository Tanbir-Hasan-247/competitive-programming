/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 19:23:58 07/12/2025
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
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 1 << endl;
        cout << a << endl;
        return;
    }

    // int x = a * 3;

    // cout << 3 << endl;
    // x -= b;

    // if ((x) % 2 != 0)
    //     cout << x / 2 << " " << b << " " << x / 2 + 1 << endl;
    // else
    //     cout << x / 2 << " " << b << " " << x / 2 << endl;

    cout << 3 << endl;

    cout << b << " " << b << " " << (3 * a) - (2 * b) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }

    return 0;
}
