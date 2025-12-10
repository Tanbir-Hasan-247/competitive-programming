/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan (fixed)
 *   Time & Date : 18:16:03 30/11/2025 (fixed logic)
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

    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> mp;
    for (int x : a)
        mp[x]++;

    int odd = 0, cnt = 0;
    for (auto [key,val] : mp)
    {
        cnt++;
        if (val % 2 != 0)
            odd++;
    }
    int even = cnt - odd;
    int k = min(even, n);
    if (((n - k) % 2 == 1) && odd == 0)
        k = max(0, k - 1);

    int ans = odd + 2 * k;
    cout << ans << endl;
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
