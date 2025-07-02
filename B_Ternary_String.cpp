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
    string s;
    cin >> s;
    vector<pair<char, int>> v;
    for (auto ch : s)
    {
        if (v.empty() || ch != v.back().first)
        {
            v.push_back({ch, 1});
        }
        else
        {
            v.back().second++;
        }
    }

    if (v.size() < 3)
    {
        cout << "0"<<endl;
        return;
    }

    int ans = INT_MAX;
    for (int i = 0; i < v.size() - 2; i++)
    {
        set<char> ch;
        ch.insert(v[i].first);
        ch.insert(v[i + 1].first);
        ch.insert(v[i + 2].first);
        if (ch.size() == 3)
            ans = min(ans, 1 + v[i + 1].second + 1);
    }
    if(s.size()<ans)
    {
        cout<<"0"<<endl;
        return;
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
