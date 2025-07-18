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
    int n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(all(a));
    reverse(all(a));
    
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += b[min(a[i], i)];
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
