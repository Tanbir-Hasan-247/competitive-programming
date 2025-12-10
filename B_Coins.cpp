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
    map<int, int> mp;

    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        if (s[1] == '>')
        {
            mp[s[0] - 'A']++;
        }
        else if (s[1] == '<')
        {
            mp[s[2] - 'A']++;
        }
    }

    if (mp[0] == mp[1] || mp[1] == mp[2] || mp[0] == mp[2])
    {
        cout << "Impossible" << endl;
        return;
    }

    vector<pair<int, char>> v;
    v.push_back({mp[0], 'A'});
    v.push_back({mp[1], 'B'});
    v.push_back({mp[2], 'C'});

    sortAsc(v);
    for (auto x : v)
    {
        cout << x.second;
    }
    cout << endl;
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
