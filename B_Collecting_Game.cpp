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
    int n;
    cin >> n;

    vector<ll> a(n);
    vector<pair<ll, ll>> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = {a[i], i};
    }

    sortAsc(b);

    vector<set<pair<ll, int>>> v;
    ll sum = 0;
    set<pair<ll, int>> currSet;

    for (int i = 0; i < n; i++)
    {
        sum += b[i].first;
        currSet.insert({i, b[i].second});

        if (i + 1 < n && sum < b[i + 1].first)
        {
            v.push_back(currSet);
            currSet.clear();
        }
    }
    v.push_back(currSet);

    vector<int> ans(n);
    for (auto st : v)
    {
        auto mx = *st.rbegin();
        // cout<<mx.first<<" "<<mx.second<<endl;
        for (auto [key, val] : st)
        {
            ans[val] = mx.first;
        }
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     ll x = mp[a[i]];

    //     int l = 0, r = n - 1, ans = -1;
    //     while (l <= r)
    //     {
    //         int m = l + (r - l) / 2;
    //         if (b[m] <= x)
    //         {
    //             ans = m;
    //             l = m + 1;
    //         }
    //         else
    //         {
    //             r = m - 1;
    //         }
    //     }

    //     cout << ans << " ";
    // }
    // cout << endl;
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
