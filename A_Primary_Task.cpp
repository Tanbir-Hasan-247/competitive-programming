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

bool isImportantInteger(int a)
{
    string s = to_string(a);
    int len = s.length();

    for (int i = 1; i < len; ++i)
    {
        string fir = s.substr(0, i);
        string sec = s.substr(i);

        if (fir == "10")
        {
            if (sec[0] != '0' && sec != "1")
            {
                return true;
            }
        }
    }

    return false;
}

void solve()
{

    int a;
    cin >> a;

    if (isImportantInteger(a))
    {
        cout << YES;
    }
    else
    {
        cout << NO;
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
