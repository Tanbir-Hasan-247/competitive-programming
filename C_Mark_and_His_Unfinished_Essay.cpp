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
    ll n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;

    vector<pair<ll, ll>> ope;
    vector<ll> len;
    len.push_back(n);

    for (ll i = 0; i < c; ++i)
    {
        ll l, r;
        cin >> l >> r;
        --l, --r;
        ope.push_back({l, r});
        len.push_back(len.back() + (r - l + 1));
    }

    while (q--)
    {
        ll k;
        cin >> k;
        --k;

        for (ll i = c - 1; i >= 0; --i)
        {
            if (k >= len[i])
            {
                k = ope[i].first + (k - len[i]);
            }
        }

        cout << s[k] << "\n";
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
