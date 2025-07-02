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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = INT_MAX;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % k == 0)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            if (a[i] % 2 == 0)
                even++;
            int rem = a[i] % k;

            ans = min(ans, k - rem);
        }
    }

    if (k == 4)
    {
        if (even > 1)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            ans = min(ans, 2 - even);
        }
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
