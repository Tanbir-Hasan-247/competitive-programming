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
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sortAsc(b);

    vector<ll> prefix1(n + 1, 0), prefix2(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        prefix1[i + 1] = prefix1[i] + a[i];
        prefix2[i + 1] = prefix2[i] + b[i];
    }

    int m;
    cin >> m;
    while (m--)
    {
        int x, l, r;
        cin >> x >> l >> r;

        if (x == 1)
        {
            cout << prefix1[r] - prefix1[l - 1] << endl;
        }
        else
        {
            cout << prefix2[r] - prefix2[l - 1] << endl;
        }
    }
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
