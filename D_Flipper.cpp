/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 18:35:23 26/10/2025
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define allr(a) a.rbegin(), a.rend()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
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

    if (n == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
        return;
    }

    int x = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            x--;
        }
        else
            break;
    }

    if (x == 0)
    {
        for (int i = n - 1; i >= 1; i--)
        {
            cout << i << " ";
        }
        cout << n << endl;
        return;
    }

    int start;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            start = i - 1;
            break;
        }
    }

    if (start == n - 2)
    {
        start++;
    }

    int r = start;

    vector<int> ans;

    for (int l = start; l >= 0; l--)
    {
        vector<int> dex;
        for (int i = start + 1; i < n; i++)
        {
            dex.push_back(a[i]);
        }
        for (int i = r; i >= l; i--)
        {
            dex.push_back(a[i]);
        }
        for (int i = 0; i < l; i++)
        {
            dex.push_back(a[i]);
        }
        if (ans.empty())
        {
            ans = dex;
        }
        else
        {
            ans = max(ans, dex);
        }
    }

    int l = 0;

    for (int r = 0; r < n; r++)
    {
        vector<int> dex;
        for (int i = r + 1; i < n; i++)
        {
            dex.push_back(a[i]);
        }
        for (int i = r; i >= l; i--)
        {
            dex.push_back(a[i]);
        }

        if (ans.empty())
        {
            ans = dex;
        }
        else
        {
            ans = max(ans, dex);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
