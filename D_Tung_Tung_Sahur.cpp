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
    string p, s;
    cin >> p >> s;

    vector<pair<char, int>> groupS, groupP;

    // Group s
    char current = s[0];
    int count = 1;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == current)
            count++;
        else
        {
            groupS.emplace_back(current, count);
            current = s[i];
            count = 1;
        }
    }
    groupS.emplace_back(current, count);

    // Group p
    current = p[0];
    count = 1;
    for (int i = 1; i < p.size(); ++i)
    {
        if (p[i] == current)
            count++;
        else
        {
            groupP.emplace_back(current, count);
            current = p[i];
            count = 1;
        }
    }
    groupP.emplace_back(current, count);

    if (groupP.size() != groupS.size())
    {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < groupP.size(); ++i)
    {
        if (groupP[i].first != groupS[i].first)
        {
            cout << "NO\n";
            return;
        }

        int pCount = groupP[i].second;
        int sCount = groupS[i].second;

        if (sCount < pCount || sCount > 2 * pCount)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
