#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    pbds<int> p1, p2;

    vector<int> b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        b[i] = p1.size() - p1.order_of_key(a[i]);
        p1.insert(a[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        c[i] = p2.order_of_key(a[i]);
        p2.insert(a[i]);
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += 1LL * b[i] * c[i];
    }
    cout << ans << "\n";
    return 0;
}