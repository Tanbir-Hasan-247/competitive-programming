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
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < 5; i++)
    {
        if (a <= b && a <= c)
        {
            a++;
        }
        else if (b <= a && b <= c)
        {
            b++;
        }
        else
        {
            c++;
        }
    }

    cout << a * b * c << "\n";
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
