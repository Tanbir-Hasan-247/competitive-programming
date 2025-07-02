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

bool isValid(int x, int n, int m, const vector<vector<int>> &a)
{
    vector<int> row(n, 0), col(m, 0);
    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] > x)
            {
                ++row[i];
                ++col[j];
                ++cnt;
                if (a[i][j] > x + 1)
                    return false;
            }
        }
    }

    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < m; ++c)
        {
            if (row[r] + col[c] - (a[r][c] > x) == cnt)
                return true;
        }
    }

    return cnt == 0;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int mx = 0;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
        }

    int l = 0, h = mx, ans = mx;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (isValid(mid, n, m, a))
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
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
