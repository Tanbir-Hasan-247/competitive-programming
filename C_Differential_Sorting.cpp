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

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (is_sorted(all(a)))
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n - 2; i++)
    {
        a[i] = a[n - 2] - a[n - 1];
    }

    if (!is_sorted(all(a)))
    {
        cout << -1 << endl;
        return;
    }

    cout << n - 2 << endl;
    for (int i = 0; i < n-2; i++)
    {
        cout<<i+1 << " " << n - 1 << " " << n  << endl;
    }
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
