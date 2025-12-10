#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].second >> a[i].first;
        }
        sort(a.begin(), a.end());

        long long ans = 0;
        pbds<int> p;
        for (auto x : a)
        {
            ans += p.size() - p.order_of_key(x.second);

            p.insert(x.second);
        }

        cout << ans << "\n";
    }
    return 0;
}