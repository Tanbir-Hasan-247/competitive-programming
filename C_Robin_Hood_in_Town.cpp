#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sortAsc(a) sort(a.begin(), a.end())
#define sortDesc(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
        return;
    }

    sortAsc(a);

    long long total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += a[i];
    }

    long long middle = a[n / 2];

    long long x = n * middle * 2 - total_sum;

    cout << max(0LL, x + 1) << endl;
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