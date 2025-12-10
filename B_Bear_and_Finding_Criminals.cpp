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
    int n, a;
    cin >> n >> a;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int l = a - i;
        int r = a + i;

        if (l < 1 && r > n)
            break;

        if (l >= 1 && r <= n)
        {
            if (l == r)
            {
                cnt += v[l];
            }
            else
            {
                if (v[l] && v[r])
                {
                    cnt += 2;
                }
            }
        }
        else if (l >= 1)
        {
            cnt += v[l];
        }
        else if (r <= n)
        {
            cnt += v[r];
        }
    }

    cout << cnt << endl;
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
