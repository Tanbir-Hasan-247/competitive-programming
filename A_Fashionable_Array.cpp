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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sortAsc(a);
    int op = n;

    for (int i = 0; i < n; i++)
    {
        if ((a[i] + a[n - 1]) % 2 == 0)
        {
            op = i;
            break;
        }
    }

    int ans = op;

    for (int i = n - 1; i >= 0; i--)
    {
        if ((a[i] + a[0]) % 2 == 0)
        {
            op = n - i - 1;
            break;
        }
    }

    cout << min(ans, op) << endl;
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
