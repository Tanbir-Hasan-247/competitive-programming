#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<ll> l(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }

    vector<ll> a(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += max(l[i], r[i]);
        a[i] = min(l[i], r[i]);
    }

    sortDesc(a);
    for (int i = 0; i < k - 1; i++)
    {
        ans += a[i];
    }

    cout << ans + 1 << endl;
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
