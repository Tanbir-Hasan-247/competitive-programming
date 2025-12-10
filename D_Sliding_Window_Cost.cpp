#include <bits/stdc++.h>
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    pbds<pair<ll, ll>> p1, p2;
    ll left_sum = 0, right_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i >= k)
        {
            if (p1.find({a[i - k], i - k}) != p1.end())
            {
                left_sum -= a[i - k];
                p1.erase({a[i - k], i - k});
            }
            else
            {
                right_sum -= a[i - k];
                p2.erase({a[i - k], i - k});
            }
        }

        if (!p1.empty() && a[i] <= p1.find_by_order(p1.size() - 1)->first)
        {
            left_sum += a[i];
            p1.insert({a[i], i});
        }
        else
        {
            right_sum += a[i];
            p2.insert({a[i], i});
        }

        if (p1.size() > p2.size() + 1)
        {
            auto max_left = *p1.find_by_order(p1.size() - 1);
            left_sum -= max_left.first;
            right_sum += max_left.first;
            p1.erase(max_left);
            p2.insert(max_left);
        }
        else if (p2.size() > p1.size())
        {
            auto min_right = *p2.find_by_order(0);
            right_sum -= min_right.first;
            left_sum += min_right.first;
            p2.erase(min_right);
            p1.insert(min_right);
        }

        if (i >= (k - 1))
        {
            ll median = p1.find_by_order(p1.size() - 1)->first;
            ll cost = median * p1.size() - left_sum + right_sum - median * p2.size();
            cout << cost << " ";
        }
    }

    return 0;
}
