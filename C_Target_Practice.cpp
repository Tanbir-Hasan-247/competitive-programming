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
    vector<string> s(10);

    for (int i = 0; i < 10; i++)
    {
        cin >> s[i];
    }

    // int c[10][10] = {0};

    int y = 1;
    int ans = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 10 - i - 1; j++)
        {
            if (s[i][j] == 'X')
            {
                // c[i][j] = y;
                ans += y;
            }

            if (s[j][i] == 'X' && i != j)
            {
                // c[j][i] = y;
                ans += y;
            }
        }
        y++;
    }

    y = 1;
    for (int i = 9; i > 4; i--)
    {
        for (int j = i; j >= 9 - i; j--)
        {
            if (s[i][j] == 'X')
            {
                // c[i][j] = y;
                ans += y;
            }
            if (s[j][i] == 'X' && i != j)
            {
                // c[j][i] = y;
                ans += y;
            }
        }
        y++;
    }
    // ans = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         ans += c[i][j];
    //     }
    //     // cout<<endl;
    // }

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
