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
    string s;
    cin >> s;

    int i, j;
    string ans(n, ' ');
    if (n % 2 != 0)
    {
        i = n / 2;
        j = n / 2;
        i--;
        for (int k = 0; k < n; k++)
        {
            if (k % 2 == 0)
            {
                ans[j] = s[k];
                j++;
            }
            else
            {
                ans[i] = s[k];
                i--;
            }
        }
    }
    else
    {
        i = n / 2 - 1;
        j = n / 2 - 1;
        i++;
        for (int k = 0; k < n; k++)
        {
            if (k % 2 == 0)
            {
                ans[j] = s[k];
                j--;
            }
            else
            {
                ans[i] = s[k];
                i++;
            }
        }
    }

    // cout<< i<<" "<<j<<endl;

    if (i > 0)
    {
        i--;
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
