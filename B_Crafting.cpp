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

    vector<ll> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll maxDiff = 0;
    int idx = -1;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] < b[i])
        {
            ll diff = b[i] - a[i];
            if (diff > maxDiff)
            {
                maxDiff = diff;
                idx = i;
            }
        }
    }

    if (idx == -1)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        if (i == idx)
            continue;
        if (a[i] - maxDiff < b[i])
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
