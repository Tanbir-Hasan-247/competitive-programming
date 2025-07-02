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

// void solve()
// {
//     int n;
//     cin >> n;

//     vector<vector<char>> a(n, vector<char>(n));
//     vector<vector<char>> b(n, vector<char>(n));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//             b[i][j] = a[i][j];
//         }
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = i + 1; j < n; ++j)
//         {
//             swap(b[i][j], b[j][i]);
//         }
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         reverse(b[i].begin(), b[i].end());
//     }

//     deque<char> dq;
//     int layers = n / 2;
//     for (int x = 0; x < layers; x++)
//     {
//         char mx1 = 'a';
//         mx1 = max(mx1, a[x][x]);
//         mx1 = max(mx1, a[x][n - 1 - x]);
//         mx1 = max(mx1, a[n - 1 - x][x]);
//         mx1 = max(mx1, a[n - 1 - x][n - 1 - x]);
//         dq.push_back(mx1);

//         char mx2 = 'a';
//         for (int i = x + 1; i < n - 1 - x; i++)
//         {
//             mx2 = max(mx2, a[x][i]);
//             mx2 = max(mx2, a[i][x]);
//             mx2 = max(mx2, a[n - 1 - x][i]);

//             mx2 = max(mx2, a[i][n - 1 - x]);
//         }
//         dq.push_back(mx2);
//     }

//     int ans = 0;

//     for (int x = 0; x < layers; x++)
//     {
//         char mx1 = dq.front();
//         ans += (mx1 - a[x][x]);
//         ans += (mx1 - a[x][n - 1 - x]);
//         ans += (mx1 - a[n - 1 - x][x]);
//         ans += (mx1 - a[n - 1 - x][n - 1 - x]);
//         dq.pop_front();

//         char mx2 = dq.front();
//         for (int i = x + 1; i < n - 1 - x; i++)
//         {
//             ans += (mx2- a[x][i]);
//             ans += (mx2- a[n - 1 - x][i]);
//             ans += (mx2- a[i][x]);
//             ans += (mx2- a[i][n - 1 - x]);
//         }
//         dq.pop_front();
//     }
//     // for (int x = 0; x < layers; x++)
//     // {
//     //     char mx = dq.front();
//     //     dq.pop_front();
//     //     for (int i = x; i < n - x; i++)
//     //     {
//     //         if (a[x][i] != b[x][i])
//     //         {
//     //             if (b[x][i] > a[x][i])
//     //                 ans += (b[x][i] - a[x][i]);
//     //             else
//     //                 ans += (mx - a[x][i]);
//     //         }

//     //         if (a[n - 1 - x][i] != b[n - 1 - x][i])
//     //         {
//     //             if (b[n - 1 - x][i] > a[n - 1 - x][i])
//     //                 ans += (b[n - 1 - x][i] - a[n - 1 - x][i]);
//     //             else
//     //                 ans += (mx - a[n - 1 - x][i]);
//     //         }

//     //         if (i != x && i != n - 1 - x)
//     //         {
//     //             if (a[i][x] != b[i][x])
//     //             {
//     //                 if (b[i][x] > a[i][x])
//     //                     ans += (b[i][x] - a[i][x]);
//     //                 else
//     //                     ans += (mx - a[i][x]);
//     //             }

//     //             if (a[i][n - 1 - x] != b[i][n - 1 - x])
//     //             {
//     //                 if (b[i][n - 1 - x] > a[i][n - 1 - x])
//     //                     ans += (b[i][n - 1 - x] - a[i][n - 1 - x]);
//     //                 else
//     //                     ans += (mx - a[i][n - 1 - x]);
//     //             }
//     //         }
//     //     }
//     // }

//     cout << ans << endl;
// }

void solve()
{
    int n;
    cin >> n;

    vector<vector<char>> a(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int ans = 0;

    for (int i = 0; i < n / 2; ++i)
    {
        for (int j = 0; j < n / 2; ++j)
        {
            vector<char> group = {
                a[i][j],
                a[j][n - 1 - i],
                a[n - 1 - i][n - 1 - j],
                a[n - 1 - j][i]};

            char mx = *max_element(group.begin(), group.end());

            for (char c : group)
                ans += mx - c;
        }
    }

    if (n % 2)
    {
        int mid = n / 2;
        for (int i = 0; i < n / 2; ++i)
            ans += abs(a[i][mid] - a[n - 1 - i][mid]);
        for (int j = 0; j < n / 2; ++j)
            ans += abs(a[mid][j] - a[mid][n - 1 - j]);
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
