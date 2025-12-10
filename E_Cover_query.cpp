/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 18:47:00 06/12/2025
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define allr(a) a.rbegin(), a.rend()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    ll n, q;
    cin >> n >> q;

    set<pair<ll, ll>> st;
    ll cnt = 0;

    for (int i = 0; i < q; i++)
    {
        ll l, r;

        cin >> l >> r;

        auto it = st.lower_bound({l, -1});
        (it != st.begin()) ? --it : it;

        while (it != st.end())
        {
            ll L = it->first;
            ll R = it->second;

            if (L > r + 1)
                break;

            (R >= l - 1) ? l = min(l, L), r = max(r, R), cnt -= (R - L + 1), it = st.erase(it) : it++;
        }

        st.insert({l, r});
        cnt += (r - l + 1);

        cout << n - cnt << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }

    return 0;
}
