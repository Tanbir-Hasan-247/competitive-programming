/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 01:34:42 10/12/2025
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
    string s;
    cin >> s;

    vector<ll> a, b;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a.push_back(i);
        else
            b.push_back(i);
    }

    if (a.size() == 0 || b.size() == 0)
    {
        cout << 0 << endl;
        return;
    }

    int x = a.size() / 2;
    ll cnt = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        cnt += abs(a[x] - a[i]) - abs(x - i);
    }

    ll ans = cnt;
    cnt = 0;
    x = b.size() / 2;
    for (ll i = 0; i < b.size(); i++)
    {
        cnt += abs(b[x] - b[i]) - abs(x - i);
    }

    cout << min(ans, cnt) << endl;
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
