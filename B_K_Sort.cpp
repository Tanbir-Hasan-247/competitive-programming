#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sort(a) sort(a.begin(), a.end())
#define sortDis(a) sort(a.begin(), a.end(),greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> v;
    cin >> a[0];
    ll mx = a[0];

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];

        if (mx < a[i])
        {
            mx = a[i];
        }
        else
        {
            if (mx - a[i] != 0)
                v.push_back(mx - a[i]);
        }
    }
    // sort(v.begin(), v.end(),greater<int>());
    ll ans = 0;
    // while (!v.empty())
    // {

    //     ans += ((v.size() + 1) * v[v.size() - 1]);
    sort(v);
    int b = 0, x = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        ans += ((x + 1) * v[i]);
        b += v[i];
        if (i + 1 != v.size())
            v[i + 1] -= b;
        x--;
        // v[i] -= v[v.size() - 1];
    }
    //  //   sort(v.begin(), v.end());
    //     while (v[v.size() - 1] == 0)
    //     {
    //         v.pop_back();
    //     }
    // }
    cout << ans << "\n";
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
