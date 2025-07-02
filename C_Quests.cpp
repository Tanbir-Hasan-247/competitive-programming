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

    vector<ll> a(n), b(n);

    ll sum = 0;
    vector<ll> prefix(n), maxval(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        prefix[i] = sum;
    }

    ll m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        m = max(b[i], m);
        maxval[i] = m;
    }

    // ll mx = maxVal(b);

    // if (k > n)
    // {
    //     cout << sum + (k - n) * mx << endl;
    //     return;
    // }

    ll ans = 0;

    if (k <= n)
    {
        for (int i = 0; i < k; i++)
        {

            ans = max(ans, prefix[i] + ((k - i - 1) * maxval[i]));
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {

            ans = max(ans, prefix[i] + ((k - i - 1) * maxval[i]));
        }
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
