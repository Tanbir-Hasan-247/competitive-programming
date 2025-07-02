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
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n + 1);

    bool ok = false;
    for (int i = y - 1; i >= 1; i--)
    {
        a[i] = (ok ? 1 : -1);
        ok = !ok;
    }
    for (int i = y; i <= x; i++)
    {
        a[i] = 1;
    }
    ok = false;
    for (int i = x + 1; i <= n; i++)
    {
        a[i] = (ok ? 1 : -1);
        ok = !ok;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
