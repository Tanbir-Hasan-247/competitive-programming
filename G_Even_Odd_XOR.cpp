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

    if (n == 3)
    {
        cout << "2 1 3\n";
        return;
    }
    if (n % 4 == 0)
    {
        ll add = (1LL << 30);
        ll curr = 1;
        for (ll i = 1; i <= n / 2; i++)
        {
            cout << curr << " " << curr + add << " ";
            curr++;
        }
        cout << "\n";
    }
    else if (n % 2 == 1)
    {
        ll add0 = (1LL << 25);
        ll add1 = (1LL << 26);
        cout << add1 << " ";
        ll curr = 1;
        for (int i = 1; i < n / 2; i++)
        {
            cout << curr << " " << curr + add0 << " ";
            curr++;
        }
        if ((n / 2) % 2 == 0)
            add1 += add0;
        cout << (n / 2) << " " << (n / 2) + add1 << "\n";
    }
    else
    {
        ll add0 = (1LL << 25);
        ll add1 = (1LL << 26);
        cout << "0 " << add1 << " ";
        ll curr = 1;
        for (ll i = 1; i <= (n / 2) - 2; i++)
        {
            cout << curr << " " << curr + add0 << " ";
            curr++;
        }
        cout << curr << " " << curr + add0 + add1 << " ";
        cout << "\n";
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
