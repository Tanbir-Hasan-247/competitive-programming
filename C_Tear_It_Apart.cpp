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
    string s;
    cin >> s;

    ll n = s.size(), c = 0, mini = INT_MAX, maxi;
    for (char i = 'a'; i <= 'z'; i++)
    {
        c = 0, maxi = 0;
        for (ll j = 0; j < n; j++)
        {
            if (s[j] != i)
            {
                c++;
                if (c > maxi)
                    maxi = c;
            }
            else
            {
                c = 0;
            }
        }

        if (maxi < mini)
        {
            mini = maxi;
        }
    }

    if (mini == 0)
        cout << 0 << "\n";
    else
    {
        c = 0;
        while (mini != 1)
        {
            mini /= 2;
            c++;
        }
        cout << c + mini << "\n";
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
