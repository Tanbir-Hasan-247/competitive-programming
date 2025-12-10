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
        a[i]--; 
    }

    string s;
    cin >> s;

    vector<int> result(n, 0);
    vector<bool> vis(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vector<int> v;
            int cur = i;
            while (!vis[cur])
            {
                vis[cur] = true;
                v.push_back(cur);
                cur = a[cur];
            }

            int cnt = 0;
            for (int indx : v)
            {
                if (s[indx] == '0')
                {
                    cnt++;
                }
            }

            for (int indx : v)
            {
                result[indx] = cnt;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
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
