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
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < 4; j++)
        {
            if (row[j] == '#')
            {
                a.push_back(j + 1);
                break;
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
