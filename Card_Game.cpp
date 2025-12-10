#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define sort(a) sort(a.begin(), a.end())
#define sortDis(a) sort(a.begin(), a.end(), greater<int>())
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define endl "\n"

void solve()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int a[4][4] = {{a1, b1, a2, b2}, {a1, b2, a2, b1}, {a2, b1, a1, b2}, {a2, b2, a1, b1}};

    int ans = 0;

    for (int i = 0; i < 4; i++)
    {
        int r1 = 0;
        int r2 = 0;

        if (a[i][0] > a[i][1])
            r1++;
        else if (a[i][0] < a[i][1])
            r2++;

        if (a[i][2] > a[i][3])
            r1++;
        else if (a[i][2] < a[i][3])
            r2++;

        if (r1 > r2)
            ans++;
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
