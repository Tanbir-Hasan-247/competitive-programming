#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    map<pair<int, int>, int> mp;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;

        mp[a[i]]++;
        if (a[i].first == a[i].second)
        {
            st.insert(a[i].first);
        }
    }

    vector<int> v(st.begin(), st.end());

    for (auto val : a)
    {
        int x = val.first, y = val.second;

        if (x == y && mp[{x, y}] > 1)
        {
            cout << 0;
            continue;
        }

        int cnt = upper_bound(v.begin(), v.end(), y) - lower_bound(v.begin(), v.end(), x);

        if (x != y && (y - x + 1 == cnt))
        {
            cout << 0;
            continue;
        }
        cout << 1;
    }
    cout << endl;
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
