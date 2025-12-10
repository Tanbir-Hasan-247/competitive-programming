#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    ll mx = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = LLONG_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        ll x = min(a[i], a[i + 1]);
        ans = max(ans, x);
    }

    for (int i = 1; i < n - 1; i++)
    {
        vector<ll> b = {a[i - 1], a[i], a[i + 1]};
        sort(all(b));
        ans = max(ans, b[1]);
    }

    cout << ans << endl;
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
