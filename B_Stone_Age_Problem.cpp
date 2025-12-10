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
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    vector<int> ok(n, 0);
    int curr_version = 0;
    ll val = 0;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            ll i, x;
            cin >> i >> x;

            if (ok[i-1] < curr_version)
            {
                a[i-1] = val;
                ok[i-1] = curr_version;
            }

            sum -= a[i - 1];
            a[i - 1] = x;
            sum += x;
            cout << sum << endl;
        }
        else
        {
            ll x;
            cin >> x;
            val = x;
            curr_version++;
            sum = x * n;
            cout << sum << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    return 0;
}
