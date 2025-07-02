#include <bits/stdc++.h>
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, vector<int>> mp;

    for (int i = 0; i < k; i++)
    {
        int b, c;
        cin >> b >> c;
        mp[b].push_back(c);
    }

    vector<ll> v;
    for (auto &vec : mp)
    {
        vector<int> &a = vec.second;
        sortDesc(a);

        ll total = 0;
        for (int val : a)
        {
            total += val;
        }
        v.push_back(total);
    }

    sortDesc(v);

    ll ans = 0;
    for (int i = 0; i < min(n, (int)v.size()); i++)
    {
        ans += v[i];
    }

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
