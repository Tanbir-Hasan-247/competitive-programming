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
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    if (is_sorted(all(a)))
    {
        cout << "YES" << endl;
        return;
    }

    sort(all(b));

    a[0] = min(a[0], b[0] - a[0]);

    for (int i = 1; i < n; i++)
    {
        int l = 0, r = m - 1;
        bool ok = false;
        ll x;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            ll val = b[mid] - a[i];

            if (val >= a[i - 1])
            {
                x = val;
                ok = true;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (ok)
        {
            if (x >= a[i - 1] && a[i] >= a[i - 1])
            {
                a[i] = min(a[i], x);
            }
            else if (x >= a[i - 1] && a[i] < a[i - 1])
            {
                a[i] = x;
            }
        }
    }

    cout << (is_sorted(all(a)) ? "YES" : "NO") << endl;
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
