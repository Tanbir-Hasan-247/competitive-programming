#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<tuple<ll, ll, ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        ll l, r, c;
        cin >> l >> r >> c;
        a[i] = {l, r, c};
    }

    sort(all(a));

    // priority_queue<pair<ll, ll>> pq;
    // int idx = 0;

    // while (true)
    // {
    //     while (idx < n && get<0>(a[idx]) <= k)
    //     {
    //         pq.push({get<2>(a[idx]), get<1>(a[idx])});
    //         idx++;
    //     }

    //     while (!pq.empty() && pq.top().second < k)
    //     {
    //         pq.pop();
    //     }

    //     if (pq.empty())
    //     {
    //         break;
    //     }

    //     ll mx = pq.top().first;

    //     if (mx <= k)
    //     {
    //         break;
    //     }

    //     k = mx;
    // }
    for (int i = 0; i < n; i++)
    {
        ll x = get<0>(a[i]), y = get<1>(a[i]), z = get<2>(a[i]);
        if (x <= k && z >= k)
            k = z;
    }

    cout << k << endl;
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
