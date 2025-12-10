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
    vector<int> a(n);
    // vector<set<int>> st;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // set<int> s;
    // s.insert(a[0]);
    // st.push_back(s);
    // s.clear();
    map<int, int> mp;
    mp[a[0]]++;
    map<int, int> mp1;
    int ans = 1;

    int sz = mp.size();

    for (int i = 1; i < n; i++)
    {
        mp1[a[i]] = 1;

        if (mp[a[i]])
        {
            mp[a[i]]--;
            sz--;
            if (!sz)
            {
                ans++;
                mp = mp1;
                sz = mp.size();
                mp1.clear();
            }
        }
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
