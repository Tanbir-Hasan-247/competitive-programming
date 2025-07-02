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
    char c;
    cin >> n >> m >> c;

    vector<vector<char>> a(n, vector<char>(m));
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][jc] >= 'A' && a[i][j] <= 'Z')
                mp[a[i][j]]++;
        }
    }

    int ans = 0;
    mp[c] = 0; 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == c)
            {
                if (i - 1 >= 0 && mp[a[i - 1][j]])
                {
                    ans++;
                    mp[a[i - 1][j]] = 0;
                }
                if (i + 1 < n && mp[a[i + 1][j]])
                {
                    ans++;
                    mp[a[i + 1][j]] = 0;
                }
                if (j - 1 >= 0 && mp[a[i][j - 1]])
                {
                    ans++;
                    mp[a[i][j - 1]] = 0;
                }
                if (j + 1 < m && mp[a[i][j + 1]]) 
                {
                    ans++;
                    mp[a[i][j + 1]] = 0;
                }
            }
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
