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
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> v;

    if (n == 2 && abs(a[1] - a[0]) > 1)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (abs(a[i - 1] - a[i]) <= 1)
        {
            cout << 0 << endl;
            return;
        }
    }

    // for (int i = 1; i < n; i++)
    // {
    //     if (min(a[i - 1], a[i]) <= a[i + 1] && max(a[i - 1], a[i]) >= a[i + 1])
    //     {
    //         cout << 1 << endl;
    //         return;
    //     }
    // }

    if (is_sorted(all(a)) || is_sorted(a.rbegin(), a.rend()))
    {
        cout << -1 << endl;
        return;
    }

    cout << 1 << endl;
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
