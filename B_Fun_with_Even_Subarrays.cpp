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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // vector<pair<int, int>> v;

    // // Create an array b filled with a[0]
    // vector<int> b(n, a[0]);

    // if (n >= 1) v.push_back({0, 0});
    // if (n >= 2) v.push_back({1, 1});
    // int i = 2;
    // int step = 2;

    // // Build the remaining ranges, safely within bounds
    // while (i < n)
    // {
    //     int j = min(n - 1, i + step - 1);  // Clamp to n - 1
    //     v.push_back({i, j});
    //     i = j + 1;
    //     step *= 2;
    // }

    // int ans = 0;

    // for (auto [x, y] : v)
    // {
    //     for (int j = x; j <= y; j++)
    //     {
    //         if (a[j] != b[j])
    //         {
    //             ans++;
    //             break;
    //         }
    //     }
    //     // cout << "(" << x << ", " << y << ")" << endl;
    // }

    // cout << ans << endl;

    reverse(a.begin(), a.end());

    int ans = 0, x = 1;

    while (x < n)
    {
        if (a[x] == a[0])
        {
            x++;
            continue;
        }
        ans++;
        x *= 2;
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
