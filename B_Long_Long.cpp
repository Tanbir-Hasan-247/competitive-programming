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

    ll sum = 0;
    int cnt = 0;
    bool ok = false;

    for (int i = 0; i < n; i++)
    {
        sum += abs(a[i]);
        if (a[i] < 0 && !ok)
        {
            ok = true;
            cnt++;
        }
        if (a[i] > 0)
        {
            ok = false;
        }
    }

    cout << sum << " " << cnt << endl;
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
