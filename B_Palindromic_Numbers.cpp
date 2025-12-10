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
    int len;
    cin >> len;
    string s;
    cin >> s;

    string t(s.size(), '_');
    if (s[0] != '9')
    {
        for (long p = 0; p < s.size(); p++)
        {
            t[p] = '0' + ('9' - s[p]);
        }
    }
    else
    {
        int carry(0);
        for (long p = s.size() - 1; p >= 0; p--)
        {
            int a = 1 - carry;
            int b = s[p] - '0';
            int diff = a - b;
            if (diff < 0)
            {
                carry = 1;
                diff += 10;
            }
            else
            {
                carry = 0;
            }
            t[p] = (char)(diff + '0');
        }
    }

    cout << t << endl;
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
