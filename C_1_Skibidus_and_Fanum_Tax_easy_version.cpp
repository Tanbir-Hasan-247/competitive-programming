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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b;
    cin >> b;

    a[0] = min(a[0], b - a[0]);
    for (int i = 1; i < n; i++)
    {
        ll mx = max(a[i], b - a[i]);
        ll mn = min(a[i], b - a[i]);
        
        if (mn >= a[i - 1])
            a[i] = mn;
        else if (mx >= a[i - 1])
            a[i] = mx;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
