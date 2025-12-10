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
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a(m);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[i] = {y, x};
    }

    sortAsc(a);
    ll ans = 0;
    for (int i = m - 1; i >= 0; i--)
    {
        // cout<<a[i].first<<" "<<a[i].second<<endl;
        if (n <= a[i].second)
        {
            ans += (n * a[i].first);
            break;
        }
        else
        {
            ans += (a[i].first * a[i].second);
            n -= a[i].second;
        }
    }

    cout << ans << endl;
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
