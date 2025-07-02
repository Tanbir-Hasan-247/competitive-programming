#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    ll n, x;
    cin >> n >> x;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        mp[y]++;
    }

    for (auto it = mp.begin(); it != mp.end();)
    {
        ll key = it->first;
        ll count = it->second;

        if (count > 1)
        {
            // for (int i = 1; i < count; i++)
            // {
            //     mp[key + (i * x)]++;
            // }
            // mp[key] = 1;
            mp[key+x]+=mp[key]-1;
            mp[key]=1;
        }
        ++it; 
    }

   
    ll i = 0;
    for (auto [key, count] : mp)
    {
        if (key != i)
        {
            cout << i << endl;
            return;
        }
        i++;
    }
    cout << i << endl;
    
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
