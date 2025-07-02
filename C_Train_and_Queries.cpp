// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void check( unordered_map<ll, vector<int>> &m, ll x, ll y)
// {
//     bool found = false;
//     for (int idx_x : m[x])
//     {
//         for (int idx_y : m[y])
//         {
//             if (idx_x < idx_y)
//             {
//                 found = true;
//                 break;
//             }
//         }
//         if (found)
//             break;
//     }
//     found ? yes : no;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<ll> a(n);
//         unordered_map<ll, vector<int>> m;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             m[a[i]].push_back(i);
//         }
//         while (k--)
//         {
//             ll x, y;
//             cin >> x >> y;
//             if (m.count(x) && m.count(y))
//             {
//                 check(m, x, y);
//             }
//             else
//             {
//                 no;
//             }
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<ll, vector<int>> l, r;
        for (int i = 1; i <= n; i++)
        {
            int num;
            cin >> num;
            r[num].push_back(i);
            if (!l.count(num))
                l[num].push_back(i);
        }
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            if (l[x].empty() || r[y].empty() || l[x][0] >= r[y].back())
                no;
            else
                yes;
        }
    }
    return 0;
}
