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

const int MOD = 998244353;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<ll> p(n + 1);
    p[0] = 1;
    for (int k = 1; k <= n; k++)
    {
        p[k] = (p[k - 1] * 2) % MOD;
    }

    for (int i = 0; i < n; i++)
    {
        ll ans = 0;
        for (int j = 0; j <= i; j++)
        {
            ll val = (p[a[j]] + p[b[i - j]]) % MOD;
            ans = max(ans, val);
        }
        cout << ans << " ";
    }
    cout << endl;
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
