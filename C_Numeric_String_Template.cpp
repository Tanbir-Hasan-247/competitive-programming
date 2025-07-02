#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;

        if (s.length() != n)
        {
            cout << NO;
            continue;
        }

        unordered_map<int, char> mp1;
        unordered_map<char, int> mp2;
        bool ok = true;

        for (int j = 0; j < n; ++j)
        {
            int num = a[j];
            char ch = s[j];

            if (mp1.count(num) && mp1[num] != ch)
            {
                ok = false;
                break;
            }
            if (mp2.count(ch) && mp2[ch] != num)
            {
                ok = false;
                break;
            }

            mp1[num] = ch;
            mp2[ch] = num;
        }

        if (ok)
        {
            cout << YES;
        }
        else
        {
            cout << NO;
        }
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
