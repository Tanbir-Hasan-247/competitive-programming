#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortV(a) sort(a.begin(), a.end())
#define sortDis(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(1 << i);
    }

    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    // sortDis(v);

    // int maxCoins = 0;
    // for (int i = 0; i < x; i++)
    // {
    //     maxCoins += v[i];
    // }
    // for (int i = x; i < n; i++)
    // {
    //     maxCoins -= v[i];
    // }

    // cout << maxCoins << endl;
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
