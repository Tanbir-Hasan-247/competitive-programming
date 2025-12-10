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

    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }

    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << 2 << " ";
            }
            else
            {
                cout << -2 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                cout << 3 << " ";
                break;
            }
            if (i % 2 == 0)
            {
                cout << 2 << " ";
            }
            else
            {
                cout << -2 << " ";
            }
        }
        cout << -1 << endl;
    }
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
