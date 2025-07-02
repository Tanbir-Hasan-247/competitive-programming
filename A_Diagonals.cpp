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
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << 0 << endl;
        return;
    }
    else if (k <= n)
    {
        cout << 1 << endl;
        return;
    }

    int cnt = 0;
    int diag = n;
    while (k && k >= diag)
    {
        if (diag == n)
        {
            k -= diag;
            cnt++;
            diag--;
        }
        else
        {
            k -= diag;
            cnt++;
            if (k >= diag)
            {
                k -= diag;
                cnt++;
            }
            else if (k > 0)
            {
                k = 0;
                cnt++;
            }
            diag--;
        }
    }
    if (k > 0)
        cnt++;

    cout << cnt << endl;
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
