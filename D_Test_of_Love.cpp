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
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    int x = m - 1;
    int y = 0;
    int z = 0;

    for (char ch : s)
    {
        if (ch == 'L')
        {
            x = m;
        }
        else if (ch == 'W')
        {
            if (x <= 0)
            {
                y++;
            }
        }
        else
        {
            if (x <= 0)
            {
                z++;
            }
        }
        x--;
        if (y > k)
        {
            z++;
        }
    }

    if (z > 0)
    {
        NO;
    }
    else
    {
        YES;
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
