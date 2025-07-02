#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve()
{
    int n;
    cin >> n;

    map<int, vector<int>> mp;
    multiset<int> remP, remQ;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x].push_back(i);
        remP.insert(i + 1);
        remQ.insert(i + 1);
    }

    for (auto [a, b] : mp)
    {
        if (b.size() > 2)
        {
            NO;
            return;
        }
    }

    vector<int> p(n, -1), q(n, -1);
    for (auto [a, b] : mp)
    {
        if (b.size() == 1)
        {
            p[b[0]] = a;
            remP.erase(remP.find(a));
        }
        else if (b.size() == 2)
        {
            p[b[0]] = a;
            q[b[1]] = a;
            remP.erase(remP.find(a));
            remQ.erase(remQ.find(a));
        }
    }

    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (p[i] == -1 && q[i] == -1)
        {
            if (remP.empty() || remQ.empty())
            {
                ok = true;
                break;
            }
            auto px = prev(remP.end());
            auto qx = prev(remQ.end());
            p[i] = *px;
            q[i] = *qx;
            remP.erase(px);
            remQ.erase(qx);
        }
        else if (p[i] == -1)
        {
            if (remP.empty())
            {
                ok = true;
                break;
            }
            auto x = remP.upper_bound(q[i]);
            if (x == remP.begin())
            {
                ok = true;
                break;
            }
            x--;
            p[i] = *x;
            remP.erase(x);
        }
        else if (q[i] == -1)
        {
            if (remQ.empty())
            {
                ok = true;
                break;
            }
            auto x = remQ.upper_bound(p[i]);
            if (x == remQ.begin())
            {
                ok = true;
                break;
            }
            x--;
            q[i] = *x;
            remQ.erase(x);
        }
    }

    if (ok)
    {
        NO;
        return;
    }

    YES;
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << q[i] << " ";
    }
    cout << "\n";
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
