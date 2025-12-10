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
    string s, ss;
    cin >> s >> ss;

    map<char, vector<int>> mp;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]].push_back(i);
    }

    reverse(ss.begin(), ss.end());

    int ok = INT_MAX;
    for (auto ch : ss)
    {
        if (mp[ch].empty())
        {
            cout << "NO" << endl;
            return;
        }
        if (ok < mp[ch].back())
        {
            cout << "NO" << endl;
            return;
        }

        ok = mp[ch].back();
        mp[ch].pop_back();
    }
    cout << "YES" << endl;
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
