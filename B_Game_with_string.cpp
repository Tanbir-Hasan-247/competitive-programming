#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sort(a) sort(a.begin(), a.end())
#define sortDis(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            ans++;
            s.erase(s.begin() + i - 1);
            s.erase(s.begin() + i - 1);
            i = max(0, i - 2);
        }
    }
    cout << ((ans % 2 == 0) ? NO : YES);
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