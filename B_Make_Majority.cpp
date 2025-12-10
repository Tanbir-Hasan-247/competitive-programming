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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = "";

    for (int i = 0; i < n;)
    {
        if (s[i] == '0')
        {
            while (i < n)
            {
                if (s[i] == '1')
                {
                    break;
                }
                i++;
            }
            s1 += '0';
        }
        else
        {
            s1 += s[i];
            i++;
        }
    }

    int cnt1 = 0, cnt0 = 0;
    for (char c : s1)
    {
        if (c == '0')
            cnt0++;
        else
            cnt1++;
    }

    if (cnt0 >= cnt1)
    {
        cout << NO;
    }
    else
    {
        cout << YES;
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
