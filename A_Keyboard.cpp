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
    char ch;
    cin >> ch;
    string s;
    cin >> s;
    char keyboard[3][10] = {
        {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
        {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'},
        {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};

    map<char, pair<int, int>> mp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mp[keyboard[i][j]] = {i, j};
        }
    }

    string ans = "";
    if (ch == 'R')
    {
        for (auto c : s)
        {
            auto x = mp[c];
            ans += keyboard[x.first][x.second - 1];
        }
    }
    else
    {
        for (auto c : s)
        {
            auto x = mp[c];
            ans += keyboard[x.first][x.second + 1];
        }
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
