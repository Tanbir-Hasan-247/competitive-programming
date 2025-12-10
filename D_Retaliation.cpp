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
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    ll numerator = 2 * a[0] - a[1];
    ll denominator = n + 1;

    ll y = numerator / denominator;
    if (y < 0)
    {
        cout << "NO"<<endl;
        return;
    }

    ll x = a[0] - y * n;
    if (x < 0)
    {
        cout << "NO"<<endl;
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        ll expected = x * (i + 1) + y * (n - i);
        if (a[i] != expected)
        {
            cout << "NO"<<endl;
            return;
        }
    }

    cout << "YES"<<endl;
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
