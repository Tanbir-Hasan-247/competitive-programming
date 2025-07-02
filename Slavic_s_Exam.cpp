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
bool is_subsequence(const string &s, const string &t)
{
    int j = 0;
    for (char ch : s)
    {
        if (ch == t[j])
            j++;
        if (j == t.size())
            return true;
    }
    return j == t.size();
}

void solve()
{
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    string ss = s;

    int j = 0;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (j < m && (s[i] == t[j] || s[i] == '?'))
        {
            ss[i] = t[j];
            j++;
        }
        else if (ss[i] == '?')
        {
            ss[i] = 'a'; 
        }
    }

    if (j == m && is_subsequence(ss, t))
    {
        cout << YES;
        cout << ss << endl;
    }
    else
    {
        cout <<NO;
    }
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
