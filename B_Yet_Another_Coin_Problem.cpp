#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    mp[0] = 0;
    mp[1] = 1;
    mp[2] = 2;
    mp[3] = 1;
    mp[4] = 2;
    mp[5] = 3;
    mp[6] = 1;
    mp[7] = 2;
    mp[8] = 3;
    mp[9] = 2;
    mp[10] = 1;
    mp[11] = 2;
    mp[12] = 2;
    mp[13] = 2;
    mp[14] = 3;

    ll ans = n / 15;
    n %= 15;

    if (ans == 0)
    {
        cout << mp[n] << "\n";
    }
    else
    {
        ans += mp[n];

        if (n >= 5)
            ans = min(ans, (ans + 1 + mp[n - 5] - mp[n]));

        cout << ans << endl;
    }
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
