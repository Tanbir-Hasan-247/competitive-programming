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
    string s;
    cin >> s;
    int r = sqrt(n);
    if (r * r != n)
    {
        cout<<NO;
        return;
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < r; ++j)
        {
            int indx = i * r + j;

            if (i == 0 || i == r - 1 || j == 0 || j == r - 1)
            {
                if (s[indx] != '1')
                {
                    cout<<NO;
                    return;
                }
            }
            else
            {
                if (s[indx] != '0')
                {
                    cout<<NO;
                    return;
                }
            }
        }
    }
    cout<<YES;
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
