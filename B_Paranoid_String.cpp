#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = n;
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] != s[i])
        {
            ans += i;
        }
    }

    cout << ans  << "\n";
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
