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

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, int> mp;
    deque<ll> dq;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 1)
        {
            while (1)
            {
                ll v = dq.front();
                dq.pop_front();
                mp[v] = 0;
                if (a[i] == v)
                {
                    break;
                }
            }
        }
        dq.push_back(a[i]);
        mp[a[i]] = 1;
        int sz = dq.size();
        ans = max(ans, sz);
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    return 0;
}
