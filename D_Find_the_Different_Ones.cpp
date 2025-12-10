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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> dp(n);
    dp[n - 1] = n;

    for (int i = n - 2; i >= 0; --i)
    {
        if (a[i] == a[i + 1])
            dp[i] = dp[i + 1];
        else
            dp[i] = i + 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;

        // if (a[l] != a[r])
        // {
        //     cout << l + 1 << " " << r + 1 << endl;
        //     continue;
        // }

        // l++, r--;
        // bool ok = false;
        // while (l <= r)
        // {
        //     if (a[l] != a[r])
        //     {
        //         ok = true;
        //         cout << l + 1 << " " << r + 1 << endl;
        //         break;
        //     }
        //     else if (a[l - 1] != a[r])
        //     {
        //         ok = true;
        //         cout << l << " " << r + 1 << endl;
        //         break;
        //     }
        //     l++, r--;
        // }
        // if (!ok)
        // {
        //     cout << -1 << " " << -1 << endl;
        // }
        if (dp[l] > r)
        {
            cout << -1 << " " << -1 << endl;
        }
        else
        {
            cout << l + 1 << " " << dp[l] + 1 << endl; 
        }
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
