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

    if (n == 1 || n == 3)
    {
        cout << -1 << endl;
        return;
    }

    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 2; i++)
        {
            cout << 3;
        }
        cout << 66 << endl;
    }
    else
    {
        for (int i = 0; i < n - 4; i++)
        {
            cout << 3;
        }
        cout << 6366 << endl;
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
