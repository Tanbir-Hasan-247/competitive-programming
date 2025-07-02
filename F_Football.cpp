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
    int n, a, b;
    cin >> n >> a >> b;

    if (n == 1)
    {
        if (a == b)
        {
            cout << 1 << endl;
            cout << a << ":" << b << endl;
            return;
        }
        else
        {
            cout << 0 << endl;
            cout << a << ":" << b << endl;
            return;
        }
    }

    vector<pair<int, int>> v(n + 1, {0, 0});

    int pos = 1;
    int draw = 0;

    for (; pos <= n;)
    {
        if (a > 0)
        {
            v[pos].first++;
            a--;
            pos++;
        }
        else
        {
            break;
        }
    }

    if (a > 0)
    {
        v[1].first += a;
    }

    if (b > 0)
    {
        for (; pos <= n;)
        {
            if (b > 0)
            {
                v[pos].second++;
                b--;
                pos++;
            }
            else
            {
                break;
            }
        }
    }

    if (b > 0)
    {
        v[n].second += b;
    }

    for (int i = 1; i <= n; i++)
    {
        if (v[i].first == v[i].second)
        {
            draw++;
        }
    }

    cout << draw << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << v[i].first << ":" << v[i].second << endl;
    }
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
