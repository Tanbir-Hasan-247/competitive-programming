/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 20:45:25 03/12/2025
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
ll zero = 0, odd = 0;

void fun(int n, int i, int k, string &s)
{
    int cnt = 0;
    for (int j = i; j < n; j += k)
    {
        cnt++;
    }
    zero += cnt / 2;
    (cnt % 2 == 1) ? odd++ : odd;
}

void solve()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    int zeros = 0;
    for (char c : s)
    {
        if (c == '0')
            zeros++;
    }

    zero = 0, odd = 0;
    for (int i = 0; i < k; i++)
    {
        fun(n, i, k, s);
    }

    cout << (zeros >= zero && zeros <= zero + odd ? "Yes" : "No") << endl;
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
