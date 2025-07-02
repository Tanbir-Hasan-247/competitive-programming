#include <bits/stdc++.h>
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
    vector<int> a(n), b(n), c(n);
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (mx <= a[i])
        {
            mx = a[i];
        }
        if (mn >= a[i])
        {
            mn = a[i];
        }
    }
    b[0] = mx;
    for (int i = 0; i < n; i++)
    {

        c[i] = mx;
        if (i != 0)
        {
            b[i] = mn;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += c[i] - b[i];
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
