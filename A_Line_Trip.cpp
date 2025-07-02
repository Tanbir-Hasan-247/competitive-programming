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
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    cin >> a[0];
    int ans = a[0];

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        ans = max(ans, a[i] - a[i - 1]);
    }

    ans = max(ans, 2 * (x - a[n - 1]));

    cout << ans << "\n";
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
