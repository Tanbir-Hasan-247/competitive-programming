/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 11:24:53 09/12/2025
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
ll a, b;
vector<ll> ans;
bool ok = false;
map<ll, vector<ll>> mp;

void dfs(ll u)
{
    if (u < b)
        mp[u] = {u * 2, 10 * u + 1};
    ans.pb(u);
    for (auto x : mp[u])
    {
        if (x == b)
        {
            ok = true;
            ans.pb(x);
            return;
        }
        if (!ok)
            dfs(x);
    }

    if (!ok)
        ans.pop_back();
}
void solve()
{

    cin >> a >> b;

    dfs(a);

    if (!ok)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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
